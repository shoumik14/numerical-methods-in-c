#include<stdio.h>
#include<math.h>

float f(float x){
    return x*x*x+6*x-4;
}

float df(float x){
    return 3*x*x+6;
}

int main()
{
    float x0,x1,tol;
    printf("\nenter the initial guess: ");
    scanf("%f",&x0);
    printf("\nenter the tolerence: ");
    scanf("%f",&tol);

    for(int i=1;i<=100;i++){
            x0=x0-(f(x0)/df(x0));
            printf("\nx%d=%f",i,x0);
            x1=x0-(f(x0)/df(x0));

            if(fabs(x1-x0)<tol){
                printf("\nafter %d iterations, the result is x = %f",i,x0);
                break;

            }
    }

    return 0;
}
