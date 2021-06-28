// ***************Getting Started*******************

//(a)Calculate Ramesh's gross salary

#include<stdio.h>
#include<conio.h>


int main(){
    float bp, da, hra,grpay;
    printf("\n Enter Basic Salary of Ramesh");
    scanf("%f", &bp);

    da=0.4*bp;
    hra = 0.2*bp;
    grpay = bp + da + hra; /*Gross Pay = sum of the basic & all  allowances*/

    printf("Basic Salary of Ramesh = %f\n", bp);
    printf("Derness Allowance  = %f\n", da);
    printf("House Rent Alowance = %f\n", hra);
    printf("Gross Pay  of Ramesh = %f\n", grpay);


    return 0;

}


// (b)Conversion of distance

#include<stdio.h>

int main(){
    float km, m , cm, ft, inch;

    printf("\nEnter the distance in Kilometers :");
    scanf("%f",&km);

    m = km *1000;
    cm = m * 100;
    inch  = cm / 2.54;
    ft = inch/12;

    printf("Distance in meters = %f\n" , m);
    printf("Distance in centimeter = %f\n", cm);
    printf("Distance in feet = %f\n" , ft);
    printf("Distance in inches = %f\n", inch);

    return 0;

}



// (c)Calaculation of aggregate & percentage marks
#include<stdio.h>
#include<conio.h>
int main(){
    int m1 , m2 , m3 , m4 , m5, aggr;
    float per;

    printf("\nEnter marks in 5 subjects : ");
    scanf("%d%d%d%d%d ", &m1 , &m2, &m3 ,&m4, &m5);

    aggr = m1 + m2 + m3 + m4 + m5 ;
    per = aggr/5;

    printf("Aggregate Marks = %d\n", aggr);
    printf("Percentage Marks = %f\n", per);


    return 0;
}


//(d) Conversion of temperature from Fahernheit to centigrade

#include<stdio.h>
#include<conio.h>
int main(){
    float fr, cent;

    printf("\nEnter the temperature (F): ");
    scanf("%f", &fr);

    cent = 5.0/ 9.0 * (fr - 32);
    printf("Temperature in centigrade = %f\n" ,  cent);


    return 0;
}


//(e) Calculation of perimeter & area of rectangle and circle 
#include<stdio.h>
int main(){
    int l, b, r, area1, perimeter;
    float area2, cirum;

    printf("\nEnter Lenght & Breadth of Rectangle :");
    scanf("%d%d", &l,&b);
    area1 = l*b ; //  area of a rectangle
    perimeter = 2 * l+2*b; //Perimter of a rectangle

    printf("Area of Rectangle = %d\n", area1);
    printf("Perimeter of Recatangle = %d\n", perimeter);

    printf("\n\nEnter Radius of cricle :");
    scanf("%d", &r);

    area2= 3.14*r * r ; // area of cricle 
    cirum = 2* 3.14*r; // Cirumference of the circle

    printf("Area of Circle = %f\n", area2);
    printf("Circumference of circle = %f\n", cirum);

    return 0;  
}



// (f)Calculation of PaperSize A0 to A8

#include<stdio.h>

int main(){
    int a0ht, a0wd;
    int a1ht, a1wd, a2ht, a2wd;
    int a3ht, a3wd, a4ht, a4wd;
    int a5ht, a5wd, a6ht, a6wd;
    int a7ht, a7wd, a8ht, a8wd;

    a0ht = 1189;
    a0wd = 841;
    printf("Size of A0 paper Height = %d width = %d\n",  a0ht, a0wd);

    a1ht = a0wd;
    a1wd = a0ht/2;
    printf("Size of A1 paper Height = %d width= %d\n", a1ht,a1wd);

    a2ht = a1wd;
    a2wd = a1ht/2;
    printf("Size of A2 paper Height = %d width = %d\n", a2ht, a2wd);

    a3ht = a2wd;
    a3wd = a2ht/2;
    printf("Size of A3 paper Height = %d widht = %d\n", a3ht, a3wd);

    a4ht = a3wd;
    a4wd = a3ht/2;
    printf("Size of A4 paper Height = %d widht = %d\n", a4ht, a4wd);

    a5ht = a4wd;
    a5wd = a4ht/2;
    printf("Size of A5 paper Height = %d widht = %d\n", a5ht, a5wd);

    a6ht = a5wd;
    a6wd = a5ht/2;
    printf("Size of A6 paper Height = %d widht = %d\n", a6ht, a6wd);

    a7ht = a6wd;
    a7wd = a6ht/2;
    printf("Size of A7 paper Height = %d widht = %d\n", a7ht, a7wd);


    a8ht = a7wd;
    a8wd = a7ht/2;
    printf("Size of A8 paper Height = %d widht = %d\n", a8ht, a8wd);


    return 0;

}


// total selling price of 15 items

#include<stdio.h>
#include<conio.h>

int main(){
    int sp , prof;


    printf("Enter the total selling price of the items :");
    scanf("%d", &sp); //selling price

    printf("\nEnter the total profit on these items :");
    scanf("%d", &prof); // profit

    printf("\nCost price of a single items is %d .", (sp-prof)/15);

    getch();

    return 0;
}