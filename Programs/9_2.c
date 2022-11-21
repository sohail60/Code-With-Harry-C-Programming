# include<stdio.h> 

struct vector{
    int x;
    int y;
};

void sumvector(struct vector v1,struct vector v2,struct vector *v3);
int main(){
    struct vector v1,v2,v3;
    v1.x=15;
    v1.y=50;
    v2.x=25;
    v2.y=70;

    sumvector(v1,v2,&v3);
    printf("x dimension is: %d \ny dimension is: %d",v3.x,v3.y);
    return 0;
}

void sumvector(struct vector v1,struct vector v2,struct vector *v3){
    (*v3).x=v1.x+v2.x;
    (*v3).y=v1.y+v2.y;
}