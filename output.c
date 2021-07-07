// **********************************Console input / output ********************************
// Discovry of india 
#include<stdio.h>
int min(){
    printf ("%-30s%-20s%-10.2f\n", "Discovery of india ", " Jawaharalal Nehru ", 425.50);

    printf("%-30s%-20s%-10.2f\n","My Experiment with Truth ", "Mahatma Gandhi ", 375.50);

    printf("%-30s%-20s%-10.2f\n","One More Over  ", "Erapalli Prasanna ", 85.00);

    return 0;

}


// Program to convert a string to a float value and return the float to the 
#include<stdio.h>
float getfloat();

int main()
{
    float floatreult = 0.0f;

    floatreult = getfloat();
    printf("After converting string to float , result is:");
    printf("%0.2f\n", floatreult);
    return 0;
}
float getfloat()
{
    char str[] = "1234.56";
    float temp = 0.0f, result = 0.0f;
    int i, j , decimal;

    for(i = 0; str[i]!= '.' ; j++)
    result = (result * 10 ) + str[i] - '0';

    decimal = 1;

    for(j = i + 1 ; str[j] != '\0'; j++) 
    {
        temp = str[j] - '0';
        decimal = decimal * 10;
        temp = temp / decimal ;
        result = result + temp;
    }
    return 0;
}


// getint 
#include<stdio.h>
int getint ();

int main()
{
    int a ;

    printf("\nEnter a numeric string...");
    a = getint ();
    printf("You entered %d\n", a);
    return 0;
};

int getint()
{
    char str[6];
    int i, j, k , val;

    i =0;
    while (i <= 5)
    {
        str[i] = getchar ; 
        if(str[i] == '\r')
        {
            str[i] = '\0';
            break;
        }
        if(str[i] == '\b')
        {
            i--;
            printf("\b");
        }
        else
        i++;
        
    }
    val = 0;
    k = 1;
    for(j = i -1 ; j >=0; j--)
    {
        val = val + (str[j] - 48) * k;
        k = k * 10;
    }

    return (val);
    
}


// Function xgets() and xputs()
#include<stdio.h>

void xputs (char *);
void xgets (char *);

int main()
{
    char sent[100];

    xputs ("Enter a sentence....");
    xgets(sent);
    printf("\n\n");
    xputs(sent);

    return 0;
}

void xputs (char * s)
{
    while (*s)
    {
        putch(*s);
        s++;
    }
    
}


void xgets (char * s)
{
    int i ;
    char ch ;

    for(i = 0; i <= 98; i++)
    {
        ch = getchar();
        if(ch == '\r')

        {
            *s = '\0';
            break;
        }
        if(ch == '\b');
        {
        
        printf("\b");
        i--;
        s--;
        }
          else
        {
        *s = ch;
        s++;

       }
    }

}