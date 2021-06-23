// **********************Case Control Instruction***********************
// Menu driven program
#include <stdlib.h>
#include <math.h>

int main()
{
    int choice, num, i, fact;

    while (1)
    {
        printf("\n1 . Factorial\n");
        printf("2. Prime\n");
        printf("3.odd/Even\n");
        printf("4.Exit\n");
        printf("Your choice?");
        printf("%d", &choice);
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("\nEnter number:");
            scanf("%d" , &num);
            fact = 1;
            for(i = 1; i <= num; i++)
            fact = fact * i;
            printf("Factorial value = %d\n", fact);
            break;
            case 2:
            printf("\nEnter number:");
            scanf("%d", &num);
            for(i = 2; i <num; i++)
            {
                if(num % i == 0)
                 {
               printf("No a prime number\n");
               break;
                 }
            } 

            if(i == num)
            printf("Prime number\n");
            break;
            case 3:
            printf("Prime number:");
            scanf("%d", &num);
            if(num % 2== 0)
            printf("Even number\n");
            else
            case 4:
            exit(0); //Terminates program execution
            default:
            printf("Wrong choice!\a\n");
        
        }

    }
    return 0;
 
}


//(a) 
#include<stdio.h>

int main(){
    char suite = 3;
    switch(suite)
    {
        case 1:
        printf("Diamond\n");
        case 2:
        printf("Spade\n");
        default:
        printf("Heart\n");
    }
    printf("I thought one wears a suite\n");
    return 0;
}

//(b) 
#include<stdio.h>

int main(){
    int c = 3; 
    switch (c)
    {
    case '3':
        printf("You never wim the silver prize\n");
        break;
    
        case 3:
        printf("You always lose the gold prize\n");
        break;

        default:
        printf("of couse provided you win a prize\n");
    }
    return 0;
}


//(c)
#include<stdio.h>

int main(){
    int i = 3;
    switch (i)
    {
    case 0:
        printf("Customers are dicey\n");
        break;

    case 1 + 0:
        printf("Markets are pricey\n"); 
        break;   
    
    case 4/ 2:
        printf("Investors are moody\n");
        break;

    case 8 % 5:
        printf("At least employees are good\n") ;   
    }

    return 0;
}

//(d)
#include<stdio.h>

int main()
{
    int k;
    float j = 2.0;
    switch(k = j + 1)
    {
        case 3:
        printf("Trapped\n");
        break;

        default:
        printf("Caught!\n");

    }
    return 0;
}


//(e)
#include<stdio.h>

int main(){
    int ch = 'a' + 'b';
    switch(ch)
    {
        case 'a':
        case 'b':
        printf("You entered b\n");
        case 'A':
        case 'b' + 'a':
        printf("You entered a and b\n");

    }
    return 0;
}


//(f)
#include<stdio.h>

int main(){
    int i = 1;
    switch(i - 2)
    {
        case-1:
        printf("Feeding fish\n");
        case 0:
        printf("Weeding grass\n");
        case 1:
        printf("Mending roof\n");
        default:
        printf("Just to survive\n");
    }
    return 0;
}


// B(a)

#include<stdio.h>
#include<math.h>

int main(){
    int suite = 1;

    switch(suite);
    {
        case 0:
        printf("Club\n");
        case 1:
        printf("Diamond\n");
    }
    return 0;
}


//c and d

//Menu driven program
#include<stdlib.h>

int main(){
    int chocie , num, i;
    unsigned long int fact;

    while(1)
    {
        printf("\n\n1.Factorial\n");
        printf("2.Prime\n");
        printf("3.odd/ Even\n");
        printf("4.Exits\n");

        printf("\nYour choice?");
        scanf("%d", &chocie);

        switch (chocie)
        {
        case 1:
            printf("\nEnter number:");
            scanf("%d", &num);

            fact = 1;
            for(i = 1; i <= num ; i++)
            fact = fact *i;
            printf("Factorial value = %lu\n", fact);
            break;
        
        case 2:
            printf("\nEnter number:");
            scanf("%d", &num);

            for(i = 2; i<num ; i++)
            {
                if(num % i == 0)
                {
                    printf("Not a prime number\n");
                    break;
                }
            }
            if(i == num)
            printf("\nPrime number");
            break;

            case 3:
            printf("\nEnter number:");
            scanf("%d", &num);

            if(num % 2 == 0)
            printf("Even number\n");
            else
            printf("odd number\n");
            break;

            case 4:
            exit(0);
            //Terminates program execution
        }
    }
    return 0;
}


//determine the grace marks obtained by stundent 
#include<stdio.h>
int main(){
    int c, sub;

    printf("\nEnter the class and number of subjects failed:");
    scanf("%d%d" ,&c, &sub);

    switch(c)
    {
        case 1:
        if(sub <=3)
        printf("Student gets total of %d grace marks\n", 5 * sub);
        else
        printf("No grace marks\n");
        break;

        case 2:

        if(sub <= 2)
        printf("Student gets total of %d grace marks\n", 4 * sub);
        else
        printf("No grace marks\n");
        break;

        case 3:
        if(sub == 1)
        printf("Student gets 5 grace marks\n");
        else
        printf("No grace marks\n");
        break;

        default:
        printf("Wrong class entered \n");

    }
    return 0;
}