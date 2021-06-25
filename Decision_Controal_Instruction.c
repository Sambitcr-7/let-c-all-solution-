// **********Decision Controal Instruction************



//Calculation of totoal expenses
#include<stdio.h>
int main(){
    int qty, dis;
    float rate , tot;

    printf("Enter quanitity and rate");
    scanf("%d%f", &qty, &rate);

    if(qty > 1000);
    dis = 10;
    
    dis = 0 ;
    tot = (qty * rate) - (qty * rate * dis / 100);
    printf("Total expenses = Rs %f\n", tot);

    return 0;
}


// Calculation of gross salary

#include<stdio.h>

int main(){
    float bs, gs , da, hra;

    printf("Enter basic salary");
    scanf("%f", &bs);

    if(bs<1500)
    {
        hra = bs * 10/ 100;
        da = bs * 90 / 100;

    }
    else
    {
        hra = 500;
        da = bs * 98 / 100;

    }

    gs = bs + hra + da;
    printf("gross salary = Rs %f\n", gs);

    return 0;
}


// Calculate profit or loss
#include<stdio.h>

int main(){
    float cp, sp, p ,l;

    printf("\nEnter cost price and selling price ");
    scanf("%f%f", &cp , &sp);

    p = sp - cp ; // Profit = selling price - cost price
    l = cp - sp ; // loss = cost price - selling price

    if(p>0)
    printf("The seller has made a profit of Rs %f\n", p);

    if(l > 0)
    printf("The seller is in loss by Rs %f\n", l);

    if(p == 0)
    printf("The is no loss , no profit\n");

    return 0;
}


// Check whether a number is even or odd

#include<stdio.h>

int main(){
    int n; 
    printf("\nEnter any number ");
    scanf("%d", &n);

    if(n%2 == 0) // remainder after division by 2
    printf("\nThe number is even\n");

    else
    printf("\nThe number is odd\n");

    return 0;
}

//check whether the year is leap or not 
// Year is leap if it is a century year and is divisiable by 400
// Year is leap if it is a non - century year and is divible by 4

#include<stdio.h>

int main(){
    int yr;

    printf("\nEnter a year :");
    scanf("%d" , &yr);

    if(yr % 100 == 0)
    {
        if(yr % 400 == 0)
        printf("Leap year \n");

        else

        printf("Not a leap year\n");
    }

    else
    {
       if(yr % 4== 0)
        printf("Leap year \n");

        else

        printf("Not a leap year\n");  
    }

    return 0;
}

// (a)v five digit check whether a number and its reversed number are equal
#include<stdio.h>

int main(){
    int n, a, b, num ;
    long int revnum = 0;

    printf("\nEnter a five digits number (less than or equal to 32767): ");
    scanf("%d", &n);

    num = n;
    a = n % 10; //last digits
    n = n / 10; // remaining digits 
    revnum = revnum + a * 10000l;

    
    a = n % 10; // 4 th digits
    n = n / 10; // remaining digits 
    revnum = revnum + a * 1000;


    
    a = n % 10; // 3 rd  digits
    n = n / 10; // remaining digits 
    revnum = revnum + a * 100;

    
    a = n % 10; // 2 nd digits
    n = n / 10; // remaining digits 
    revnum = revnum + a * 10;

    a = n % 10; // 1 st digits
    revnum = revnum + a ;

    if(revnum == num)
    printf("Given number & its reversed number are equal\n");
    else
    printf("Given number & its reversed number are not equal\n");

    return 0;
}


//(b) Find the younest amongst three friends
#include<stdio.h>

int main(){
    int r , s ,a, young ;

    printf("\nEnter age of Ram , shyam and Ajay :");
    scanf("%d%d%d", &r, &s , &a);

    if(r < s)
    {
        if(r < a)
        young = r;
        else
        young = a;

    }
    else
    {
        if( s < a)
        young = s; 
        else
        young = a;

    }

    printf("The youngest of ram (%d) and Ajay(%d) is %d\n" , r , s , a , young);

    return 0;
}


//(c) Check whether a triangle is valid or not 
#include<stdio.h>

int main(){
    float angle1 , angle2 , angle3;

    printf("\nEnter three angles of the trinagle: ");
    scanf("%f%f%f", &angle1,&angle2,&angle3 );

    if((angle1+angle2+angle3)== 180)
    printf("The triangle is valid triangle\n");

    else

    printf("The triangle is an invalid triangle\n");

    return 0;
}


//(d) To find absolute value of number entered through keyboard

#include<stdio.h>

int main(){
    int no;

    printf("\nEnter any number :");
    scanf("%d", &no);
    if(no < 0)
    no  = no * -1;

    printf("The absoute value of given number is %d\n", no);


    return 0;
}


//(e) Find whether area of the rectangle is greater than its perimeter
#include<stdio.h>

int main(){
    int l , b, area ,peri;

    printf("\nEnter lenght and breadth of the rectangle :");
    scanf("%d%d", &l,&b);

    area = l * b;
    peri = 2 * (l + b);

    if(area > peri)
    printf("area is greater than peimeter\n");
    else
    printf("area is lesser than perimeter\n");

    return 0;

}


//(f) Check whether three points are co -liner
#include<stdio.h>
#include<math.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    int s1,s2,s3;

    printf("\nEnter the value of x1 nad y1 coordinates of first point:");
    scanf("%d%d", &x1, &y1);
    printf("\nEnter the value of x2 nad y2 coordinates of first point:");
    scanf("%d%d", &x2, &y2);
    printf("\nEnter the value of x3 nad y3 coordinates of first point:");
    scanf("%d%d", &x3, &y3);


    // calculate slope of line between each pair of point s
    s1= abs(x2-x1)/ abs(y2-y1);
    s2 =abs(x3-x1)/ abs(y3-y1);
    s3 =abs(x3-x2)/ abs(y3-y2);

    if((s1 == s2) && (s1 == s3))
    printf("Pointer are Co-liner\n");
    else
    printf("Pointer are NOT co-liner\n");


    return 0;
}


//(g) determine position of point with respect to a circle 
// The center of the circle has been assumed to be at (0,0)
#include<stdio.h>

int main(){
    int x, y,r;
    int dis,d;

    printf("\nEnter radius of circle and coordinates of the points (x,y) :");
    scanf("%d%d%d", &r,&x,&y);

    dis = x* x* + y* y; // or use pow()function
    d = r*r;

    if(dis == d)
    printf("Point is on circle \n");
    else
    {
    if(dis>d)
    printf("Point is outside the circle\n");
    else
    printf("Point is inside the circle\n ");
    }
    return 0;
}


//(h) Determine position of a pointer with respect to X and Y axes
#include<stdio.h>

int main(){
    int x, y;

    printf("\nEnter the x and y coordinates of a point :");
    scanf("%d%d", &x,&y);

    if(x == 0 && y == 0)
    printf("Point lies on origin\n");
    else
    if(x==0 &&y!=0)
    printf("Point lies on Y axis\n");
    else
    if(x!= 0 && y==0)
    printf("point lies on x axis\n");
    else
    printf("Point nethier lies on any axis , nor origin\n");


    return 0;
}


//(i) calculate the day on 1st january of any year
#include<stdio.h>

int main(){
    int leapdays , firstday, yr;
    long int normaldays, totaldays;

    printf("Enter year:");
    scanf("%d", &yr);
    normaldays= (yr - 1)* 365l;

    leapdays = (yr - 1)/ 4 - (yr - 1)/ 100 + (yr - 1)/400;
    totaldays = normaldays + leapdays;
    firstday = totaldays % 7;

    if(firstday == 0)
    printf("Monday\n");

     if(firstday == 1)
    printf("Tuesday\n");

     if(firstday == 2)
    printf("Wednesday\n");

     if(firstday == 3)
    printf("Thursday\n");

     if(firstday == 0)
    printf("Friday\n");

     if(firstday == 0)
    printf("Saturday\n");

     if(firstday == 0)
    printf("Sunday\n");

    return 0;

}