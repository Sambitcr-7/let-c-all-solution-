// ********************************************structures****************************
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#include<Windows.h>


struct node
{
    int data ;
    struct node *link;

};

void push (struct nodes **s, int item);
void displaystack(struct node *q);
int pop (struct nodes **s);
int count(struct node *q);


int main()
{
    struct node *top;
    int t, i , item;

    top = NULL;

    push(&top, 45);
    push(&top, 28);
    push(&top, 63);
    push(&top, 55);

    displaystack(top);
    t = count (top);
    printf("\nTotal items = %d\n", t);
    
    printf("\nPopped :");
    item = pop(&top);
    printf("%d\n", item);

    displaystack(top);
    t = count(top);
    printf("\nTotal item = %d", t);
    return 0;
}
void push (struct node **s , int item)
{
    struct node *q;
    q = (struct node *) malloc (sizeof(struct node));
    q-> data = item;
    q -> link = *s;
    *s = q;

}

int pop(struct node **s)
{
    int item;
    struct node *q;
    if(*s == NULL)
    printf("Strack is empty \n");
    else{
        q = *s;
        item = q -> data;
        *s = q -> link;
        free (q);
        return (item);
    }
}

void displaystruck(struct node *q)
{
    while (q!= NULL)
    {
        printf("\t%2d", q -> data);
        q = q -> link;
    }
}

int count (struct node *q)
{
    int c = 0;
    while (q!= NULL)
    {
        q = q-> link;
        c++;
    }
    return 0;
}



// implementation of a queue using linked list 
#include<stdio.h>
#include<malloc.h>

struct queue
{
    int item;
    struct queue *link;
};

struct queue *rear , *front ;
void add (int item);
int del_queue();
void display();
int count();

int main()
{
    int item ;
    rear = front = NULL;

    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);

    // display all element in the int queue
    display();
    printf("\nTotal number of element present is : %d", count ());

    item = del_queue();
    printf("\nDeleted item = %d\n", item );
    display();
    printf("\nTotal number of element present is : %d", count ());
    item = del_queue();
    printf("\nDeleted item = %d\n ", item);
    display();
    printf("\nTotal number of element of element present is : %d", count());
    return 0;
}

void add (int item)
{
    struct queue  *q = (struct queue *) malloc (sizeof(struct queue));
    q -> item = item;
    q -> link = NULL;
    if(rear  == NULL)
    {
        rear = q;
        front = q;
    }
    {
        q -> link = rear;
        rear = q;
    }
}

int del_queue()
{
    int item ;
    

struct queue *q = rear;
 if(front  == NULL)
 {
    printf("\n\n\t\tQueue is empty");
 }
 else
 {
    if(front == rear)
    {
        item = q -> item;
        front = rear = NULL;
        free(q);
    }
    else
    {
         while(q -> link -> link != NULL)
    q  = q -> link;
    item = q ->link -> item;
    free(q -> link);
    front = q;
    q -> link = NULL;

     }
   
  }

  return item;

}

void display ()
{
    struct queue * q = rear ;

    while (q != NULL)
    {
        printf("\n%d", q -> item);
        q = q -> link;
    }
}
int count ()
{

    struct queue *q = rear;
    int count = 0;

    while (q != NULL)
    {
        count ++;
        q = q -> link;
    }
    return count;
}






//roll number 
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
struct studata
{
int roll;
char name[50];
char depart[50];
char course[20];
int yoj;
}nos[450] = { 03, "Kishor", "IT", "B.tech", 2014,
10, "Mohammad Siraj Alam", "Computer Science", "B.Tech", 2014,
53, "Deepak", "Computer Applications", "BCA", 2013,
13, "Karan", "Mechanical", "Diploma", 2013,
1, "Aakash", "Tool and Die", "Diploma", 2012,
2, "Ramesh", "IT", "B.tech", 2014
};
void student_in_year(int year)
{
int i;
printf("\n\t\tYear of joining : %d\n\n", year);
for (i = 0; i <= 450; i++)
{
	if (nos[i].yoj == year)
	{

		printf("\nRoll Number : %d", nos[i].roll);
		printf("\nName : %s", nos[i].name);
		printf("\nDepartment : %s", nos[i].depart);
		printf("\nCourse : %s\n", nos[i].course);
	}
}
}
void student_data(int enroll)
{
int i;
printf("\nRoll number : %d", enroll);
for (i = 0; i <= 450; i++)
{
	if (nos[i].roll == enroll)
	{
		printf("\nName : %s", nos[i].name);
		printf("\nDepartment : %s", nos[i].depart);
		printf("\nCourse : %s\n", nos[i].course);
		printf("\nYear of joining : %d\n", nos[i].yoj);
	}
}
}
int main()
{
int yoj, roll;
printf("\nEnter year of joining of the students : ");
scanf("%d", &yoj);
student_in_year(yoj);
_getch();
system("cls");
printf("\nEnter the roll number of the studnet you want data : ");
scanf("%d", &roll);
student_data(roll);
_getch();
return 0;
}




// customers in a bank
#include<stdio.h>
#include<conio.h>
#include<Windows.h>

/*Function to perform withdrawal or deposition*/
void action(int, int, int);

/*Print the balance below 100 Rs.*/
void below100();

struct acc_holder
{
long int acc_num;
char name[30];
int bal;
} sbi[200] = { 1, "Siraj", 1000000,
2, "Azad", 1233044,
3, "Deepak", 99,
4, "Rihan", 33,
5, "Rahul Khowal", 200000
};

int main()
{
int accnum, amount, code;
printf("\nEnter your account number : ");
scanf("%d", &accnum);
printf("Enter 1 for deposit and 0 for withdrawal : ");
scanf("%d", &code);
if (code)
{
	printf("\nEnter amount to be deposit : ");
	scanf("%d", &amount);
}
else
{
	printf("\nEnter amount to withdraw : ");
	scanf("%d", &amount);
}
action(accnum, amount, code);
_getch();
system("cls");
printf("All members with account balance less than 100 are following : ");
below100();
_getch();
return 0;
}

void below100()
{
int i;
for (i = 0; i < 200; i++)
{
	if (sbi[i].bal < 100 && sbi[i].bal > 0)
	{
		printf("\nName : %s", sbi[i].name);
		printf("\nAccount Number : %d\n\n", sbi[i].acc_num);
	}
}
}

void action(int accnum, int amount, int code)
{
int i;
for (i = 0; i < 200; i++)
	if (sbi[i].acc_num == accnum)
		break;
if (!code)
{
	if (sbi[i].bal - amount < 100)
	{
		printf("\nThe balance is insufficient for the specified withdrawal");
		return;
	}
	else
	{
		sbi[i].bal -= amount;
		printf("\nYour new account balance is : %d", sbi[i].bal);
	}
}
else
{
	sbi[i].bal += amount;
	printf("\nYour new account balance is : %d", sbi[i].bal);
}

}




// name of cricket
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Max 20

int compare(const void * a, const void * b);

struct cricketers
{
int avrun;
char name[30];
int age;
int notm;
}india[Max] = {
122, "Sachin Tendulkar", 30, 67,
97, "Virendra Sehwag", 35, 56,
66, "Irfan Pathan", 32, 45,
153, "Yusuf Pathan", 36, 21,
101, "Yuvaraj Singh", 32, 45,
};

int main()
{
int i;
qsort(india, 5, sizeof(struct cricketers), compare);



for (i = 0; i < 5; i++)
{
	printf("Name : %s", india[i].name);
	printf("\nAge : %d", india[i].age);
	printf("\nTotal Test Matches played : %d", india[i].notm);
	printf("\nAverage Run : %d\n\n\n", india[i].avrun);
}
_getch();
return 0;
}

int compare(const void * a, const void * b)
{
return (*(int*)a - *(int*)b);
}



// automobile company
#include<stdio.h>
#include<conio.h>
#include<Windows.h>

void eng_info(char*, char*);

struct engine
{
	char serial[4];
	int yom;
	char mat[50];
	int quantity;
}
maruti[10] = { "AA0", 2005, "Iron", 20,
"BB1", 2007, "Steel", 13,
"BB2", 1992, "Aluminium", 57,
"CC1", 2005, "Stainless Steel", 7,
"CC6", 2007, "Steel", 34,
"CC7", 2010, "Steel", 14
};

int main()
{
	char from[5], to[5];
	printf("\nEnter the serial number, from where you want to start the list : ");
	scanf("%s", from);
	printf("\nEnter the serial at which you wan to end the list : ");
	scanf("%s", to);
	system("cls");
	eng_info(from, to);
	_getch();
	return 0;
}

void eng_info(char *from, char *to)
{
	char first_letter;
	int last_digit;
	int i;
	printf("\n\t\tEngines Information\n");
	for (i = 0; maruti[i].serial[0] != *from; i++);
	while (1)
	{
		printf("\nSerial Number : %s", maruti[i].serial);
		printf("\nYear Of Manufacture : %d", maruti[i].yom);
		printf("\nMaterail Used : %s", maruti[i].mat);
		printf("\nQuantity : %d\n", maruti[i].quantity);
		if (i == 10)
			i = 0;
		i++;
		if (maruti[i].serial[0] == *to &&  maruti[i].serial[2] == *(to + 2))
		{
			printf("\nSerial Number : %s", maruti[i].serial);
			printf("\nYear Of Manufacture : %d", maruti[i].yom);
			printf("\nMaterail Used : %s", maruti[i].mat);
			printf("\nQuantity : %d\n", maruti[i].quantity);
			return;
		}
	}
}



// employee code more than 3 years
#include<stdio.h>
#include<stdlib.h>

#define NOOPFEMP 5

struct date
{
    int day , month , year;
};

int check_date(struct date *dt);

int main(){
    struct employee
    {
        int code;
        char emp_name[20];
        struct date doj;
    };

    struct employee emp[NOOPFEMP];
    int i, chdt;
    struct date curr;

    printf("\nEnter current date:");
    chdt = check_date (&curr);
    if (chdt == 0)
    {
        printf("\nImproper date entered ");
        exit(0);
    }

    printf("\nEnter the information for %d employee : ", NOOPFEMP);

    for(i = 0; i < NOOPFEMP ; i++)
    {
        fflush(stdin);
        printf("\nEmp %d : \nCode : ", i);
        scanf("%d", &emp[i] .code);

        printf("\nName :");
        scanf("%s", emp[i] .emp_name);

        printf("\nDate of joining (dd-mm-yyyy):");
        chdt = check_date (&emp [i] .doj);

        if(chdt == 0)
        {
            printf("\nImproper date entered ");
            exit(0);
        }
    }
    printf("\nEmployee whose tenure is 3 years or more:");

    for(i = 0; i < NOOPFEMP ; i++)
    {
        if(curr.year > emp[i] .doj.year + 3)
        {
            printf("\n%s", emp[i].emp_name);
            break;
        }
        else{
            if(curr.year == emp[i].doj.year + 3)
            {
                if(curr.month > emp[i].doj.month)
                {
                    printf("\n%s", emp[i].emp_name );

                }
                else{
                    if((curr.month == emp[i].doj.month) && (curr.day >= emp[i].doj.day))
                    printf("\n%s", emp[i].emp_name);
                }
            }
        }
    }
    return 0;
}


// Function to check the date entered
int check_date(struct date *dt)
{
    printf("\nEnter date(dd):");
    scanf("%d", &dt -> day);

    printf("\nEnter month (mm):");
    scanf("%d", &dt -> month);

    printf("\nEnter year (yyyy): ");
    scanf("%d", &dt -> year);

    if((dt -> day > 31 || dt -> day < 0) ||
    (dt -> month > 12 || dt -> month < 0) ||
    (dt -> year > 9999 || dt -> year < 1000))
    {
        return (0);
    }
    else
    return (1);
}



 //Library hold accession number
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

/*Count total number of books in the library*/
int count();

void display(int);

/*If the author name is same so the function strcmp returns a zero*/
void giv_author(char*);
void adbuk();

/*Appears the title of the specified book*/
void which1(int);

/*Displays all the books serially accession number*/
void albuk();

struct library
{
	int an;/*Accession number*/
	char title[50];
	char author[30];
	int price;
	int flag;/*flag = 0 : Issued and,flag =  1: not issued*/
}geclib[50] = {
	1, "Let Us C", "Yashavant Kanethkar", 258, 1,
	2, "Data Structure Through C", "Yashavant Kanethkar", 300, 1,
	3, "Let Us C++", "Yashavant Kanethkar", 220, 1,
	4, "Harry Potter : The Philosopher's Stone", "J. K. Rowling", 550, 0,
	5, "The Two Towers", "J. R. R. Tolkien", 560, 0,
	6, "The Hobbit", "J. R. R. Tolkien", 550, 1,
	7, "The Fellowship of the Ring", "J. R. R. Tolkien", 550, 0
};

int main()
{
	int ans = 1, an;
	char auth[30];
	while (ans != 7)
	{
		system("cls");
		printf("\nYou are in menu section\n");
		printf("\n1. Add Book Information");
		printf("\n2. Display Book Information");
		printf("\n3. List all books of given author");
		printf("\n4. List the title of specified book");
		printf("\n5. List the counts of the books in library");
		printf("\n6. List the books in order of accession number");
		printf("\n7. Exit");
		printf("\n\n\t\tEnter you choice : ");
		scanf("%d", &ans);
		switch (ans)
		{
		case 1:
			adbuk();
			_getch();
			break;
		case 2:
			printf("\nEnter the accession number of the book : ");
			scanf("%d", &an);
			display(an);
			_getch();
			break;
		case 3:
			while (getchar() != '\n');
			printf("Enter the name of the author (case sensitive) : ");
			gets(auth);
			giv_author(auth);
			_getch();
			break;
		case 4:
			printf("\nEnter the accession number of book : ");
			scanf("%d", &an);
			which1(an);
			_getch();
			break;
		case 5:
			printf("\nTotal Number of books : %d", count());
			_getch();
			break;
		case 6:
			albuk();
			_getch();
			break;
		case 7:
			return 0;
		default:
			printf("\nWrong choice, Try Again!!");
			_getch();

		}
	}
	_getch();
	return 0;
}

int count()
{
	int i = 0;
	while (geclib[i].an)
		i++;
	return i;
}

void display(int i)
{
	i--;/*To use i as index*/
	printf("\n\n\n");
	printf("\nAccession Number : %d", geclib[i].an);
	printf("\nTitle : %s", geclib[i].title);
	printf("\nAuthor : %s", geclib[i].author);
	printf("\nPrice : %d", geclib[i].price);
	if (geclib[i].flag)/*Flag : 0*/
		printf("\nStatus : Issued");
	else
		printf("\nStatus : Available");/*Flag : 1*/
}

void giv_author(char *author)
{
	int i = 0;
	printf("\nBooks of \"%s\" are following : \n\n", author);
	while (geclib[i].an)
	{
		if (!(strcmp(author, geclib[i].author)))
			display(geclib[i].an);
		i++;
	}
}

void adbuk()
{
	int next = count();
	geclib[next].an = next + 1;

	/*fflush(stdin) or while(getch() != '\n'); to clear the buffer*/
	while (getchar() != '\n');
	printf("\nEnter the title of the book : ");
	gets(geclib[next].title);
	printf("\nEnter the author name of the book : ");
	gets(geclib[next].author);
	printf("\nEnter the price of the book : ");
	scanf("%d", &geclib[next].price);
	geclib[next].flag = 1;
	system("cls");
}

void which1(int an)
{
	int i = 0;
	while (geclib[i].an)
	{
		if (geclib[i].an == an)
		{
			printf("\n\nTitle of the book : %s\n", geclib[i].title);
			return;
		}
	}
	printf("No any book found found\n");
}

void albuk()
{
	int i = 0;
	while (geclib[i].an)
	{
		display(i + 1);
		i++;
	}
}



// Create Data structure and compare the data
#include<stdio.h>
#include<stdlib.h>


struct date
{
    int day , month , year;

};

int check_date(struct date *dt);
int main()
{
    int chkdt;
    struct date d1, d2;

    printf("\nEnter dates to be compared :");
    chkdt = check_date(&d1);
    
    if(chkdt == 0)
    exit(0);

    fflush (stdin);

    chkdt = check_date(& d2);

    if(chkdt == 0)
    exit(0);

    if((d1.day  == d2.day ) && (d1.month == d2.month) && (d1.year == d2.year ))
    printf("\nDates are equal");
    else
    printf("\nDates are Unequal ");
    return 0;
}

int check_date(struct date *dt)
{
    printf("\nEnter date (dd) :");
    scanf("%d", &dt -> day);

    printf("\nEnter month (yyyy):");
    scanf("%d", &dt -> year);


    if((dt ->day >31 || dt -> day < 0)|| 
    (dt -> month > 12 || dt -> month < 0) ||
    (dt -> year > 9999 || dt -> year < 1000))
    {
        printf("\nImproper date entered ");
        return (0);
    }
    else
    return (1);
}