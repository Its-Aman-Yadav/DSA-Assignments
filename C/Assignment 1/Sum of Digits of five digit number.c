/*Task
Given a five digit integer, print the sum of its digits.

Input Format
The input contains a single five digit number, .

Output Format
Print the sum of the digits of the five digit number.

Sample Input 0
10564

Sample Output 0
16*/

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int main() {
	
    int n,sum=0;
    scanf("%d", &n);
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
