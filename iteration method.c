#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define g(x) pow((1-x*x),1.0/3.0)
#define dg(x) ((-2.0/3.0)*x*pow((1-x*x),(-2.0/3.0)))

int main()
{
    float x0,x1,tol;
    printf("\nenter the initial guess: ");
    scanf("%f",&x0);
    printf("\nenter the tolerence: ");
    scanf("%f",&tol);

    if(fabs(dg(x0))<1){
        for(int i=1;i<=100;i++){
            x0=g(x0);
            printf("\nx%d=%f",i,x0);
            x1=g(x0);

            if(fabs(x1-x0)<tol){
                printf("\nafter %d iterations, the result is x = %f",i,x0);
                break;

            }
    }
    }
    return 0;
}
