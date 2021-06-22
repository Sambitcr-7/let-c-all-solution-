// ****************C Instructions******************



//Find area of the trinagle , given its sides 
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a, b, c, sp, area;
    printf("\nEnter sides of a triangle :");
    scanf("%f%f%f", &a, &b, &c);

    sp=(a+b+c)/2;

    area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of the triangle =%f\n", area);

    return 0;
}


// Sum of the digits a 5 digits number 
#include<stdio.h>

int main(){
    int num, a, n;
    int sum = 0; // initialise to zero , otherwise it will contain a garbage value

    printf("\nEnter a 5 digits number (less than 32767) : ");
    scanf("%d", &num);

    a = num % 10; //last digits extracted as remainder 
    n = num /10; //remaing digits 
    sum = sum + a; // sum update with addition of extracted digits

    a = n % 10; //4 th digit
    n = n /10;
    sum = sum +a;

    a = n % 10; // 3 rd digit
    n = n /10;
    sum = sum +a;

    a = n % 10 ; //1 st digits 
    sum = sum + a;

    printf("The sum of the 5 digits of %d is %d\n", num , sum);

    return 0;
}



// Reverse digits of the a 5 - digits number 
#include<stdio.h>

int main(){
    int n , a, b;
    long int revnum = 0;

    printf("\nEnter a five digits number(less than 32767): ");
    scanf("%d", &n);

    a=n % 10; // last digit
    n=n / 10 ; // remaing digits
    revnum = revnum + a* 10000l ; // revnum upadate with value of extracted digits

    a = n % 10; // 4 th digits 
    n = n / 10; // remaining digits 
    revnum = revnum + a* 1000;

    a = n % 10 ; // 3 rd digits 
    n = n / 10; // remaining digits 
    revnum = revnum + a * 10;

    a =  n % 10 ; // 2 nd digits 
    n = n / 10; // remaining digits
    revnum = revnum + a * 10;

    a = n % 10; // 1 st digits
    n = n / 10; // remaing digits
    revnum = revnum + a;

    // speacifier %ld is used for printing a long interger 
    printf("The reversed number is %ld\n", revnum);

    return 0;
}



// Find smallest number of notes that will combine to give the amount 

#include<stdio.h>

int main(){
    int amount , nohun , nofifty , noten , nofive , notwo , noone , tolalnotes;

    printf("Enter the amount :");
    scanf("%d", amount);

    nohun = amount / 100;
    amount = amount % 100;
    nofifty = amount / 50;
    amount = amount % 50;
    noten = amount /10;
    amount = amount % 10;
    nofive = amount / 5;
    amount = amount % 5;
    notwo = amount / 2;
    amount = amount % 2;
    noone = amount / 1;
    amount = amount % 1;

    tolalnotes = nohun + nofifty + noten + notwo + noone;

    printf("Smallest number of notes = %d\n", tolalnotes);

    return 0;
}



// Convert cartesian co-ordinates to polar co - ordinates
#include<stdio.h>
#include<math.h>

int main(){
    float x, y, r, theta;

    printf("\nEnter x and y co - ordinates:");
    scanf("%f%f", &x, &y);

    r = sqrt(x*x+y*y);
    theta = atan2(y,x);
    theta = theta * 180 / 3.14; // convert to degree
    printf("r= % f theta = %f\n", r, theta);


    return 0;
}


// Calculate distance between two place in Nautical Miles
#include<stdio.h>
#include<math.h>

int main(){
    float lat1, lat2 , lon1, lon2, d;

    printf("\nEnter Latitude and latitude of Place 1:");
    scanf("%f%f", &lat1 , &lon1);

    printf("\nEnter latitude and latitude of place 2:");
    scanf("%f%f", &lat2, &lon2);

    lat1 = lat1 * 3.14 / 180;
    lat2 = lat2 * 3.14 / 180;
    lon1 = lon1 * 3.14 / 180;
    lon2 = lon2 * 3.14 / 180;

    d = 3963 * acos(sin(lat1)* sin(lat2) * cos(lat1) * cos(lat2) * cos(lon2 - lon1));

    printf("Distance between Places 1 and places 2 : % f\n" , d);


    return 0;
}


// Calculation of wind chill factor
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    float temp , vel, wcf;

    printf("\nEnter values of temp and velocity :");
    scanf("%f%f", &temp, &vel);
    wcf= 35.74+ 0.6215 * temp + (0.42751 * temp - 35.75) * pow(vel,0.16f); // pow(a,b) function is used to calculate a^b

    printf("Wind chill Factor = %f\n", wcf);

    return 0;
}


// Print all Trigometric roties  of an angles 
#include<stdio.h>
#include<math.h>

int main(){
    float angle, s, c,t;

    printf("\nEnter an angles:");
    scanf("%f", &angle);

    //convert angles to radians angles = angle * 3.14/180;

    s = sin(angle);
    c = cos(angle);
    t = tan(angle);

    printf("sin = % f cos = % f tan = % f\n", s,c,t);

    return 0;
}



// Interchanging of contents of two varibles c & d
#include<stdio.h>

int main(){
    int c, d, e;

    printf("\nEnter the number at location c:");
    scanf("%d", &c);

    printf("\nEnter the number at location D:");
    scanf("%d", &d);

    //Interchange contents of two variables using a third variables as temporary store
    e = c;
    c = d;
    d = e;

    printf("New Number at location c =%d\n", c);
    printf("New Number at location d = %d", d);


    return 0;
}