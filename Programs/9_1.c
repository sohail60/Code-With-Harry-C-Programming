# include<stdio.h> 

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1;
    v1.x=15;
    v1.y=50;

    printf("x dimension is: %d \ny dimension is: %d",v1.x,v1.y);
    return 0;
}