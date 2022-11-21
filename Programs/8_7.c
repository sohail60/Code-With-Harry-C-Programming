# include<stdio.h> 
void decrypt(char *ptr, int end);

int main(){
    char str[]="tpibjm";
    printf("Encrypted Array:\n");
    for (int i = 0; i <=5 ; i++){
        printf("%c",str[i]);
    }

    decrypt(&str[0],5);
    
    printf("\nDecrypted Array:\n");
    for (int i = 0; i <=5 ; i++){
        printf("%c",str[i]);
    }
    return 0;
}

void decrypt(char *ptr, int end){
    int i=0;
    while(i<=end){
        (*ptr)=(*ptr)-1;
        i++;
        ptr++;
    }
}