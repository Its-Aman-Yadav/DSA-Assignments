#include <iostream>
#include<iomanip>            //this header file includes setprecision funtion
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;         //precision set upto three 3 decimals
    cout<<fixed<<setprecision(3)<<e<<endl;
    return 0;
}
