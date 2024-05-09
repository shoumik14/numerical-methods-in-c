#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x+3;
}

int main()
{
    float a,b,sum=0,h;
    int n;
    printf("Enter a,b, and number of intervals: ");
    scanf("%f%f%d",&a,&b,&n);
    h=(b-a)/n;
    for(int i=1;i<=n-1;i++)
        sum+=2*f(a+i*h);

    sum+=f(a)+f(b);
    float result=sum*(h/2);
    printf("\nthe answer is=%f",result);
    return 0;
}
