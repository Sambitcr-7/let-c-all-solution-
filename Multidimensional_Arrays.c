// ************************************Multidimensional Arrays*******************************
//2-D Arrays is an array of arrays
#include<stdio.h>
#include<math.h>
int main()
{
    int s[4][2] ={
        {1234, 56}, {1212, 33},{1434,80},{1312,78}
    };

    int i;
    for(i = 0; i <= 3; i++)
    printf("Address of %d th 1-D arrays = %u\n", i, s[i]);

    return 0;
}


// pointer notation to acess 2-D array elements
#include<stdio.h>
#include<math.h>
int main(){
    int s[4][2]={
        {1234, 56}, {1212, 33},{1434,80},{1312,78}
    };

    int i , j;
    for( i = 0; i<= 3; i++)
    {
        for(j = 0; j <=1; j++)
        printf("%d", ((s+i) + j));
        printf("\n");
    }
    return 0;
}


// usage of pointer to an arrays
#include<stdio.h>
#include<math.h>

int main(){
    int s[4][2]={
        {1234,56}, {1212,33},{1434,80},{1312, 78}
    };
    int (*p)[2];
    int i, j , *pint;
    for(i =0; i<= 3; i++)
    {
        p= &s[i];
        pint = (int *)p;
        printf("\n");
        for(j = 0; j <=1; j++)
        printf("%d", *(pint + j));

    }
    return 0;
}


//Pick up largest number from 5X5 matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5][5] = {
		1,2,3,4,5,
		6,7,8,9,10,
		11,12,13,14,15,
		16,17,18,19,20,
		21,22,23,24,25
	};

	int i, j, max = 0;

	for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
			if (arr[i][j]>max)
				max = arr[i][j];

	printf("Largest Number : %d", max);

	getch();
	return 0;
}


// obtain transpose of a 4x4 matrix
#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[4][4], tran[4][4];
	int i, j;

	printf("Enter the elements of the 4 by 4 matrix\n");
	for (i = 0; i<4; i++)//scanning matrix
		for (j = 0; j<4; j++)
			scanf("%d", &mat[i][j]);

	for (i = 0; i<4; i++)//finding transpose of the martrix
		for (j = 0; j<4; j++)
			tran[i][j] = mat[j][i];

	for (i = 0; i < 4; i++)//printing transpose of the matrix
	{
		for (j = 0; j < 4; j++)
			printf("%d ", tran[i][j]);
		printf("\n");
	}

	_getch();
	return 0;
}


// square matrix is symmetric
#include<stdio.h>
#include<conio.h>
#define n 3
int main()
{
	int i, j;

	int mat[n][n];
	printf("Enter the elements of the of the %d by %d matrix.\n", n, n);
	for (i = 0; i<n; i++)//scanning elements
		for (j = 0; j<n; j++)
			scanf("%d", &mat[i][j]);

	for (i = 0; i<n; i++)//checking symmetry
	{
		for (j = 0; j<n; j++)
		{
			if (mat[i][j] != mat[j][i])
			{
				printf("\nThis is not a symmetric matrix.\n");
				_getch();
				return 0;
			}
			else
				continue;
		}
	}
	if (i == n)//if it is syymetric
		printf("\nThis is a symmetric matrix.\n");

	_getch();
	return 0;

}


//program to add two 6X6 matrices
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[6][6], b[6][6], sum[6][6], i, j;

	printf("Enter first matrix.\n");

	for (i = 0; i<6; i++)//scanning elements of first matrix.
	{
		for (j = 0; j<6; j++)
			scanf("%d", &a[i][j]);
	}

	printf("\n\nEnter the second matrix.\n\n");

	for (i = 0; i<6; i++)//scanning elements of second matrix.
	{
		for (j = 0; j<6; j++)
			scanf("%d", &b[i][j]);
	}

	printf("\n\n\n");

	for (i = 0; i<6; i++)//summing up the matrices
		for (j = 0; j<6; j++)
			sum[i][j] = a[i][j] + b[i][j];

	for (i = 0; i<6; i++)//displaying the matrix with it's summition
	{
		for (j = 0; j<6; j++)
			printf("%d ", a[i][j]);
		for (j = 0; j<6; j++)
		{
			if (i == 2 && j == 2)
				printf("+");
			else
				printf(" ");
		}
		for (j = 0; j<6; j++)
			printf("%d ", b[i][j]);
		for (j = 0; j<6; j++)
		{
			if (i == 2 && j == 2)
				printf("=");
			else
				printf(" ");
		}
		for (j = 0; j<6; j++)
		{
			if (sum[i][j]<9)
				printf(" ");
			printf("%d ", sum[i][j]);
		}

		printf("\n");
	}


	_getch();
	return 0;
}



// program to multiply any two 3 x 3 matrices
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3], b[3][3], ans[3][3];
	int i, j, x;

	printf("Enter the first 3 by 3 matrix.\n\n");//scanning the first matrix
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			scanf("%d", &a[i][j]);
	printf("\n\nEnter the second 3 by 3 matrix.\n\n");//scanning the second matrix
	for (i = 0; i<3; i++)
		for (j = 0; j<3; j++)
			scanf("%d", &b[i][j]);
	
	for (x = 0; x<3; x++)
	{
		for (i = 0; i<3; i++)
		{
			ans[x][i] = 0;
			for (j = 0; j<3; j++)
				ans[x][i] = ans[x][i] + a[x][j] * b[j][i];//getting elements of the resultant matrix
		}
	}

	printf("\n\nProduct of the matrices is.\n\n");
	for (i = 0; i<3; i++)//printing the elements of the resultant matrix
	{
		for (j = 0; j<3; j++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}

	_getch();
	return 0;
}


// array p[5] function for a 4 x5 matrix
#include<stdio.h>
#include<conio.h>

void shift(int *base)
{
	int *web, fir, sec, i;
	web = base;
	fir = *base;//saving first value in fir variable
	sec = *(base + 1);//saving second value insec variable

	for (i = 0; i<3; i++)//shifting the values by saving them in next to next addresses
		*(web + i) = *((base + 2) + i);

	*(web + 3) = fir;
	*(web + 4) = sec;
}

int main()
{
	int a[5], i;

	printf("Enter 5 numbers : ");
	for (i = 0; i<5; i++)//scanning values
		scanf("%d", &a[i]);

	shift(a);//calling function

	printf("\n\nList after shifting it's rows by two positions.\n\n");
	for (i = 0; i<5; i++)//printing values after shifting

		printf("%d ", a[i]);
	_getch();
	return 0;
}