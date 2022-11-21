# include<stdio.h> 

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1,v2,v3;
    v1.x=15;
    v1.y=50;

    struct vector *ptr;
    ptr=&v1;

    printf("Value of v1.x by using pointer is: %d\n",(*ptr).x);
    printf("Value of v1.x by using arrow pointer is: %d\n",ptr->x);
    return 0;
}