# include<stdio.h> 

typedef struct complex{
    int real;
    int img;
}complex;

int main(){
    complex c1;
    c1.real=15;
    c1.img=50;

    printf("Real part is: %d \nImaginary part is: %d",c1.real,c1.img);
    return 0;
}