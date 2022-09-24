/*For each integer  in the interval  (given as input) :
If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".

Input Format
The first line contains an integer, .
The seond line contains an integer, .

Output Format
Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Sample Input
8
11

Sample Output
eight
nine
even
odd*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char num[][20] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine","even","odd"};
    
    for (int i = a; i <=b; i++)
    {
        if(i<=9){
        printf("%s\n", num[i-1]);
        }
        
        else{
             if (i % 2 == 0)
        {
            printf("%s\n",num[9]);
        }
        
        else{
            printf("%s\n",num[10]);
        }
    }
}
    
    return 0;
}
