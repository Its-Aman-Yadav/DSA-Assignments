/*Task
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note
There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.

Input Format
Input will contain four integers -  , one on each line.

Output Format
Print the greatest of the four integers.
Note: I/O will be automatically handled.

Sample Input
3
4
6
5

Sample Output
6*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max = a>b?(a>c?a:c):(b>c?b:c);
    if(d>max)return d;
    else return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
