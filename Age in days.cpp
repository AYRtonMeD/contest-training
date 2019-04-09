#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int days;
    cin >> days;
    cout << (int)days / 365 << " ano(s)\n";
    days = days % 365;
    cout << (int)(days)/30 << " mes(es)\n";
    days = days % 30;
    cout << (int)((days)%30) << " dia(s)\n";
    return 0;
}


