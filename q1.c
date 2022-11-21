# include<stdio.h> 
# include<string.h>

struct student{
    char name[20];
    int roll_no;
    int dob;
    };

int main(){
    struct student s1;
    strcpy(s1.name,"XYZ");
    s1.roll_no=50;
    s1.dob=5/6/2001;
    printf("%d",s1.dob);
    return 0;
}