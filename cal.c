#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}

int sub(int b,int a)
{

    return b-a;
}
int main()

{
    int a=2,b=5;
    int c=add(a,b);
    int d=sub(b,a);
    printf("%d",c);
    printf("%d",d);

}