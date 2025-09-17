#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()

{
    int a=2,b=5;
    int c=add(a,b);
    printf("%d",c);

}