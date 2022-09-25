/*Input Format
The first line contains an integer, .
The next line contains  space-separated integers.

Output Format
Print the sum of the integers in the array.

Sample Input 0
6
16 13 7 2 1 12 

Sample Output 0
51

Sample Input 1
7
1 13 15 20 12 13 2 

Sample Output 1
76*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int main() {
    int n, m, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &m);
        sum += m;
    }
    printf("%d", sum);    
    return 0;
}
