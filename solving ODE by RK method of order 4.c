#include<stdio.h>
#include<math.h>
#define f(x,y) sqrt(x+y)

int main()
{
    float x[50],y[50],X;
    x[0]=0.4;y[0]=0.41;
    int n;
    printf("Enter number of iterations: ");
    scanf("%d",&n);
    printf("enter x for which the value of y has to be evaluated: ");
    scanf("%f",&X);
    float h=(X-x[0])/n;

    printf("\nhere h= %f",h);

    for(int i=0;i<n;i++){
        float k1,k2,k3,k4;
        k1=h*f(x[i],y[i]);
        k2=h*f(x[i]+(h/2),y[i]+(k1/2));
        k3=h*f(x[i]+(h/2),y[i]+(k2/2));
        k4=h*f(x[i]+h,y[i]+k3);
        x[i+1]=x[i]+h;
        y[i+1]=y[i]+(k1+2*(k2+k3)+k4)/6;
    }

    printf("\nIteration(i)\tx(i)\ty(i)\n");
    printf("--------------------------------\n");
    for(int i=1;i<=n;i++){
        printf("\n%d\t%f\t%f\n",i,x[i],y[i]);
    }

    return 0;
}
