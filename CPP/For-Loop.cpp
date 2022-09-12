#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string const number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int a, b;
    cin >> a >> b;
    
    for (int i = a; i <= b; i++) {
        if (i > 9)
            if(i%2==0)
              cout<<"even";
            else
              cout<<"odd";
        else
            cout << number[i - 1] << endl;
    }
    return 0;
}
