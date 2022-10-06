/*Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Function Description
Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.
timeConversion has the following parameter(s):
string s: a time in  hour format
Returns
string: the time in  hour format

Input Format
A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints
All input times are valid

Sample Input 0
07:05:45PM

Sample Output 0
19:05:45*/

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
//https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
int main() {
    string s,hr,min,sec;
    cin>>s;
    hr[0]=s[0];
    hr[1]=s[1];
    min[0]=s[3];
    min[1]=s[4];
    sec[0]=s[6];
    sec[1]=s[7];
    if(s[8]==80){
        int num=stoi(hr);
        hr=to_string(num+12);
    }
    else{
        int num=stoi(hr);
        hr=to_string(num+12);
    }
    if(hr[0]==50 && hr[1]==52){
            hr[0]=48;
            hr[1]=48;
        }
    cout<<hr[0]<<hr[1]<<":"<<min[0]<<min[1]<<":"<<sec[0]<<sec[1];
    return 0;
}
