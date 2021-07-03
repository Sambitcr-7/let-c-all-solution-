// ************More Complex Decision Making************************


//marks obtained by student in 5 different subject 
//Mrthod  - 1
#include<stdio.h>

int main(){
    int m1, m2 , m3 , m4, m5 ,per;
    printf("Enter marks in five subjects");
    scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
    per = (m1 + m2 + m3 + m4 + m5 )* 100/500;
    if(per >= 60 )
    printf("First division\n");
    else
    {
        if(per >= 50)
        printf("Second division\n");
        else
        {
            if(per >= 40)
            printf("Third division\n");
            else
            printf("Fail\n");
        }
    }

    return 0;
}
// Method - 2
#include<stdio.h>
int main(){
    int m1, m2, m3, m4, m5, per;
    printf("Enter marks in five subjects");
    scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/500*100;
    if(per >=60)
    printf("First division\n");
    if((per >= 40) && (per < 50))
    printf("Third division\n");
    if(per < 40)
    printf("Fail\n");
    return 0;

}


// insurance of driver - using logical operation 
#include<stdio.h>

int main(){
    char sex, ms;
    int age ;
    printf("Enter age , sex , marital status");
    scanf("%d%c%c", &age, &sex, &ms);
    if((ms == 'M') || (ms == 'U' && sex == 'M' &&age > 30 ) || (ms == 'U' && sex == 'F' && age > 25));
    printf("Driver should  be insured\n");
    
    printf("Driver should not be insured\n");
    return 0;

}


// check whether a year is leap or not 
#include<stdio.h>

int main(){
    int year;
    printf("\nEnter year :");
    scanf("%d", &year);
    if(year % 400 == 0 || year % 100 != 0 && year  % 4 == 0)
    printf("Leap year\n");
    else
    printf("NOT a leap year\n");
    return 0;
}


// cheack type of character entered from the keyboard

#include<stdio.h>

int main(){
    char ch;
    printf("\nEnter a character from the keyboard:");
    scanf("%c", &ch);
    if(ch >= 65 && ch <=90)
    printf("The character is an uppercase letter\n");
    if(ch >= 97 && ch <= 122)
    printf("The character is a lowercase letter\n");
    if(ch > 48 && ch <=57)
    printf("The character is a digit\n");
    if((ch >=0 && ch < 48 ) ||(ch > 57 && ch < 65) || (ch > 90 && ch < 97) || ch > 122)
    printf("The character is a special symbol\n");
    return 0;
}

// check whether a triangle is vlid or not
#include<stdio.h>

int main(){
    int side1, side2, side3, largeside , sum;
    printf("\nEnter three sides of the triangle:");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1 > side2)
    {
        if(side1 > side3)
        {
            sum = side2 + side3; largeside = side1;

        }
        else
        {
            sum = side1 + side2; largeside = side3;
        }
    }
    else{
        if(side2 > side3)
        {
            sum = side1 + side3 ; largeside = side2;
        }
        else
        {
            sum = side1 + side2; largeside = side3;
        }
    }
    if(sum > largeside)
    printf("The triangle is a valid triangle\n");
    else
    printf("The triangle is an invalid triangle\n");

    return 0;
}

// Method-2
#include<stdio.h>

int main(){
    int side1, side2, side3, largeside, sum;

    printf("\nEnter three sides of the triangle :");
    scanf("%d%d%d", &side1,&side2,&side3);

    if(side1 > side2)
    {
        if(side1 > side2)
        {
            sum = side2 + side3;
            largeside = side1;

        }
        else
        {
            sum = side1 + side2;
            largeside = side3;
        }
    }
    else
    {
        if(side2 > side3)
        {
            sum = side1 + side3;
            largeside = side2;
        }
        else
        {
            sum = side1 + side2;
            largeside = side3;
        }
    }
    if(sum > largeside)
    printf("The traingle is a valid triangle\n");
    else
    printf("The triangle is an invalid triangle\n");

    return 0;

}


// (a) determine the types of triangle 
#include<stdio.h>

int main(){
    int s1, s2, s3, a, b, c;

    printf("\nEnter three sides of a triangle :");
    scanf("%d%d%d", &s1,&s2,&s3);

    if(s1 !=s2 && s2 != s3 && s3 !=s1)
    printf("Scalene triangle\n");

    if((s1 == s2) && (s2!= s3))
    printf("lsosceles triangle\n");

    if((s2 == s3) && (s3!= s1))
    printf("lsosceles triangle\n");

    if((s2 == s3) && (s3!= s2))
    printf("lsosceles triangle\n");

    if(s1 == s2 && s2 == s3)
    printf("Equilateral triangle\n");

    a = (s1 * s1) == (s2 * s2) + (s3 * s3);
    b = (s2 * s2) == (s1 * s1) + (s3 * s3);
    c = (s3 * s3) == (s1 * s1) + (s2 * s2);

    if(a || b || c)
    printf("Right - angled triangle\n");

    return 0;
}


// (b)color conversion from RGB to CMYK format
#include<stdio.h>

int main(){
    float red , green , blue;
    float white , cyan , magenta, yellow, black;
    float max;

    printf("\nEnter Red , green , Blue value(0 to 255):");
    scanf("%f%f%f", &red , &green ,&blue);

    if( red == 0 && green == 0 && blue == 0)
    {
        cyan = magenta = yellow = 0;
        black = 1;

    }
    else{
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red ;
        if(green > max)
        max = green;
        if(blue > max)
        max = blue;

        white = max;
        cyan=(white - red)/ white;
        magenta = (white - green)/ white;
        yellow = (white - blue)/ white;
        black = 1 - white;

    }
    printf("CMYK = %f%f%f%f\n", cyan, magenta, yellow, black);

    return 0;
}

// (c) check the grade of steel
#include"bits/stdc++.h"

int main(){

    float hard , carbon , tensile ;

    printf("\nEnter Hardness of steel:");
    scanf("%f", &hard);

    printf("\nEnter Carbon centent:");
    scanf("%f", &carbon);

    printf("\nEnter Tensile strength :");
    scanf("%f" , &tensile);

    if(hard > 50 && carbon < 0.7 && tensile > 5600)
    {
        printf("Grade 10\n");
        exit(0) ; // Terminate the execution

    }
    if(hard > 50 && carbon < 0.7 && tensile <= 5600)
    {
        printf("Grade 9\n");
        exit(0);
    }
    if(hard <= 50 && carbon < 0.7 && tensile >5600)
    {
        printf("Grade 8\n");
        exit(0);
    }

    if(hard > 50 && carbon >= 70 && tensile > 5600)
    {
        printf("Grade 7\n");
        exit(0);
    }
    if (hard > 50 || carbon < 0.7 || tensile > 5600)
    {
        printf("Grade 6\n");
        exit(0);

    }
    printf("Grade 5\n");

    return 0;
}


// determine BMI category
#include<stdio.h>
#include<math.h>

int main(){
    float wt, ht , bmi;

    printf("Enter weight in kg and height in maters :");
    scanf("%f%f", &wt, &ht);
    bmi = wt / (ht * ht);
    printf("Body Mass index = %f\n", bmi);

    if(bmi < 15)
    printf("BMI Category : starvation\n");
    else if(bmi < 17.5)
    printf("BMI category : Anorexic\n");
    else if(bmi , 18.5)
    printf("BMI category : Underweight\n");
    else if(bmi < 25)
    printf("BMI category :  ideal\n");
    else if(bmi < 30)
    printf("BMI category : Overweight\n");
    else if(bmi < 40)
    printf("BMI category : Obese\n");
    else 
    printf("BMI category : Morbidly Obese\n");

    return 0;
}


// (a)Determine character case using conditionl operators
#include<stdio.h>

int main(){
    char ch;

    printf("Enter character ");
    scanf("%c" , &ch);
    ch >= 97 && ch <= 122 ? printf("character entered is lower case\n"): printf("character entered is not lower case\n");
    return 0;
}

//(b) determine whether a character is a special symbol

#include<stdio.h>

int main(){
    char ch;

    printf("Enter character :");
    scanf("%c", &ch);
    ((ch >=0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96 ) || (ch >=123))?
    printf("character entered is a special symbol\n"):
    printf("Character entered is not a spical symbol\n");

    return 0;
}


//(2b) determine whether a year is leap or not using conditionl operators
#include<stdio.h>

int main(){
    int year;

    printf("Enter Year :");
    scanf("%d", &year);
    year %  100 == 0 ? (year % 400 == 0 ? printf("Leap Year\n"): printf("Not a leap Year\n")) : (year % 4 == 0? printf("leap Year\n") :printf("Not A leap Year\n"));

    return 0;
}


//(c) determine greatest of 3 number using conditionl operators
#include<stdio.h>

int main(){
    int n1, n2, n3, great;

    printf("\nEnter three number:");
    scanf("%d%d%d", &n1, &n2, &n3);

    great = n1 > n2 ? (n1 > n3  ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("Greatest number is : %d", great);

    return 0;
}

 
//(d) determine whhether sum of squraes of sine and cosine of angle is equal to 1
#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,n3, great , num, angle;

    printf("\nEnter angle in degrees:");
    scanf("%d", &angle);

    angle = angle * 3.14 / 180;
    num = pow(sin(angle), 2) + pow(cos(angle), 2);

    if(num == 1)
    printf("sum of square of sine and cosine is equal to 1");
    else
    printf("sum of squares of sine and cosine is not equal to 1");

    return 0;
}


//(e) 
#include<stdio.h>
#include<math.h>

int main(){
    float sal;
    printf("Enter the salary");

    scanf("%f", &sal);
    (sal >= 25000 && sal <= 40000 ? printf("Manager \n"):
    (sal >= 15000 && sal < 25000 ? printf("Accountant\n"): printf("Clerk\n")));

    return 0;
}