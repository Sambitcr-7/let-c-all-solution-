// ***************Loop Control Instruction*************************

// Determine overtime pay of 10 employees
#include<stdio.h>
#include<math.h>

int main(){
    float otpay;

    int hour , i = 1;

    while(i <=10) //loop for 10 employee
    {
      printf("\nEnter no . of hours worked :");
      scanf("%d", &hour);
      if(hour >=40)
      otpay = (hour - 40 )* 12;
      else
      otpay = 0;
      printf("Hours = %d overtime pay = Rs %f\n", hour , otpay);
      i++;
    }
    return 0;
}


// Calculation of factorial value of a number 
#include<stdio.h>

int main(){
    int num, i, fact ;
    printf("Enter a number :");
    scanf("%d", &num);
    fact = i = 1;
    while(i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial value of %d = %d\n", num,fact);
    return 0;
}

// Compute value of one number raised to another 
#include<stdio.h>

int main(){
    float x, power;

    int y , i;
    printf("\nEnter two number:");
    scanf("%f%d", &x,&y);
    power = i = 1;
    while(i <=y)
    {
        power = power * x;
        i ++;

    }

    printf("%f to the power %d is %f\n", x, y, power);

    return 0;
}


// (a) 
#include<stdio.h>

int main(){
    int i = 1;
    while(i <=10);
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}


//(b)
#include<stdio.h>

int main(){
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d%d%d\n", x,y,z);
    return 0;
}

// (c)
#include<stdio.h>

int main()
{
    int x = 4, y = 3, z;
    z = x-- -y;
    printf("%d%d%d\n", x, y,z);
    return 0;
}

// (d)
#include<stdio.h>
int main(){
    while('a' < 'b')
    printf("malayalam is a palindrome\n");
    return 0;
}

//(e)
#include<stdio.h>
int main(){
    int i; 
    while(i = 10)
    {
        printf("%d\n", i);
        i = i + 1;

    }
    return 0;
}

// (f)
#include<stdio.h>

int main(){
    float x = 1.1;
    while(x == 1.1)
    {
        printf("%f\n", x);
        x = x - 0.1;
    }
    return 0;
}


// Write a program to calculate overtime 
// determine overtime pay of 10 employees
#include<stdio.h>
int main(){
    float otpay;
    int hour, i = 1;

    while (i <=10 ) //Loop for 10 employees  
    {
        printf("\nEnter no.of hours worked:");
        scanf("%d", &hour);

        if(hour >=40)
        {
            otpay = (hour - 40)* 12;
            printf("No of hours worked = %d\n overtime pay = Rs %f\n", hour , otpay);
        }
        else{
            otpay = 0;
            printf("No of hours worked (%d) is less than 40 Hrs.\nHence no overtime pay\n" , hour) ;
        }
        i++;
    }
    
    return 0;
}

//Calulation of factorial of any number 
#include<stdio.h>
int main(){
    int num, i = 1;
    unsigned long int fact = 1;

    //factorial of 34 is beyond range of unsigned long int
    printf("Enter any number (less than 34):";);
    scanf("%d" &num);

    while(i <= num)
    {
        fact  = fact * i;
        i ++;

    }
    printf("factorial of %d = %lu\n", num, fact);

    return 0;
}

// compute value of one number raised to another
#include<stdio.h>

int main(){
    int x, y, i = 1;
    long int power = 1;

    printf("\nEnter two number :");
    scanf("%d%d", &x,&y);

    while (i <=y)
    {
        power = power *x ;
        i ++;
    }
    printf("%d to the power %d is %d\n", x,y,power);
    return 0;
    
}

// (a) print ASCII value and their corresponding characters
#include<stdio.h>
int main(){
    int i = 0;
    while(i <= 255)
    {
        printf("%d %c\n" , i , i);
        i++;
    }
    return 0;
}

//(b) Generte all Armstrong number between 
#include<stdio.h>
int main(){
    int i = 1, a, b, c;
    printf("Armstrong number between 1 & 500 are:\n");

    while(i <= 500)
    {
        a = i % 10 ; // extract last digits 
        b = i % 100;
        b = (b-a)/ 10 ; // extract second digits 
        c = i / 100; // extract first digits

        if((a * a * a) + (b * b *b) + (c*c*c) == i)
        printf("%d\n", i);

        i++;

    }
    return 0;
}


// Match stick game
#include<stdio.h>

int main(){
    int m = 21, p , c;

    while (1)
    {
        printf("\n\nNo 0f matches left = %d\n", m);
        printf("Pick up 1, 2,3 or 4 matches:");
        scanf("%d" , &p);

        if(p > 4 || p < 1)
        continue;

        m = m -p;
        printf("No of matches left = %d\n", m);

        c= 5-p;
        printf("out of which computer picked up %d\n", c);

        m = m -c;
        if(m ==1 )
        {
            printf("Number of matches left %d\n\n", m);
            printf("You lost the game !!\n");
            break;
        }
    }
    return 0;
}

//count number of postive , negative and zeros
#include<stdio.h>

int main(){
    int pos, neg, zero,num;
    char ans = 'y';

    pos = neg = zero = 0;

    while(ans == 'y' || ans == 'Y')
    {
        printf("\nEnter a number:");
        scanf("%d" , &num);

        if(num == 0)
        zero++;

        if(num > 0)
        pos++;

        if(num < 0)
        neg++;

        fflush(stdin) ; // clears standard input stream

        printf("\nDo you want to continue?");
        scanf("%c", &ans);
    }
    printf("You entered %d postive number(s)\n", pos);
    printf("You entered %d negative number(s)\n", neg);
    printf("You entered %d zero(s)\n", zero);

    return 0;
}

// (h)Find octal equicalent of number 
#include<stdio.h>
#include<math.h>

int main(){

    int n1, n2, rem, oct , p;

    printf("\nEnter any number :");
    scanf("%d", &n1);

    n2 = n1;
    p = oct = 0;

    while(n1 > 0)
    {
        rem = n1%8;
        n1 = n1/8 ;
        oct = oct + rem * pow (10, p);
        p++;
    }

    printf("The octal equivalent of %d is %d\n", n2, oct);


    return 0;
}


//(i) Program to find the range of a set of number 
#include<stdio.h>

int main(){
    int n , no , flag , small , big , range;

    flag = 0;

    printf("\nHow many number are there in set a set?");
    scanf("%d", &n);

    while(n>0)
    {
        printf("\nEnter no : ");
        scanf("%d" , &no);

        if(flag == 0)
        {
            small = big = no;
            flag = 1;

        }
        else{
            if(no > big)
            big = no;
            if(no < small)
            small = no;

        }
        n --;
    }
    if(small < 0)
    range = small + big;
    else
    range = big - small;
    if(range < 0)
    range = range * -1;

    printf("\nThe range of given set of number is %d\n", range);

    return 0;
}

