/*Task
You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format
First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input.

Output Format
Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

Sample Input 0
C
Language
Welcome To C!!

Sample Output 0
C
Language
Welcome To C!!*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int main() 
{ 
    char ch;
    scanf("%c" , &ch);
    printf("%c \n" , ch);
    
    char s[100];
    scanf("%s" , s);
    printf("%s \n" , s); 
    
    scanf("\n");
    
    char sen[100];
    fgets(sen , 100 , stdin);
    printf("%s" , sen);
    
    return 0;
}
