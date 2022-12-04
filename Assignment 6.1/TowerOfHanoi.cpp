#include <iostream>
using namespace std;

void towerOfHanoi(int n, char A, char B, char C)
{
    if(n> 0)
    {
        towerOfHanoi(n-1, A, C, B);
        cout << "Moving ring " << n << " from " << A << " to " << C << endl;
        towerOfHanoi(n-1, B, A, C);
    }
}


int main()
{
    int n; cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

