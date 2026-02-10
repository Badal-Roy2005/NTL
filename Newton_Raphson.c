#include <stdio.h>
#include <math.h>
#define f(x) (pow(x, 4) - x - 10)
#define g(x) (4 * pow(x, 3) - 1)
#define p(x)(f(x)*12*pow(x,2)/(g(x)*g(x)))
#define epsilon 0.0001

int main() {
    float x0, x1;
    int i = 1;
    do{
    printf("Enter initial guess: ");
    scanf("%f", &x0);
        
    }while(fabs(p(x0)) > 1);
    
    do {
        x1 = x0 - (f(x0) / g(x0));
        printf("--------------%d-------------\n", i);
        i++;
        printf("x0: %.3f x1: %.3f\n", x0, x1);
        x0 = x1;
    } while (fabs(f(x1)) > epsilon);
    
    printf("Approximate root: %.5f", x1);
    return 0;
}