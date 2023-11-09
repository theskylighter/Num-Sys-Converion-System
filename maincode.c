#include<stdio.h>
#include <math.h>
int BinaryToDecimal(int);
int BinaryToOctal(int);
void BinaryToHexadecimal(int);
void DecimalToBinary(int);
void DecimalToOctal(int);
void DecimalToHexadecimal(int);
void OctalToBinary(int);
void OctalToDecimal(int);
int BinaryToDecimal(int iNum)
{
	int arr[]={1,2,4,8,16,32,64,128,256,512,1024};
	int bin=0,i=0,Rem=0;
		while(iNum!=0)
		{

			Rem=iNum%10;
			if(Rem==1)
			{
				bin=bin+Rem*arr[i];
			}
			
			iNum=iNum/10;
			i++;
		}	
	return bin;
}
int BinaryToOctal(int iNum)
{
	int iVal=BinaryToDecimal(iNum);
	
	int oct=0,i=1,Rem=0;
		while(iVal!=0)
		{
			Rem=iVal%8;
			oct=oct+Rem*i;
			iVal=iVal/8;

			i=i*10;
		}	
	return oct;
}
void BinaryToHexadecimal(int iNum)
{
	int iVal=BinaryToDecimal(iNum);
	
	int hex=0,i=0,len=0,iRem[100];
		while(iVal!=0)
		{
			iRem[i]=iVal%16;
			iVal=iVal/16;
			i++;
			len++;
		}	
		printf("\nEquivalent Hexa-Decimal Number : ");
    	for(i=len-1;i>=0;i--)
    	{
    	    switch(iRem[i])
    	    {
    	        case 10:
    	            printf("A"); 
    	            break;
    	        case 11:
    	            printf("B"); 
    	            break;          
        	    case 12:
        	        printf("C"); 
        	        break; 
        	    case 13:
        	        printf("D"); 
        	        break;
            	case 14:
            	    printf("E"); 
            	    break;
            	case 15:
            	    printf("F"); 
            	    break;
            	default:
            	    printf("%d",iRem[i]);
      		  }    
    	}
}
void DecimalToBinary(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%2;
		iNum=iNum/2;
		i++;
		len++;
	}	
	for(i=len-1;i>=0;i--)
	{
		printf("%d",iRem[i]);
	}
}
void DecimalToOctal(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%8;
		iNum=iNum/8;
		i++;
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%d",iRem[i]);
	}
}
void DecimalToHexadecimal(int iNum)
{
	int iRem[10],i=0,len=0;
	while(iNum!=0)
	{
		iRem[i]=iNum%16;
		iNum=iNum/16;
		i++;
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		switch(iRem[i])
    	{
    	    case 10:
    	        printf("A"); 
    	        break;
    	    case 11:
    	        printf("B"); 
    	        break;          
        	case 12:
        	    printf("C"); 
        	    break; 
        	case 13:
        	    printf("D"); 
        	    break;
          	case 14:
            	printf("E"); 
            	break;
            case 15:
            	printf("F"); 
            	break;
            default:
            	printf("%d",iRem[i]);
        } 
	}	
}
void OctalToBinary(int iNum)
{	int oct=iNum;
	int rem[50],len=0,decimal=0,i=0,num,ans;
     
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
     
    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);
     
    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }

}
void OctalToDecimal(int)
{
}
int main()
{
	int n=0,i=0;
	int choice=1,iNo=0,Ret=0,Rem=0;
	while(choice)
	{
		printf("\n\nEnter your choice:\n");
		printf("................................................\n");
		printf("			NUMBER SYSTEM CONVERSION			\n");
		printf("1.	Binary 		to	 Decimal 	 conversion  ...\n");
		printf("2.	Binary 		to	 Octal 		 conversion  ...\n");
		printf("3.	Binary 		to	 Hexadecimal conversion  ...\n");
		printf("4.	Decimal	 	to	 Binary		 conversion  ...\n");
		printf("5.	Decimal 	to	 Octal 		 conversion  ...\n");
		printf("6.	Decimal 	to	 Hexadecimal conversion  ...\n");
		printf("7.	Octal 		to	 Binary 	 conversion  ...\n");
		printf("8.	Octal 		to	 Decimal	 conversion  ...\n");
		printf("9.	Octal 		to	 Hexadecimal conversion  ...\n");
		printf("10.	Hexadecimal	to	 Binary      conversion  ...\n");
		printf("11.	Hexadecimal to	 Decimal 	 conversion  ...\n");
		printf("12.	Hexadecimal	to	 Octal 		 conversion  ...\n");
		printf("................................................\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1	:
				A:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp=iNo;
				while(temp!=0)
				{
					Rem=temp%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp);
						printf("try again..\n");
						goto A;
					}
					
					temp=temp/10;
				}
				Ret=BinaryToDecimal(iNo);
				printf("Decimal converion of %d is : %d",iNo,Ret);
				break;
			case 2	:
				B:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp2=iNo;
				while(temp2!=0)
				{
					Rem=temp2%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp2);
						printf("try again..\n");
						goto B;
					}
					temp2=temp2/10;
				}
				Ret=BinaryToOctal(iNo);
				printf("Octal converion of number %d  is: %d",iNo,Ret);
				break;
			case 3	:
				C:
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				int temp3=iNo;
				while(temp3!=0)
				{
					Rem=temp3%10;
					if(Rem>1)
					{
						printf("%d is not a binary number.\n",temp3);
						printf("try again..\n");
						goto C;
					}
					temp3=temp3/10;
				}
				BinaryToHexadecimal(iNo);
				break;
			case 4	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("Binary of %d is:",iNo);
				DecimalToBinary(iNo);
				break;
			case 5	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("octal of %d is:",iNo);
				DecimalToOctal(iNo);
				break;
			case 6	:
				printf("\nEnter Decimal number (0 to 9) :  "); 
				scanf("%d",&iNo);
				printf("Hexadecimal of %d is:",iNo);
				DecimalToHexadecimal(iNo);
				break;
			case 7	:
				D:
				printf("\nEnter octal number (0 to 7) :  "); 
				scanf("%d",&iNo);
				int temp4=iNo;
                while(temp4!=0)
                {
                    Rem=temp4%10;
                    if(Rem>7)
                    {
                        printf("\n%d is not a octal number.\n",Rem);
                        goto D;
                    }
                    else
                    {
                    temp4=temp4/10;
                    i++;
                    }
                }
				printf("Binary of %d is:",iNo);
				OctalToBinary(iNo);
				break;
			case 8	:
			
				printf("\nEnter number in Binary forms (0s & 1s):  ");
				scanf("%d",&iNo);
				break;
			case 9	:
				break;

			case 10	:
				break;
			case 11	:
				break;

			case 12	:
				break;
		
		}
		
	}	
	return 0;
}