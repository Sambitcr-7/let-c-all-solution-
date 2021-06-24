// ********************************Data Types Revisited**********************
// (a)
#include<stdio.h>
int i =0;
void val();
int main(){
    printf("main's i = %d\n", i);
    i++;
    val();
    printf("main's i = %d\n", i);
    return 0;
}

void val()
{
    i = 100;
    printf("val's i = %d\n", i);
    i++;
}


//
#include<stdio.h>
int main(){
    static int count = 5;
    printf("count = %d\n", count--);
    if(count!=0)
    main();
    return 0;
}



//
#include<stdio.h>
int main()
{
    func();
    func();
    return 0;
}
void func()
{
    auto int i = 0;
    register int j = 0;
    static int k = 0;
    i++; j++; k++;
    printf("%d%d%d\n", i, j, k);
}


//
#include<stdio.h>
int x = 10;
int main(){
    int x = 20;
    {
        int x = 30;
        printf("%d\n", x);

    }
    printf("%d\n", x);
    return 0;
}