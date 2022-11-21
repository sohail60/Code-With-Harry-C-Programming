#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10], str2[10];
    int i=0;
    char c;

    printf("Enter a String:\n");
    scanf("%s", str1);

    printf("Enter a String word by word:\n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';

    printf("String: %s\n",str1);
    printf("String char by char: %s\n",str2);
    printf("Strcmp Value: %d",strcmp(str1,str2));
    
    return 0;
}