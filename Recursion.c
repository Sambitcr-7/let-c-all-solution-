// ****************************Recursion***************************************
#include<stdio.h>
#include<math.h>

int rsum(int); // Function with recursion
int main()
{
    int num, sum ;
    int n;
    printf("Enter number:");
    scanf("%d", &num);
    sum = rsum(num);
    printf("Sum of digits is %d\n" ,sum);
    return 0;
}

int rsum(int n)
{
    int s , remainder ;
    if(n!= 0)
    {
        remainder  = n % 10;
        s = remainder + rsum(n/10);
    }
    else
    return 0;
    return s;
}

// Find prime Factors of a number recursively
#include<stdio.h>
#include<math.h>

void factorize(int , int);

int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Prime factors are:");
    factorize(num, 2);
    return 0;
}

void factorize(int n, int i)
{
    if(i <= n)
    {
        if(n % i == 0)
        {
            printf("%d",i);
            n = n/i;
        }
        else
        i++;
        factorize (n,i);
    }
}

//Generate first 25 terms of a Fibonacci sequence using recusion 
#include<stdio.h>
#include<math.h>

void fibo(int , int , int );

int main(){
    int old = 1, current = 1;
    printf("%d\t%d\t", old, current);
    fibo(old , current , 23);
    return 0;
}

void fibo(int old , int current , int terms)
{
    int newterm;
    if(terms >=1);

    {
    newterm = old + current ;
    printf("%d\t" , newterm);
    terms = terms -1;
    fibo(current , newterm, terms);

    }

}

//(a) Binary equivalent of a decimal number 
#include<stdio.h>
#include<math.h>

int binary(int);
int main()
{
    int num ;
    printf("\nEnter the number;");
    scanf("%d", &num);

    binary(num); // Function call

    return 0;
}

// function to convert decimal to binary
int binary(int n)
{
    int r;
    r  = n%2;
    n = n/2;
    if(n == 0)
    {
        printf("\nThe binary equivalent is %d", r);
        return (r);
    }
    else
    binary(n); //Recursive call
    printf("%d",r);
}


//(b) // program to obtain running sum of natural numbers
#include<stdio.h>
#include<math.h>

int getsum(int );
int main(){
    int s;

    s= getsum(0);
    printf("The sum of first 25 natural  numbers  is %d\n", s);

    return 0;
}

int getsum (int n)
{
    int sum = 0;
    if (n == 25)
    return sum;

    sum = n + getsum(++n);
    return (sum);
}



//(c) page 139