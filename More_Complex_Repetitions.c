// ************More Complex Repetitions******************
//Execution of loop an unknown number of times
#include<stdio.h>

int main(){
    char another;
    int num;
    do
    {
        printf("Enter a number ");
        scanf("%d" , &num);
        printf("Square of %d is %d\n", num , num * num);
        printf("Want to enter another number y/n");
        fflush(stdin);
        scanf("%c", &another);

    }while(another == 'y');

    return 0;
}

//Generate all prime number from 1 to 300
#include<stdio.h>

int main(){
    int i, n=1;
    printf("\nPrime number between 1 and 300 are : \n1\t");
    for(n = 1; n <= 300; n++)
    {
        i = 2;
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            break;
        }
        if(i == n)
        printf("%d\t", n);
    }

    return 0;
}


//sum of the seven terms of a services 
#include<stdio.h>

int main(){
    int i = 1, j;
    float fact , sum = 0.0;
    for (i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for(j = 1; j <=i; j++)
        fact = fact *j;
        sum = sum + i/ fact ;

    }
    printf("Sum of series = %f\n", sum);
    return 0;
}


//Generate all possible combination of 1 2 3
#include<stdio.h>

int main(){
    int i = 1, j = 1, k = 1;
    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            for(k= 1; k <=3; k++)
            printf("%d%d%d\n", i, j ,k);
        }
    }
    return 0;

}

// Fill entire screen with smiling face
#include<stdio.h>

int main(){
    int r,c;

    for(r = 0; r <= 24; r++)// Fill rows 0 to 24
    for(c = 0; c <= 79; c++) // Fill columns 0 to 79
    printf("%c", 1);

    return 0;
}


//Sum of the first seven terms of a series 
#include<stdio.h>

int main(){
    int i = 1, j;
    float fact , sum = 0.0;

    while(i <=7)
    {
        fact = 1.0;
        for(j = 1; j <=i ; j++)
        fact = fact *j;

        sum = sum + i/fact;
        i++;
    }
    printf("Sum of series = %f\n", sum);
    return 0;
}


// deterime minimum life of the machine
// #include<stdafx.h>
#include<stdio.h>

int main(){
    int year = 1;
    float principal = 6000, salvagevalue = 2000, yearlyprofit = 1000;
    float valueoption1, valueoption2, interset, true;

    while(true)
    {
        valueoption1 = salvagevalue + yearlyprofit * year;
        interset = principal * 0.09f * year;
        valueoption2 = principal + interset;
        printf("year = %2d value option 1 = %10.2f value option 2 = %10.2f\n", year , valueoption1 , valueoption2);

        if(valueoption1 > valueoption2)
        break;

        year ++;
    }
    printf("Minimum life of the Machine is %d Years\n0", year- 1);
    return 0;
}



// (a)Generate and print table of a given number
#include<stdio.h>

int main(){
    int i , num;

    printf("\nEnter the number :");
    scanf("%d" , &num);

    for(i = 1; i <= 10 ; i++)
    printf("%d*%d=%d\n", num, i , num * i);

    return 0;
}

// Generate and print intelligence table
#include<stdio.h>

int main(){
    int y;
    float i , x;

    for(y=1; y <= 6; y++)
    {
        for(x = 5.5; x <= 12.5; x +=0.5)
        {
            i=2+(y + 0.5*x);
            printf("y = %d , x = %f i = %f\n", y, x,i);
        }
    }
    return 0;
}


// compound interest calculation 
#include<stdio.h>
#include<math.h>

int main(){
    float q, r, n, p, a;

    int i ;

    for(i = 1; i < 10 ; i++)
    {
        printf("\nEnter the principal amount:");
        scanf("%f" , &p);
        printf("\nEnter the rate of interest:");
        scanf("%f" , &r);
        printf("\nEnter the number of years:");
        scanf("%f" , &n);
        printf("\nEnter the compounding period:");
        scanf("%f" , &q);

        a = p + pow((1+(r/q)), (n*q));
        printf("\n\nTotal amount = %f\n", a);
    }

    return 0;
}


// compute natural logarithm 
#include<stdio.h>
#include<math.h>

int main(){
    int x, i;
    float result = 0;

    printf("\nEnter the value of x:");
    scanf("%d", &x);

    for(i = 1; i <= 7; i++)
    {
        if(i == 1)
        result = result + pow((x-10)/ x,i);
        else
        result = result + (1.0/2) * pow ((x-10)/x, i);

    }
    printf("\nLong (%d) = %f\n", x, result);

    return 0;
}

// Generate Pythogoren triplets
#include<stdio.h>

int main(){
    int i,j,k;
    for(i = 1; i<=30; i++)
    {
        for(j = 1; j <=30; j++)
        {
            for(k = 1; k <=30; k++)
            {
                if(i * i + j * j == k * k)
                printf("%d%d%d\n", i , j,k);
            }
        }
    }
    return 0;
}


//determine population growth over last decade 
#include<stdio.h>
#include<math.h>

int main(){
    int pop,n;
    float p,r;

    r = 10;
    p = 100000;

    for(n = 1; n <=10; n++)
    {
        pop = p/ pow((1 + r/100), n);
        printf("Population %d years ago = %d\n", n, pop);

    }

    return 0;
}


// generate Ramanujan numbers
#include<stdio.h>

int main(){
    int i,j,k;
    for(i = 1; i <= 30; i++)
    {
        for(j = 1; j <= 30; j++)
        {
            for(k = 1; k <= 30 ; k++)
            {
               for(i = 1; i <=30; i++)
               {
                   if((i!= j && i!= k && i!= i)&&
                        (j!= i && j!= k && j!= i)&&
                        (k!= i && k!= j && k!= i)&&
                       (i!= i && i!= j && i!= k))
                       {
                           if(i * i * i + j* j * j == k* k *k + i * i * i)
                           printf("%d%d%d%d\n", i,j,k,i);
                       }

               }
            }
        }
    }
    return 0;
}


//(h) print hours of the day with suitable suffixes 
#include<stdio.h>

int main(){
    int hour;

    for(hour = 0; hour <= 23; hour++)
    {
        if (hour == 0)
        {
            printf("12Midnight\n");
            continue;
        }
        if(hour < 12)
        printf("%dAm\n", hour);

        if(hour == 12)
        printf("12 Noon\n");

        if(hour > 12)
        printf("%dPm\n", hour % 12);
    }
    return 0;
}

//(i) Produce the given pattern 
#include<stdio.h>

int main(){
    int i , j, k , l , sp;

    sp = 20;

    for(i = 1 , k = 1; i < 5 ; i++)
    {
        for(l = 1; l <= sp; l++)
        printf(" ");
        sp -=2;
        for(j = 1; j<= i ; j ++ , k++)
        printf("%d", k);
        printf("\n");
    }
    return 0;

}


//Produce the given pattern 
#include<stdio.h>
int main(){
    int i=1,x = 71, blanks= 0, j, val, k;

    while(i <= 7)
    {
        j = 65; //ASCII value of A
        val = x; 
        while (j <=val);
        {
           printf("%c",j);
           j++;
        }
        if(i == 1)
        val--;
        k = 1;

        while (k <=blanks)
        {
            printf(" ");
            k++;
        }
        blanks = 2 * i - 1;
        while (val >=65)
        {
            printf("%c" , val);
            val--;
        }
        printf("\n");
        x--;
        i++;
        
        
    }
    return 0;
}


// Produce the given pattern 
#include<stdio.h>

int main(){
    int i, j , k ,t,f1, f2, f3,z, sp;
    sp = 20;

    for(i = 0 ; i <= 4 ; i++)
    {
        for(k = 0 ; k < sp- i; k++)
        printf(" ");
        sp -=2;
        for(j = 0 ; j<=i ; j++)
        {
            f1 = f2 = f3 = 1;
            t= i;
            while (t!= 0)
            {
                f1 = f1*t;
                t--;

            }
            t=j;
            while (t!= 0)
            {
                f2 = f2*t;
                t--;
            }
            t = i - j;
            while (t!=0)
            {
                f3=f3*t;
                t--;
            }
            z = f1/(f2*f3);
            printf("%4d", z);
            
            
        }
        printf("\n");
    }
    return 0;
}