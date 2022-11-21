# include<stdio.h> 

typedef struct date{
    int day;
    int month;
    int year;
}date;

void display(date d);
int compare(date d1,date d2);

int main(){
    date d1={18,2,22};
    date d2={5,6,22};
    display(d1);
    display(d2);

    compare(d1,d2);
    return 0;
}

void display(date d){
    printf("Date is: %d/%d/%d\n",d.day,d.month,d.year);
}

int compare(date d1,date d2){

    if(d1.year>d2.year){
        printf("d1 is Greater");
        return 0;
    }
    if(d1.year<d2.year){
        printf("d2 is Greater");
        return 0;
    }
    if(d1.month>d2.month){
        printf("d1 is Greater");
        return 0;
    }
    if(d1.month<d2.month){
        printf("d2 is Greater");
        return 0;
    }
    if(d1.day>d2.day){
        printf("d1 is Greater");
        return 0;
    }
    if(d1.day<d2.day){
        printf("d2 is Greater");
        return 0;
    }
    if(d1.day>d2.day){
        printf("d1 is Greater");
        return 0;
    }
    if(d1.day=d2.day){
        printf("Both dates are equal");
        return 0;
    }
}