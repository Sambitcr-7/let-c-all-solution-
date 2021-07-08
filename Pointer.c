// *******************************Pointers***********************************
//Function which returns sum , average and standard deviation 
#include<stdio.h>
#include<math.h>

void stats (int * , int * , double *);
int main(){
    int sum , avg;
    double stdev;
    stats(&sum , &avg , &stdev); // Function call by referencw
    printf("Sum = %d\nAverage = %d\nStandard deviation = %f\n", sum , avg , stdev);
    return 0;

}
void stats(int *sum , int *avg, double *stdev)
{
    int n1, n2, n3, n4, n5;
    printf("\nEnter 5 numbers:");
    scanf("%d%d%d%d%d", &n1,&n2,&n3,&n4,&n5);
    sum = n1+n2+n3+n4+n5; // calculate sum
    avg = *sum /5; //calculate average 
    //calculate standard deviation 
    *stdev = sqrt((pow((n1-*avg), 2.0)+pow((n2-*avg),2.0)+pow((n3-*avg),2.0)+pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);

}


// Function that returns average and percentage
#include<stdio.h>
#include<math.h>

void result(int , int , int , float* , float*);

int main(){
    float avg, per;
    int m1, m2, m3;
    printf("Enter marks in three subjects:");
    scanf("%d%d%d",&m1,&m2,&m3);
    result(m1,m2,m3,&avg ,&per);
    printf("Average = %f\nPercentage = %f\n", avg, per);

    return 0;
}

void result(int m1, int m2, int m3,float*a, float*p)
{
    *p= *a = (m1+m2+m3)/3.0f;
}


//Evalution of series
#include<stdio.h>
#include<math.h>

float numerator(float, int);
float denominator(int);

int main(){
    float x, n, d, term, sum , oldsum;

    int i,j;
    printf("\nEnter the number x:");
    scanf("%f", &x);
    i = j = 1;
    sum = 0;
    while(1)
    {
        n = numerator(x, j);
        d = denominator(j);
        term = n/d;
        oldsum = sum ;
        (i%2 == 0)? sum = sum -term : (sum = sum + term);
        if(abs(sum - oldsum)<0.00001)
        break;
        i++;
        j +=2;

    }
    printf("Sum = %f\n", sum);
    return 0;
}

//calculator power

float numerator(float y, int j);
{
    float k = 1;
    int m;
    for(m = 1; m<=j;m++)
    k * = y;
    return (k);
}

//calculate factorial
float denomiator(int j)
{
    int m;
    float h = 1;
    for (m = 1; m <=j; m++)
    h = h * m;
    return (h);
}




//(a)Circular shifting of values
#include<stdio.h>

void fun (int , int , int);
int main(){
    int x, y, z;

    printf("Enter the values x, y, z:\n");
    scanf("%d%d%d", &x,&y,&z);
    printf("\nValue of x, y & z as entered:");
    printf("\nx = %d\ty = %d\tz = %d\n", x,y,z);
    fun (x,y,z);

    return 0;
}

//Function to shift values of x, y, z
void fun (int x, int y, int z)
{
    int i,t;
    for(i = 0; i <=2; i++)
    {
        t = z;
        z = y;
        y = x;
        x = t;

        printf("\n\nAfter right shiffting of value %d times(s):\n", i+ 1);
        printf("x=%d\ty = %d\tz = %d", x,y,z);
    }
}


//(b) Area of triangle with sides a, b& c
#include<stdio.h>
#include<math.h>

float area (float a, float b , float c);
int main(){
    float a, b, c, z;

    printf("\nEnter three sides of the triangle :");
    scanf("%f%f%f",&a,&b,&c);
    z = area (a,b,c);

    printf("\n\nArea of the triangle = %.3f\n",z);
    return 0;
}

//Function to calculation area from a formula 
float area (float a, float b, float c)
{
    float s, m, x;
    s = (a+ b+ c)/ 2;
    m = s* (s-a) * (s-b)* (s-c);
    x = sqrt(m);

    return (x);
}










// (c)calculate distance between two points and use the function to calculate area of triangle given its three vertices
#include<stdio.h>
#include<conio.h>
#include<math.h>

float dis(int, int, int, int);
float ar(int, int, int, int, int, int);
int main()
{
int x1, x2, x3, y1, y2, y3, x, y;
float A1, A2, A3, A;
printf("Enter the cordinates of first point of the trianlge : ");
scanf("%d%d", &x1, &y1);
printf("\n\nEnter the cordinates of second point of the trianlge : ");
scanf("%d%d", &x2, &y2);
printf("\n\nEnter the cordinates of third point of the trianlge : ");
scanf("%d%d", &x3, &y3);
printf("\n\nEnter the points to check it's position : ");
scanf("%d%d", &x, &y);
A1 = ar(x1, y1, x2, y2, x, y);
printf("A1 : %f\n", A1);
A2 = ar(x1, y1, x3, y3, x, y);
printf("A2 : %f\n", A2);
A3 = ar(x, y, x2, y2, x3, y3);
printf("A3 : %f\n", A3);
A = ar(x1, y1, x2, y2, x3, y3);
printf("A : %f\n", A);
if (!(A1 + A2 + A3>A || A1 + A2 + A3<A))
	printf("\n\nThe point (%d,%d) lies inside of triangle.", x, y);
else
	printf("\n\nThe point (%d,%d) lies outside of triangle.", x, y);
getch();
return 0;
}

float dis(int x1, int y1, int x2, int y2)
{
float distance;
distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
return (distance);
 }

float ar(int x1, int y1, int x2, int y2, int x3, int y3)
{
float a, b, c, area, S;
a = dis(x1, y1, x2, y2);
b = dis(x1, y1, x3, y3);
c = dis(x2, y2, x3, y3);
S = (a + b + c) / 2;
area = sqrt(S*(S - a)*(S - b)*(S - c));
return (area);
}




//(d) compute Greatest common divisor = Euclid Algorithm
#include<stdio.h>
int fun(int ,int);
int main(){
    int j , k, t, r, z;

    printf("\nEnter two numbers:");
    scanf("%d%d", &j, &k);
    z = fun(j,k);
    printf("Greatest common divisor of two number is %d\n", z);
    return 0;
}
//Function to calcualte GCD
int fun (int j, int k)
{
    int r = 1, m, n=0, t;
    if(k>j)// interchange values
    {
        t = j;
        j = k;
        k = t;

    }
    else{
        if(j == k)
        return j;
    }
    while(1)
    {
        r = j/k;
        m = j - (r*k);

        if(!(j%k))// j is exact multiple of k
        n = k;

        if(m == 0)
        break ;


        j = k; 
        k = m;
        n = m;

    }
    return n;
}


// Write a function to compute the greatest common divisor given by Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
#include<stdio.h>
#include<conio.h>

int gcd(int, int);

int main()
{
	int a, b, cd, max, min;
	printf("Enter two numbers : ");
	scanf("%d%d", &a, &b);
	if (a>b)//for making a greater number
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	a = max;
	b = min;
	cd = gcd(a, b);//returning the greatest divisor
	printf("\n\nGreatest common divisor of the givn numbers is %d", cd);
	getch();
	return 0;
}

int gcd(int a, int b)
{
	static int x, temp;
	if (b == 0)
		return (a);
	x = a / b;
	temp = a;
	a = b;
	b = temp - x*b;
	gcd(a, b);
}
