# include<stdio.h> 

int main(){
    int n,i=1,fact=1;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("Factorial=%d",fact);
    return 0;
}