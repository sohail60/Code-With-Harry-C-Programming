# include<stdio.h> 

int main(){
    char str[]="sohail";
    int i=0,flag=0;
    char target='z';
    while (str[i]!='\0'){
        if(str[i]==target){
            flag=1;
        }
        i++;
    }

    if(flag==1){
        printf("Target Found");
    }
    else{
        printf("Target Not Found");
    }
    return 0;
}