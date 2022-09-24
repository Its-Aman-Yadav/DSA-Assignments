/*Task

Given a positive integer denoting , do the following:
If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If , print Greater than 9.

Input Format
The first line contains a single integer, .


Output Format
If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Sample Input
5

Sample Output
five

Sample Input #01
8

Sample Output #01
eight

Sample Input #02
44

Sample Output #02
Greater than 9*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==1)
        printf("one");
    else if(num==2)
        printf("two");
    else if(num==3)
        printf("three");
    else if(num==4)
        printf("four");
    else if(num==5)
        printf("five");
    else if(num==6)
        printf("six");
    else if(num==7)
        printf("seven");
    else if(num==8)
        printf("eight");
    else if(num==9)
        printf("nine");
    else {
        printf("Greater than 9");
    }
    return  0;
}
