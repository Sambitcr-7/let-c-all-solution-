// ********************************ARRAYS*************************************
// interchanage adjacent element of an array
#include<stdio.h>
int main(){
    int num[]={12,4,5,1,9,13,11,19,54,34};
    int i, t;
    for(i= 0; i <=9; i = i+2)
    {
        t=num[i];
        num[i] = num[i+1];
        num[i+1]= t;
    }
    for(i = 0; i<=9; i++)
    printf("%d\t", num[i]);
    return 0;
}


//copy one array into another in reverse order

#include<stdio.h>
#include<math.h>
int main(){
    int arr1[15], arr2[5], i,j;
    printf("\nEnter 5 elements of arrys :\n");
    for(i = 0; i <=4; i++)
    scanf("%d", &arr1[i]);
    for(i=0, j = 4; i<=4; i++,j--)
    arr2[j]=arr1[i];
    printf("Elements in reverse order\n");
    for(i = 0; i<=4; i++)
    printf("%d\t", arr2[i]);
    return 0;

}


//find a number and its frequency in array
#include<stdio.h>
#include<math.h>

int main(){
    int num[] = {7,3,5,4,6,7,2,4,6,7};
    int n,i,count;
    printf("\nEnter an element to search :");
    scanf("%d", &n);
    count = 0;
    for(i = 0; i <=9; i++)
    {
        if(num[i] == n)
        count++;
    }
    printf("Number %d is found %d times(s) in the arrys\n", n,count);
    return 0;
}


// twenty - five number odd no.
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[25],i,pos=0,neg=0,zer=0,even=0,odd=0;
    for(i = 0; i <25; i++)
    {
        printf("Enter a number:");
        scanf("%d", &arr[i]);
    }
    for(i=0; i<25; i++)
    {
        if(arr[i]>0)
        pos++;
        if(arr[i]<0)
        neg++;
        if(arr[i]==0)
        zer++;

        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n\nData contain %d positve , %d negative , %d zeroes , %d even and %d odd numbers" ,pos,neg, zer, even, odd);
    getch();

    return 0;
}


//check if arr[0]=arr[0]=arr[n-1] and so on
#include<stdio.h>

int main(){
    int arr[10],i,j;

    printf("\nEnter 10 elements of array:\n");
    for(i= 0; i<=9; i++)
    scanf("%d", &arr[i]);

    for(i=0; i<=9; i++)
    {
        if(arr[i] == arr[10-(i+1)])
        printf("%d\n",arr[i]);
    }
    return 0;
}

// find smallest elemnts using pointer 
#include<stdio.h>

int main(){
    int arr[25],i,n;

    printf("\nEnter 25 elements of array:\n");
    for(i = 0; i <=24; i++)
    scanf("%d", &arr[i]);

    n = *arr;

    for(i =0; i <=24; i++)
    {
        if(*(arr + i)<n)
        n = *(arr+i);
    }

    printf("Smallest number in array is %d\n", n);

    return 0;
}


//Selection sort 
#include<stdio.h>

int main(){
    int a[25],i,j,t;

    printf("\nEnter 25 numbers:");

    for(i = 0; i <=24; i++)
    scanf("%d", &a[i]);

    for(i=0; i<=23; i++)//number of prasses
    {
        for(j=i+1; j<=24; j++)//strat next element
        {
            //compare a[i]with all element a[j] one by one
            if(a[i]>a[j])
            {
                t =a[i]; //Interchange if greater then next element
                a[i] = a[j];
                a[j]= t;
            }
        }
    }
    printf("\nSorted Number are :\n");
    for(i = 0; i<=24; i++)
    printf("%d\n", a[i]); // print the sorted array

    return 0;
}


//Exhange Sort
#include<stdio.h>
int main(){
    int a[25], i, j,m,t;

    printf("\nEnter 25 number:");
    for(i=0; i<=24; i++)
    scanf("%d", &a[i]);

    for(i=0; i<=24; i++)//number of presses
    {
        for(j=0; j<24-i; i++)//start another loop from begging 
        {
            // compare an element with the next element one by on 
            if(a[j]>a[j+1])
            {
                t=a[j]; //interchange the two if first is greater 
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nSorted Number are :\n");
    for(i=0; i<=24; i++)
    printf("%d\n", a[i]);

    return 0;
}


//Insertion Sort 
#include<stdio.h>

int main()
{
    int a[25], i,j,k,t;

    printf("\nEnter 25 number :\n");
    for(i=0; i<=24; i++)
    scanf("%d", &a[i]);

    for(i=1; i<=24; i++) // Number of passes
    {
        t=a[i];
        for(j=0; j<i; j++)
        {
            if(t<a[j])
            {
                for(k=i; k>=j; k--)
                a[k]= a[k-1]; // shift element to left
                a[j]= t;
                break;
            }
        }
    }
    printf("\nSorted Number are :\n");
    for(i=0; i<=24; i++)
    printf("%d\n", a[i]);


    return 0;
}



//pass the entire array and multiply each element by 3
#include<stdio.h>

int main(){
    int i; 
    static int array []= {1,2,3,4,5,6,7,8,9,10};

    printf("\nOriginal Array is:\n");
    for(i=0; i<10; i++)
    printf("%d", array[i]);

    modify(array , 10);

    printf("\n\nMOdified array is:\n");
    for(i=0; i<10; i++)
    printf("%d", array[i]);

    return 0;
}

//Function to modify array
modify(int *arr ,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        *arr = *arr*3;
        arr++;
    }
}

// sqrt (pow(xi - x))/n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a[15] ={-6,-12,8,13,11,6,7,2,-6,-9,-10,9,2},
    i,sum = 0;
    float min , hell = 0, sd, n =0;

    printf("Your data is:");

    for(i = 0; i = 15; i++)// sum of the data
    {
        printf("%d",a[i] );
        sum = sum + a[i];
        n++;

    }
    min = sum / n; // calculating mean of the data;

    for(i = 0; i<15; i++)// finding standard deviation of the data
    hell = hell + pow((a[i]- min), 2);

    sd = (sqrt(hell)) / n;

    printf("\n\nMean of the data = %f\n\nstandard devitaion of data = %f", min, sd);

    getch();
    return 0;
}


// triangle area = (1/2) ab sin(angle)

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a[6][4] = {
        // plot no .           a                     b                    angle
        1,    137.4,          80.9,                 0.78,
        2,    155.2,          92.62,                0.89,
        3,    149.3,          97.62,                0.89,
        4,    160.0,          100.0,                1.35,
        5,    155.6,          68.95,                 1.25,
        6,    149.7,          120.0,                 1.75,
    },
    arr[6],// areas
    max;
    int i, x = 0;//plot no

    for (i =0; i<6; i++)
    {
        arr[i] = (0.5)*a[i][1]* a[i][2] * sin(a[i][3]);
        if(max<arr[i])
        {
            max = arr[i];
            x = a[i][0];
        }
    }
    printf("\n\n\nAreas of the triangles are ~");

    for(i = 0; i < 6; i++)
    printf("\n%f : %2f", a[i][0], arr[i]);

    printf("\n\n\nNumber %d . triangle has maximum area of %2f.",x, max);

    getch();
    return 0;
}

// (h) data points (x, y);
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float x[11][2]={
        34.22,  102.43,
        39.87,  100.93,
        41.85,  97.43,
        43.23,  97.81,
        40.06,  98.32,
        53.29,  98.32,
        53.29,  100.07,
        49.12,  91.59,
        40.71,  94.85,
        55.15,  94.65,
    },

    xysum = 0, xsum = 0, ysum = 0, x2sum = 0, y2sum = 0, n = 11 , r;
    int i;

    {
        xsum = xsum + x[i][0];
        ysum = ysum + x[i][0];
        xysum = xysum + x[i][0] * x[i][1];
        x2sum = x2sum + x[i][0] * x[i][0];
        y2sum = y2sum + x[i][1] * x[i][1];
    }
    r = (xysum - xsum*ysum) / (sqrt((n*x2sum - xsum * x2sum)*(n*y2sum - ysum*y2sum)));

    printf("Coefficient of correlation (r) = %f", r );

    getch();
    return 0;
}


// X and Y coordinates of 10 different points
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float x[10], y[10], dis = 0;
    int i, j;
    printf("Enter the coordinates of 10 points ~ \n\n");

    for(i = 0; i < 10; i++)
    scanf("%f%f", &x[i], &y[i]);

    for(i = 0; i < 10; i++)
    dis = dis + sqrt(pow ((x[i +1]- x[i]),2) + pow((y[i+1]- y[i]), 2));

    printf("The total distance between first and last points is %f", dis);

    getch();
    return 0;
}



// (k) dequeue is an ordered
#include<stdio.h>
#include<conio.h>

#define MAX 10

void lAdd(int *l, int *q, int *r, int num);
void rAdd(int *l, int *q, int *r, int num);
void show(int *q, int *rside);
int rFetch(int *l, int *q, int *r);
int lFetch(int *l, int *q, int *r);

int main()
{
	int que[MAX];
	int left, right;
	left = right = -1;

	rAdd(&left, que, &right, 10);
	rAdd(&left, que, &right, 20);
	rAdd(&left, que, &right, 30);
	show(que, &right);

	lAdd(&left, que, &right, 5);
	show(que, &right);

	lFetch(&left, que, &right);
	show(que, &right);

	rFetch(&left, que, &right);
	show(que, &right);

	_getch();
	return 0;
}

/*Insertion from right*/
void rAdd(int *lside, int *q, int *rside, int num)
{
	if (*rside == MAX - 1)
	{
		printf("\nDequeue is full, no more insertion is possible.\n");
		return;
	}

	if (*rside == -1)
		*rside = 0;
	else
		(*rside)++;
	q[*rside] = num;
}

/*Insertion from left*/
void lAdd(int *lside, int *q, int *rside, int num)
{
	int i;

	if (*rside == MAX - 1)
	{
		printf("\nDequeue is full, no more insertion is possible.\n");
		return;
	}

	for (i = *rside; i >= 0; i--)
		q[i+1] = q[i];

	q[0] = num;

	if (*lside == -1)
		*lside = 0;
	(*rside)++;
}

/*Dislays the list*/
void show(int *q, int *rside)
{
	int i;

	printf("\n\nList\n");
	for (i = 0; i <= *rside; i++)
		printf("%d\t", q[i]);
	printf("\n\n");
}

/*Retrieval from left*/
int lFetch(int *lside, int *q, int *rside)
{
	int item = q[0], i;
	if (*rside == -1)
	{
		printf("\nList is empty.\n");
		return NULL;
	}

	for (i = 0; i < *rside; i++)
		q[i] = q[i + 1];

	(*rside)--;
	return item;
}

/*Retrieval from right*/
int rFetch(int *lside, int *q, int *rside)
{
	if (*rside == -1)
	{
		printf("\nList is empty.\n");
		return NULL;
	}
	int item = q[*rside];
	(*rside)--;
	return item;
}