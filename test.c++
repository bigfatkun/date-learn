#include <stdio.h>

typedef struct {
    float Realpart;
    float Imagepart;
}Complex;
void Create(Complex& C,float X,float Y){
    C.Realpart=X;
    C.Imagepart=Y;
}


int main()
{
    Complex a;
    Create(a,1,1);
    printf("\n");
    printf("111%f",a.Imagepart); 
    a.Realpart=1;
   
    return 0;
    
}
