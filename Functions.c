// ***************************Functions************************
//Calculate factorial value of an integer using a function 
#include<stdio.h>
int main(){
    int num;
    int factorial;
    printf("%d", &num);
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d = %ld\n", num , factorial);
    return 0;

}

int fact(int num)
{
    int i;
    int factorial = 1;
    for(i = 1; i <= num; i++)
    factorial = factorial * i;

    return(factorial);
}


//program to calculate power of a value
#include<stdio.h>
float power (float,int);
int main(){
    float x, pow;
    int y;
    printf("\nEnter two number:");
    scanf("%f%d", &x, &y);
    pow = power(x,y);
    printf("%f to the power %d = %f\n", x, y, pow);
    return 0;
}
float power (float x, int y)
{
    int i;
    float p = 1;
    for ( i = 1; i <=y; i++)
    p= p*x;
    return(p);
}


//convert given year into its roman equivalent 
#include<stdio.h>
int main(){
    int yr;
    printf("\nEnter year:");
    scanf("%d", &yr);
    yr = romanise (yr , 1000, 'm');
    yr = romanise (yr , 500, 'd');
    yr = romanise (yr, 100,'c');
    yr = romanise (yr, 50 , 'l');
    yr = romanise (yr , 10 , 'x');
    yr = romainse (yr,5, 'v');
    romainse(yr , 1 ,'i');

    return 0;
}

int romansie (int y, int k , char ch)
{
    int i, j;
    j = y/k;
    for(i = 1; i <=j ; i++)
    printf("%c", ch);
    return(y-k*j);
}

//Calculate factroial value of an integer using a function
#include<stdio.h>

long fact(int);
int main()
{
    int num;
    long factorial;
    printf("\nEnter a number:");
    scanf("%d", &num);

    factorial = fact(num);
    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}

long fact (int num)
{
    int i; 
    long factorial =1;

    for(i = 1; i <=num ; i++)
    factorial = factorial*i;
    return(factorial);
}


//Program to calvulate power of value 
#include<stdio.h>
long power (int , int);
int main(){
    int x, y;
    long pow;

    printf("\nEnter two number :");
    scanf("%d%d", &x,&y);

    pow = power(x,y); //Function call
    printf("%d to the power %d = %d\n", x,y,pow);

    return 0;
}

long power (int x, int y)
{
    int i; 
    long p = 1;

    for(i = 1; i <=y; i++)
    p=p*x;

    return (p);

}

//Convert given year into its roman equivalent
#include<stdio.h>
int romanise(int , int , char);
int main(){
    int yr;
    printf("\nEnter year:");
    scanf("%d", &yr);



    yr = romanise (yr , 1000, 'm');
    yr = romanise (yr , 500, 'd');
    yr = romanise (yr, 100,'c');
    yr = romanise (yr, 50 , 'l');
    yr = romanise (yr , 10 , 'x');
    yr = romanise (yr,5, 'v');
    romanise(yr , 1 ,'i');

    return 0;   
}

int romanise(int y, int k, char ch)
{
    int i, j;

    if( y == 9)
    {
        printf("ix");
        return(y%9);

    }

    if(y == 4)
    {
        printf("iv");
        return(y%4);
    }

    j = y / k;

    for(i = 1; i <= j ; i++)
    printf("%c", ch);

    return(y-k*j);
}


//Using a function determine whether a year is leap year or not
#include<stdio.h>
void leapyear(int);
int main(){
    int year;

    printf("\nEnter year :");
    scanf("%d", &year);

    leapyear(year); //Function call
    return 0;
}

void leapyear(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("%d is leap year\n", year);

    else
    printf("%d is not a leap year\n", year);
}


//Obtain prime factors of a number 
#include<stdio.h>
void prime (int);

int main(){
    int num;

    printf("Enter number :");
    scanf("%d", &num);

    prime(num); // Function call

    return 0;
}

void prime (int num)
{
    int i = 2;
    printf("Prime factors of %d are " , num );

    while (num!=1)
    {
        if(num !==0)
        printf("%d", i);
        else
        {
            i ++;
            continue;
        }
        num = num/i;
    }
    
}

