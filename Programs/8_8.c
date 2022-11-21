# include<stdio.h> 

int main(){
    char str[]="sohail";
    int i=0,c=0;
    char target='s';
    while (str[i]!='\0'){
        if(str[i]==target){
            c++;
        }
        i++;
    }

    if(c==0){
        printf("Target Not Found");
    }
    else{
        printf("Occurences: %d",c);
    }
    return 0;
}