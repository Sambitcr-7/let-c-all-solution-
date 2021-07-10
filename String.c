// ***********************************Strings***********************
//library string function 
#include<stdio.h>
#include<math.h>
int main(){
    char arr[]= "Bamboozed";
    int len1, len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");
    printf("string = %s length = %d\n", "Humpty Dumpty", len2);
    return 0;
}


//the function strlen 
#include<stdio.h>
#include<math.h>

int xstrlen(char*);
int main()
{
    char arr[] = "Bamboozled";
    int len1, len2;
    len1 = xstrlen(arr);
    len2 = xstrlen("Humpty Dumpty");
    printf("string = %s length = %d\n", arr, len1);
    printf("string = %s length = %d\n", "Humpty Dumpty", len2);
    return 0;
}
int xstrlen(char *s)
{
    int lenght = 0;
    while (*s !='\0')
    {
        lenght++;
        s++;
    }
    return (lenght);
}


//To extract a substring from a string 
#include<stdio.h>
#include<math.h>

int main()
{
    char str[20], news[20];
    char *s, *t;
    int pos, n, i;
    printf("\nEnter a string :");
    scanf("%s", str);
    printf("Enter position and no.of characters to extract:");
    scanf("%d%d",&pos,&n);
    s= str;
    t = news;
    if(pos <0 || pos > strlen(str))
    {
        printf("Improper position value ");
        exit(1);
    }
    if(n<0)
    n = 0;
    if(n > strlen(str))
    n = n - strlen(str) - 1;
    s = s + pos;
    for(i = 0; i < n; i++)
    {
        *t = '\0';
        printf("The substring is : %s\n", news);
        return 0;
    }
}


//To convert a string to an integer
#include<stdio.h>
#include<math.h>

int main(){
    char str[6];
    int num = 0, i;
    printf("Enter a string containing a number :");
    scanf("%s", str);
    for(i = 0; str[i]!= '\0'; i++)
    {
        if(str[i] >=48 && str[i] <= 57)
        num = num * 10 + (str[i] - 48);
        else
        {
            printf("Not a valid string\n");
            return 1;
        }
    }
    printf("The number is : %d\n ", num);
    return 0;
}


// Generate Fibonacci words of order 0 through 5
#include<stdio.h>
#include<math.h>

int main(){
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    int i;
    for(i = 1; i <= 5; i++)
    {
        strcpy(str, lastterm);
        strcat(str, lastbutoneterm);
        printf("%s\n", str);
        strcpy(lastbutoneterm,lastterm);
        strcpy(lastterm,str);
    }
    return 0;
}

//Uniquely identify a book a 10 digits ISBN Number
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[11];
    int i,j , sum;

    printf("Enter 10 digt ISBN number:");
    scanf("%s", str);

    j = 2;
    sum = 0;
    for(i = 8 ; i >= 0; i--)
    {
        sum = sum + (str[i]-'0')*j;
        j++;
    }
    for(i = 0; i <=9; i++)
    {
        if((sum +i)% 11 == 0)
        break;
    }
    if(i == str[9]- '0')
    printf("ISBN Number is verified and found to be correct \n");
    else
    printf("Checksum error in ISBN Number\n");
    return 0;
}


//Verify correctnes of Credit Card Number
#include<stdio.h>
#include<conio.h>
int main()
{
	char num[20];
	int i, sum = 0;
	printf("\nEnter the 16 digit credit card number : ");
	scanf("%s", num);

	for (i = 0; i <= 15; i++)//Traversing all numbers
	{
		num[i] -= 48;//converting each character in numeral
		if ((i % 2))//if the number is on right so it will directly get summed
			sum = sum + num[i];
		else//if number is on left, so it will first get doubled
		{
			num[i] *= 2;
			if (num[i] >= 10)//if number is greater then or equal to 10 so it will subtracted from 9
				num[i] -= 9;
			sum = sum + num[i];	//summing number
		}
	}
	if (!(sum % 10))//if sum is divisble by 10 so number is valid
		printf("\nNumber is valid.");
	else
		printf("\nNumber is not valid.");
	_getch();
	return 0;
}

 
