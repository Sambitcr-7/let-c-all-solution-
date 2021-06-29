// *********************************Handling Multiple strings*****************************
//search s string in an array
#include<stdio.h>
#include<string.h>
int main(){
    char *str1[20], str2[20];
    char * news, *t, *p;
    int i;
    char *str[]={
        "We will teach you how to .......",
        "Move a mountain ", "Level a buliding ",
        "Erase the past ", "Make a million",
        "....All through C!"
    };
    
    printf("\nEnter string to be replcaed :");
    scanf("%s", str1);
    
    printf("\nEnter the new string: ");
    scanf("%s", str2);

    //Check the lenght of the new string
    if(strlen(str2) > str2);
    {
        printf("Enter a string with %d character only\n", strlen(str1));
    }

    for(i = 0; i < 6; i++)// loop for number of strings 
    {
        // Find the entered string in the given array
        p = strstr(str[i],str1);

        if(p)
        {
            //copy the reaming string
            news = p + strlen(str1);
            strcpy (t, news);
            //Replace the old string 
            strcpy(p,str2);
            //Finally appened the reaming part
            strcat(p,t);
            break;
        }
    }
    printf("\nThe new string is :\n");
    for(i =0; i < 6; i++)// Loop to print the strings
    printf("%s\n", str[i]);

    return 0;
}

//To sort string alphabeticallty 
#include<stdio.h>
#include<string.h>

int main(){
    char *str[]{
        "Rajesh", "Ashish",
        "Milind", "Pushkar",
        "Akash";

    }
    char *t;
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j ++)
        {
            if((strcmp (str[i], str[j])) > 0)
            {
                t = str[i];
                str[i] = str[j];
                str[j]  = t;
            }
        }
    }
    for(i = 0; i < 5 ; i ++)
    printf("\n%s", str[i]);

    return 0; 
}

//Reverse strings stroed in an array of pointer
#include<stdio.h>
#include<string.h>

int main()
{
    static char *s[] ={
        "To ere is human...",
        "But to really mess things up...",
        "One needs to know c!!"
    };

    for(i = 0; i <= 2; i++)// Three strings to be travered 
    {
        xstrrev(s[i]);
        printf("%s\n", s[i]);
    }
    return 0;
}

void xstrrev(char *ss)
{
    int I,i;
    char *tt , temp;

    I = strlen(ss);
    tt = ss + I - 1;

    for(i = 1; i <= I/2; i++)
    {
        temp = *ss;
        *ss = * tt ;
        * tt = temp;
        ss++;
        tt--; 
    }
}


//Delete all vowels from a sentence
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#define Vowel line[i] == 'A' || line[i] == 'a' || line[i] == 'E' || line[i] == 'e' \
 || line[i] == 'I' || line[i] == 'i' || line[i] == 'O' || line[i] == 'o' || \
 line[i] == 'U' || line[i] == 'u'
 
void del_vow(char *line)
{
	int i, j;
	for (i = 0; line[i] != '\0'; i++)
		if (Vowel)
		{
		    for (j = i; line[j] != '\0'; j++)
				line[j] = line[j + 1];
			i--;
		}

}
int main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	del_vow(line);
	printf("\nLine without vowels\n");
	puts(line);
	getch();
	return 0;
}



// delete from it all occurrences of the world the
#include<stdio.h>
#include<conio.h>
#include<string.h>

// #define Space 32
#define  the  (line[i] == 't' || line[i] == 'T') && (line[i + 1] == 'h' || \
line[i + 1] == 'H') && (line[i + 2] == 'E' || line[i + 2] == 'e') && \
(line[i + 3] == Space || line[i + 3] == '\0'

void del_the(char *line)
{
	int i, j;
	for (i = 0; line[i] != '\0'; i++)
		if (del_the)/*if The is encounter*/
			for (j = i; line[j] != '\0'; j++)
				line[j] = line[j + 4];/*The word is skipped and other words are saved in the string*/
}
int main()
{
	char line[80];
	puts("Enter the line");
	gets(line);
	del_the(line);
	puts("\nAfter removing all the words 'The'.\n\n");
	puts(line);
	getch();                
	return 0;
}


// abbreviates the first and middle  name first letter
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include<malloc.h>

// #define Space 32/*ASCII v*/

char* last_name(char *line)/*It will return char pointer*/
{
	char temp[20], *p;
	int i, j, l = 0;
	for (i = j = 0; line[i] != '\0'; i++)
	{
		if (line[i] == isspace)/*If Sace if encounter so the first letter of the word will saved in the temp*/
		{
			temp[l] = line[j];
			l++;
			temp[l] = isspace;/*after first leter we are giving a space*/
			l++;
			j = i + 1;
		}
	}
	if (line[i] == '\0')
	{
		for (; line[j] != '\0'; j++, l++)
			temp[l] = line[j];
		temp[l] = line[j];
	}
	/*As if a pointer string cannot be assigned to a simple char variable so, a pointer
     of char is made and then assign peration if performed*/
	p = (char*)malloc(sizeof(strlen(temp) + 1));/*p getting size*/
	strcpy(p, temp);/*ading content on p*/
	return p;/*assigning p to the name[i] in man function as this function returns char pointer*/
}

int main()
{
	char *name[10];
	int i = 0, j;
	char ans = 'y', *p, naam[30];
	while (ans == 'y')
	{
		puts("\nEnter the full name : ");
		gets(naam);
		p = (char*)malloc(sizeof(strlen(naam) + 1));
		strcpy(p, naam);
		name[i] = p;
		name[i] = last_name(name[i]);
		printf("\nWant to enter another name (y/n) : ");
		scanf("%c", &ans);
		i++;
		while (getchar() != '\n');/*So that we can get the next name, otherwise \n will be saved in the buffer. (fflush(stdin) don't woirk)*/
		if (i > 9)/*Names cannot be more than 10*/
		break;
	}
	if (i >= 10)/*If trying to enter names more than 10*/
	puts("\nNo more names can be entered");
	system("cls");
	puts("\n\t\tName in the given format.");
	for (j = 0; j < i; j++)
	puts(name[j]);
	getch();
	return 0;
}


//please read this application and give me gratuity
#include<stdio.h>
#include<conio.h>

#define VowelisOccur str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' \
	|| str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' \
	|| str[i] == 'U'

int find_vows(char * str)
{
	int i, count = 0;
	printf("\nVowels in successions : ");
	for (i = 0; str[i] != '\0'; i++)
	{
		if (VowelisOccur)/*If first vowel is occur*/
		{
			i++;/*To check next vowel*/
			if (VowelisOccur)/*If second vowel after first if occur*/
			{
				printf("%c%c ", str[i - 1], str[i]);/*Printing two simultaneous vowels*/
				count++;/*Counting Two simultaneous vowels*/
			}
		}
	}
	return count;
}
int main()
{
	char str[100], tot_vow;
	printf("Enter the string : ");
	gets(str);
	tot_vow = find_vows(str);
	printf("\n\nTotal number of vowels in successions are : %d\n", tot_vow);
	getch();
	return 0;
}

//if the number input is 12342, then the output should be Twelve Thousand Three Hundred Forty-Two.
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<malloc.h>

#define EndofNumber 13
#define LastElement i+2


void rev_arr(int *arr)
{
	int temp[12], i, max, j;
	for (i = 0; arr[i] != EndofNumber; i++);/*Counting the total number of elemeents excpet the last EndofNumber*/
	max = i - 1;/*Max is the total number of elements, as the counting starts from 0 so we subtract 1 from it*/
	i = 0;
	for (j = max; j >= 0; j--, i++)
		temp[j] = arr[i];/*temp starting from the last*/
	for (i = 0; i <= max; i++)
		arr[i] = temp[i];/*reversing the */
}
int main()
{
	int num, a = 0, arr[12], i;
	char word[90];
	printf("\nEnter the number (max. 9 digits) : ");
	scanf("%d", &num);

	for (i = 0; num != 0; i++)
	{
		arr[i] = num % 10;
		num /= 10;
	}/*Saperating the digits and saving the number in array*/

	arr[i] = EndofNumber;/*Terminating array*/

	rev_arr(arr);/*The numebrs in the array are saving in the  reverse mode
				 as the saperation of the digits are takes place from last,
				 so we will reverse the numbers of the array but EndofNumber will have the same
				 position*/

	printf("\n\n\nNumber in words : ");

	for (i = 0; arr[i] != EndofNumber; i++)/*Traversing the whole array.*/
	{
		if (arr[i + 5] == EndofNumber || arr[i + 7] == EndofNumber || arr[i + 9] == EndofNumber || arr[i + 2] == EndofNumber)
		{
			if (arr[i] == 1)
			{
				if (arr[i + 1] == 1)
					printf("Eleven ");
				if (arr[i + 1] == 2)
					printf("Twelve ");
				if (arr[i + 1] == 3)
					printf("Thirteen ");
				if (arr[i + 1] == 4)
					printf("Fourteen ");
				if (arr[i + 1] == 5)
					printf("Fifteen ");
				if (arr[i + 1] == 6)
					printf("Sixteen ");
				if (arr[i + 1] == 7)
					printf("Seventeen ");
				if (arr[i + 1] == 8)
					printf("Eighteen ");
				if (arr[i + 1] == 9)
					printf("Ninteen ");
				if (arr[i + 1] == 0)
					printf("Ten ");

				i++;/*If we continue so these below words will not print as the loop is continueing from here.*/

				if (arr[i + 10] == EndofNumber)
					printf("Arab ");
				if (arr[i + 8] == EndofNumber)
					printf("Crore ");
				if (arr[i + 6] == EndofNumber)
					printf("Lac ");
				if (arr[i + 4] == EndofNumber)
					printf("Thousand ");
				if (arr[i + 3] == EndofNumber)
					printf("Hundred ");

				continue;
			}
			if (arr[i] == 2)
				printf("Twenty ");
			if (arr[i] == 3)
				printf("Thirty ");
			if (arr[i] == 4)
				printf("Fourty ");
			if (arr[i] == 5)
				printf("Fifty ");
			if (arr[i] == 6)
				printf("Sixty ");
			if (arr[i] == 7)
				printf("Seventy ");
			if (arr[i] == 8)
				printf("Eighty ");
			if (arr[i] == 9)
				printf("Ninety ");
		}
		else
		{
			if (arr[i] == 1)
				printf("One ");
			if (arr[i] == 2)
				printf("Two ");
			if (arr[i] == 3)
				printf("Three ");
			if (arr[i] == 4)
				printf("Four ");
			if (arr[i] == 5)
				printf("Five ");
			if (arr[i] == 6)
				printf("Six ");
			if (arr[i] == 7)
				printf("Seven ");
			if (arr[i] == 8)
				printf("Eight ");
			if (arr[i] == 9)
				printf("Nine ");
		}

		if (arr[i + 10] == EndofNumber)
			printf("Arab ");
		if (arr[i + 8] == EndofNumber)
			printf("Crore ");
		if (arr[i + 6] == EndofNumber)
			printf("Lac ");
		if (arr[i + 4] == EndofNumber)
			printf("Thousand ");
		if (arr[i + 3] == EndofNumber)
			printf("Hundred ");
	}
	printf("\n");
	getch();
	return 0;
}