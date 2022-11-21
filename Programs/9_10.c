# include<stdio.h> 

typedef struct time{
    int hour;
    int minute;
    int second;
}time;

void display(time t);
int compare(time t1,time t2);

int main(){
    time t1={18,2,22};
    time t2={5,6,22};
    display(t1);
    display(t2);

    compare(t1,t2);
    return 0;
}

void display(time t){
    printf("time is: %d/%d/%d\n",t.second,t.minute,t.hour);
}

int compare(time t1,time t2){

    if(t1.hour>t2.hour){
        printf("t1 is Greater");
        return 0;
    }
    if(t1.hour<t2.hour){
        printf("t2 is Greater");
        return 0;
    }
    if(t1.minute>t2.minute){
        printf("t1 is Greater");
        return 0;
    }
    if(t1.minute<t2.minute){
        printf("t2 is Greater");
        return 0;
    }
    if(t1.second>t2.second){
        printf("t1 is Greater");
        return 0;
    }
    if(t1.second<t2.second){
        printf("t2 is Greater");
        return 0;
    }
    if(t1.second>t2.second){
        printf("t1 is Greater");
        return 0;
    }
    if(t1.second=t2.second){
        printf("Both times are equal");
        return 0;
    }
}