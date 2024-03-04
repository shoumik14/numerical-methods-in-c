#include<stdio.h>
#include<math.h>

//finds the factorial of a number
long fact(long a)
{
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}

int main()
{
    const float ACCURACY=0.0001;
    float x,i,sum=1;int n=1,terms=1;

    printf("enter the value of x: ");
    scanf("%f",&x);

    do{
        i=pow(x,n)/fact(n);
        sum+=i;
        n++;terms++;
    }while(i>=ACCURACY);

    printf("adding %d terms, the sum is %f",terms,sum);

    return 0;
}
