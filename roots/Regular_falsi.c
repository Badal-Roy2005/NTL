#include<stdio.h>
#include<math.h>

#define f(x) (pow(x,3)-2*x-5)

int main(){
    float a, b , c ;
    int i =  1;
    do{
        printf("Enter two number : ") ;
        scanf("%f%f",&a,&b);

    }while(f(a)*f(b) > 0);

    do{
        float p = a * f(b) - b * f(a);
        float q = f(b) - f(a);
        
        c = p/q;
        printf("-----------------%d---------------\n",i);
        printf("a:%.3f b:%.3f c:%.3f f(a):%.3f f(b):%.3f f(c):%.3f\n",a,b,c,f(a),f(b),f(c));

        if(f(a) * f(c) > 0)
        {
            a = c;
        }
        else{
            b = c;
        }
        i++;
    }while(fabs(f(c)) > 0.001);
    
    printf("Approximate root : %.3f",c);
    


}


