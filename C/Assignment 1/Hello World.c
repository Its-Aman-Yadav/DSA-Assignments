/*Task is to print hello world*/

#include<stdio.h>

int main(){
    
    printf("Hello, World! \n");
    
    char s[100];
    fgets(s , 100 , stdin);
    printf("%s" , s);
    return 0;
}
