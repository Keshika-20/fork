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
    int x=add(a,b);
    int y=sub(b,a);
    printf("%d",x);
    printf("%d",y);

}
