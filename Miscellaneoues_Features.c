// ************************Miscellaneoues Features********************
//Call function using an array of function pointer
#include<stdio.h>

float fun1 (int , int );
float fun2 (int , int );
float fun3 (int , int );
float fun1 (int i , int j)
{
    printf("In fun1\n");
    return 1.0f;
}
float fun2 (int i, int j)
{
    printf("In fun2\n");
    return 2.0f;
}
float fun3(int i, int j)
{
    printf("In fun3\n");
    return 3.0f;
};
int main()
{
    float(*ptr[3])(int , int );
    float f; int i;
    ptr[0] = fun1;
    ptr[1] = fun2;
    ptr[2] = fun3;
    for(i = 0; i < 3; i++)
    {
        f = (*ptr[i])(100, i);
        printf("%f\n", f);
    }
    return 0;
}


// 22.2
#include<stdio.h>

int findavg(int,...);
int main()
{
    int avg ;
    avg = findavg(5, 23, 15 , 1, 92, 50);
    printf("avg = %d\n", avg);
    avg = findavg(3, 100, 30, 29);
    printf("avg = %d\n", avg);
    return 0;
}
int findavg (int tot_num, ...)
{
    int avg , i , num , sum;
    va_list ptr;
    vastart(ptr, totnum);
    sum  = 0;
    for(i = 1; i <= tot_num; i++)
    {
        num = va_arg(ptr, int);
        sum = sum + num;
    }
    return(sum / tot_num);
}





// (b) minor / major 
#include<stdio.h>
#include<conio.h>
#include<Windows.h>

#define MAX 2

int main()
{
	enum sex { male, female };
	enum level { major, minor };
	typedef struct people
	{
		enum sex gender;
		enum level age_level;
		char policy_name[10];
		unsigned int duration_in_year;
	} PEOPLE;
	PEOPLE p[MAX];
	int i, enm;
	for (i = 0; i < MAX; i++)
	{
		printf("\nEnter the gender (male = 0 or female = 1) : ");
		scanf("%d", &enm);
		enm ? (p[i].gender = female) : (p[i].gender = male);
		printf("\nEnter the age status (major = 0 or minor = 1) : ");
		scanf("%d", &enm);
		enm ? (p[i].age_level = minor) : (p[i].age_level = major);

		//Clearing input stream
		while (getchar() != '\n');

		printf("\nEnter name of the customer : ");
		gets(p[i].policy_name);
		printf("\nEnter the duration (in years) : ");
		scanf("%d", &p[i].duration_in_year);
	}
	system("cls");
	for (i = 0; i < MAX; i++)
	{
		printf("\n%d\t%d", p[i].gender, p[i].age_level);
		printf("\t%s\t%d", p[i].policy_name, p[i].duration_in_year);
	}
	getch();
	return 0;
}




//(a) 10 empolyees and display
#include<stdio.h>
#include<conio.h>
#include<stdarg.h>

#define MAX 5

typedef struct date
{
	unsigned d : 5;
	unsigned m : 4;
	unsigned y : 12;
}EMP;

void swap(EMP*, EMP*);

int main()
{

	int i, j;
	EMP e[10], a[10];
	e[0].y = 2010; e[0].m = 12; e[0].d = 10;
	e[1].y = 1990; e[1].m = 3; e[1].d = 23;
	e[2].y = 1995; e[2].m = 4; e[2].d = 13;
	e[3].y = 2001; e[3].m = 1; e[3].d = 13;
	e[4].y = 1990; e[4].m = 3; e[4].d = 20;
	e[5].y = 1992; e[5].m = 6; e[5].d = 19;

	for (i = 0; i < MAX; i++)
		a[i] = e[i];

	for (i = 0; i < MAX; i++)
	{
		for (j = i + 1; j < MAX; j++)
		{
			if (a[j].y < a[i].y)
				swap(&a[i], &a[j]);
			if (a[j].y == a[i].y)
			{
				if (a[j].m < a[i].m)
					swap(&a[i], &a[j]);
				if (a[j].m == a[i].m)
					if (a[j].d < a[i].d)
						swap(&a[i], &a[j]);
			}
		}
	}

	system("cls");
	for (i = 0; i <= 4; i++)
	{
		printf("\nEmplyee no. %d : ", i + 1);
		printf("%2d/%2d/%4d", a[i].d, a[i].m, a[i].y);
	}
	getch();
	return 0;
}
void swap(EMP *a, EMP *b)
{
	EMP c;
	c = *a;
	*a = *b;
	*b = c;
}



