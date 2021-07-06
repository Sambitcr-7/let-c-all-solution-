// ***************************************Operations on Bits*******************************

// To determine the color
#include<stdio.h>

int main()
{
    int color;
     
    printf("\nEnter any number :");
    scanf("%d", color);

    printf("Colors represented are:\n");

    if((color & 1 ) == 1) 
    printf("Violet\n");

    if((color & 2 ) == 2)
    printf("Indigo\n");
    if((color & 4) == 4)
    printf("Blue\n");
    if((color & 8) == 8)
    printf("Green\n");
    if((color & 16) == 16)
    printf("Yellow\n");
    if((color & 32 ) == 32)
    printf("Orange\n");
    if((color & 64 ) == 64)
    printf("Red\n");


    return 0;

      
}



// display hour, minute and seconds
#include<stdio.h>

void times(unsigned int time );

unsigned short int hours , minutes , second;

int main()
{
    int time;

    puts("Enter any number (less than 2446):");
    scanf("%u", &time);

    times(time);
    printf("For Time = %u\n" , time);
    printf("Hours = %u\n", hours);
    printf("Minutes = %u\n" , minutes);
    printf("Seconds = %u\n", second);

    return 0;
}

void times (unsigned int time )
{
    unsigned short int temp ;
    hours = time >> 11;
    temp = time << 5;
    minutes = temp >> 10;
    temp = time << 11;
    second = (temp >> 11) * 2;
}




//(a) inter collage competition
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _BV(x) 1<<x

int bintodec(int*);
void initinfo(int*);
void addinfo(int *);

int main()
{
	int game, i, count = 0;
	unsigned int andmask, j;
	addinfo(&game);
	for (i = 0; i <= 8; i++)
	{
		andmask = _BV(i);
		j = game & andmask;
		if (j == andmask)
			count++;
	}
	if (count >= 5)
		printf("\nYou are eligible for champions trophy.\n");
	else
		printf("\nYou aren't eligible for champions trophy.\n");
	getch();
	return 0;
}

int bintodec(int *num)
{
	int i, dec = 0;
	for (i = 0; i <= 8; i++)
		dec += num[i] * (int)pow(2, 8 - i);
	return dec;
}

void initinfo(int *information)
{
	int i;
	for (i = 0; i <= 8; i++)
		information[i] = 0;
}

void addinfo(int *game)
{
	int info[9], i;
	printf("1. Cricket\n2. Basketball\n");
	printf("3. Football\n4.Hockey\n");
	printf("5.Lawn Tennis\n6.Table Tennis\n");
	printf("7.Carom\n8.Chess\n9.Kabaddi");
	printf("\nEnter the number of winning of games.");
	printf("Answer given should be in the form of 0 or 1.");
	printf("And should be given\n one by one for each game.\n");
	for (i = 0; i <= 8; i++)
		scanf("%d", &info[i]);
	*game = bintodec(info);
}



//(b) Determine the types of animal
#include<stdio.h>

int main()
{
    struct animal
    {
        char name[30];
        int type;
        
    };

    static struct animal a = {"OCELOT ", 18};
    int ani ;

    printf("\nAnimal is:");
    ani  = a.type;
    if((ani & 1 ) == 1)
    printf("Canine\n");
    if((ani & 2) == 2)
    printf("Feline\n" );
    if((ani & 4) == 4);
    printf("Catacean\n");
    if((ani & 8 ) == 8)
    printf("Marsupial\n");

    printf("\nAnimal is also a\n");
    if((ani & 16) == 16)
    printf("Carnivore\n");
    else
    printf("Herbivore\n");
    return 0;
}

//(c) order to save disk space
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int num ;
    int cnt , rno;
    int data[] = {273, 548 , 786, 1096};

    printf("\nEnter the room number :");
    scanf("%d", &num);

    for(cnt = 0; cnt < 4; cnt++)
    {
        rno = (data[cnt] >> 8);
        if(num == rno)
        break;
    }
    if(cnt == 4)
    {
        printf("No such data pereset\n");
        exit(0);

    }
    for(cnt = 1; cnt  <=8; cnt *= 2)
    {
      if((num & cnt ) == cnt)
      break;
    }
    switch(cnt)
    {
        case 1:
        printf("The student is of the first year\n");
        break;
        case 2:
        printf("The student is second year\n");
        break;
        case 4:
        printf("The student is Third year\n");
        break;
        case 8:
        printf("The student is of Fourth year\n");
        break;
    }
    for(cnt = 16; cnt <=128; cnt *= 2)
    {
        if((num & cnt ) == cnt )
        break;
    }
    switch (cnt)
    {
    case 16:
        printf("The stduent is of Mechanical branch\n");
        break;
    
    case 32:
        printf("The student is of Chemical branch\n");
        break;
    case 64:
        printf("The student is of Electronic branch\n");
        break;
    case 128:
        printf("The student is of IT branch\n");        
    }
    return 0;
}





//(d) out put of the following program
#include<stdio.h>
int main()
{
    int i =32,j =65, k;

    k= 1| 35;
    printf("k= %d\n", k);
    k = ~k;
    printf("K=%d\n", k);
    k = i & j;
    printf("k = %d\n", k);
    k = j ^ 32;
    printf("k = %d\n", k);
    k = j << 2;
    printf("k = %d\n", k);
    k =i >> 5;
    printf("k = %d\n" , k);

    return 0;
    
}



//(c) unsigned integer rightmost
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<math.h>

#define _BV(x) 1<<x

int checkbits(int, int, int);

int main()
{
	int status;
	status = checkbits(14, 3, 3);
	if (status)
		printf("Required bits are ON\n");
	else
		printf("Required bits are OFF\n");
	_getch();
	return 0;
}

int checkbits(int x, int p, int n)
{
	unsigned int andmask = 0;
	int i, j;
	for (i = 0, j = p; i < n; i++, j--)
		andmask |= _BV(j);
	if ((x & andmask) == andmask)
		return 1;
	else
		return 0;
}




//(e) check wehter  16 bit
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<math.h>

#define _bv(x) 1<<x
#define _ls(x,y) x<<y
#define _rs(x,y) x>>y

typedef unsigned short int Store;

void bitexchange(Store*);

int main()
{
	Store num;
	printf("Enter number : ");
	scanf("%hu", &num);
	printf("Before exchange\n");
	printf("num : %u\n", num);
	bitexchange(&num);
	printf("After Exchange its bytes :-\n");
	printf("num : %u\n", num);
	_getch();
	return 0;
}

void bitexchange(Store *num)
{
	unsigned char left, right;

	//	First byte (8-bits) goes to left side.
	left = _ls(*num, 8);

	//Second byts(8 - bits) goes to right side.
	right = _rs(*num, 8);

	*num = 0;
	*num = right | left;
}


//(d) 8 bit number
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _BV(x) 1<<x

int checkbits(unsigned char num);

int main()
{
	int status;
	status = checkbits(200);
	if (status)
		printf("Required bits are ON\n");
	else
		printf("Required bits are OFF\n");
	_getch();
	return 0;
}

int checkbits(unsigned char num)
{
	unsigned char andmask;
	andmask = _BV(7) | _BV(6) | _BV(3);
	if ((num & andmask) == andmask)
		return 1;
	else
		return 0;
}



//(f) variable exchange contents
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _bv(x) 1<<x
#define _ls(x,y) x<<y
#define _rs(x,y) x>>y

typedef unsigned char Bit;

void bitexchange(Bit*);

int main()
{
	Bit num;
	printf("\nEnter the number : ");
	scanf("%hhd", &num);
	printf("\nBefore shifting\n");
	printf("\nnum : %d", num);
	bitexchange(&num);
	printf("\nAfter exchange");
	printf("\nnum : %d\n", num);
	_getch();
	return 0;
}

void bitexchange(Bit *num)
{
	Bit left, right;
	left = _ls(*num, 4);
	right = _rs(*num, 4);
	*num = 0;
	*num = right | left;
}



//(g) odd bits to 1
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _BV(x) 1<<x

typedef unsigned char Bit;

void oddbiton(Bit*);

int main()
{
	Bit num;
	printf("Enter the number : ");
	scanf("%hhd", &num);
	oddbiton(&num);
	_getch();
	return 0;
}

void oddbiton(Bit *num)
{
	Bit andmask = 0;
	int i;
	for (i = 1; i < 8; i += 2)
		andmask |= _BV(i);
	*num |= andmask;
}




//(h) 3rd and 5 th them off
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

#define _BV(x) 1<<x
#define _ls(x,y) x<<y
#define _rs(x,y) x>>y

int main()
{
	unsigned char num, andmask = 0;
	printf("Enter the number : ");
	scanf("%hhd", &num);
	andmask = ~(_BV(3) | _BV(5));
	num &= andmask;
	_getch();
	return 0;
}


//(i) receive a 8 - bit
#include<stdio.h>
#include<conio.h>

#define _BV(x) 1<<x

int main()
{
	unsigned char num, andmask = 0;
	printf("Enter the number : ");
	scanf("%hhd", &num);
	andmask = _BV(3) | _BV(5);
	num |= andmask;
	_getch();
	return 0;
}


//(j) BV_macro
#include<stdio.h>
#include<conio.h>

#define _BV(x) 1<<x

void showbits(unsigned char);

int main()
{
	int i;
	i = 10;
	showbits(i);
	_getch();
	return 0;
}

void showbits(unsigned char num)
{
	int i;
	unsigned char andmask;
	for (i = 7; i >= 0; i--)
	{
		andmask = _BV(i);
		((andmask&num) == 0) ? printf("0") : printf("1");
	}
}