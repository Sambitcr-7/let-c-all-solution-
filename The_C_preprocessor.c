// ************************************The C Preprocessor*****************
//Macroces Isupper, Islower, Isaplha, big
#include<stdio.h>

#define ISUPPER(x)( x >= 65 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122? 1 :0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x,y)(x> y ? x : y)


int main(){
    char ch;
    int d, a, b;

    printf("\nEnter any alphabet / charachter:");
    scanf("%c", &ch);
    
    if(d=ISUPPER(ch) == 1) //Macro substitution
    printf("You entered a capital letter\n");
    else if(d=ISLOWER(ch) == 1) //Macro substitution
    printf("You entered a small case letter\n");
    else if(d=ISALPHA(ch)!=1)  //Macro substitution
    printf("You entered character other than an alphabet\n");

    printf("Enter any two numbers:");
    scanf("%d%d", &a,&b);

    d = BIG(a,b);
    printf("Bigger number is %d\n", d);

    return 0;
}


// Main program to calculate af area , perimeter and circumference using macroes in header file
#include<stdio.h>
//include file containing macro definitions 
// #include"areaperi.h"
#include<math.h>

int main(){
    int d, a, b;
    float sid1, sid2, sid3, sid, p_tri, p_cir, p_sqr,a_tri, a_cir, a_sqr;
    float r, base , height;

    printf("\nEnter radiues of circle :");
    scanf("%f", &r);
    p_cir=PERIC(r);
    printf("Circumference of circle = %f\n", p_cir);
    a_cir = AREAC(r);
    printf("Area of circle = %f\n", p_cir);

    printf("\n\nEnter sides of a square:");
    scanf("%f", &sid);
    p_sqr = PERIS(sid);
    printf("Perimeter of square = %f\n", p_sqr);
    a_sqr = AREAS(sid);
    printf("Area of square = %f\n", a_sqr);

    printf("\n\nEnter length of 3 sides of triangle :");
    scanf("%f%f%f", &sid1,&sid2,&sid3);
    p_tri= PERIT(sid1, sid2,sid3);
    printf("Perimeter of triangle = %f\n",p_tri);

    printf("\n\nEnter base and height of triangle:");
    scanf("%f%f", &base, &height);
    a_tri = AREAT (base, height);
    printf("Area of triangle =%f\n", a_tri);


    return 0;
}


//Macros like Mean , Abs, Tolower , Big
#include<stdio.h>

//Macroes Defined below 
#define Mean(x,y) ((x+y)/2)
#define ABS(x)(x < 0 ? x * -1 : x)
#define TOLWER(x) (x + 32)
#define BIG(x, y,z)(x > y && x > z? x : y > x && y > z ? y : z)

int main(){
    char ch;
    int d, a, b, c;

    printf("\nEnter any two number:");
    scanf("%d%d", &a,&b);

    d = Mean(a,b); //Macro subsitituion 
    printf("Mean is %d\n", d);

    printf("\nEnter any number :");
    scanf("%d", &a);

    d = ABS(a);
    printf("Absoute value is %d\n", d);

    fflush(stdin);
    printf("\nEnter any upper case character:");
    scanf("%c", &ch);

    ch = TOLWER(ch);
    printf("Lower case character is %c\n ", ch);

    printf("\nEnter any three number:");
    scanf("%d%d%d", &a,&b,&c);

    d = BIG(a,b,c);
    printf("Big number is : %d\n", d);


    return 0;
}


// (c) interst .h
// Stroing the macro definitions of simple interset and amount in the interst. h header file
#define SI(p,n,r)(p*n*r/ 100)
#define AMT(p,SI)(p+sI)
//Main Program to calucate simple instered and amount by including
// "interest.h" header
#include<stdio.h>
// #include "interest.h"
#include<math.h>

int main(){
    int p, n;
    float si, amt, r;

    printf("\nEnter Principal, no of years and rate of interest :");
    scanf("%d%d%f", &p , &n, &r);

    si = SI(p,n,r);
    amt = AMT(si, p);

    printf("Simple interest is: %f\nAmount is: %f\n", si , amt);

    return 0;
}
