#include<stdio.h>
#include<math.h>


float f(float x){
    return x*x+6*x+3;
}

int main()
{
    float accuracy,x1,x2,x;
    int i=0;
    printf("Enter a,b: ");
    scanf("%f%f",&x1,&x2);
    printf("enter accuracy: ");
    scanf("%f",&accuracy);

    do{
        x=(x1+x2)/2;

        printf("iteration %d, x=%f\n",++i,x);

        if(f(x)==0) break;
        else if(f(x1)*f(x)<0) x2=x;
        else if(f(x)*f(x2)<0) x1=x;
    }
    while(fabs(x1-x2)>accuracy);

    printf("answer is %f",x);

    return 0;


}
