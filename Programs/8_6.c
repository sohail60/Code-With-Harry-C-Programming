# include<stdio.h> 
void encrypt(char *ptr, int end);

int main(){
    char str[]="sohail";
    printf("Normal Array:\n");
    for (int i = 0; i <=5 ; i++){
        printf("%c",str[i]);
    }

    encrypt(&str[0],5);
    
    printf("\nEncrypted Array:\n");
    for (int i = 0; i <=5 ; i++){
        printf("%c",str[i]);
    }
    return 0;
}


void encrypt(char *ptr, int end){
    int i=0;
    while(i<=end){
        (*ptr)=(*ptr)+1;
        i++;
        ptr++;
    }
}