#include <stdio.h>
void slice(char *str, int m, int n);

int main(){
    char str[] = "Sohail";

    slice(str, 1, 5);
    printf("Sliced String: %s", str);
    return 0;
}

void slice(char *str, int m, int n){
    int i = 0;
    while ((i + m) < n){    // 5 excluded in <  and  5 included in <=
        str[i] = str[i + m];
        i++;
    }
    str[i] = '\0';
}