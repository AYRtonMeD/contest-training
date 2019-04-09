#include <iostream>
#include <cstdio>

using namespace std;

int maxValue(int a, int b){
    return ((a+b+abs(a-b)) / 2);
}

int main(){
    int a,b,c;

    cin >> a >> b >> c;

    cout << maxValue(maxValue(a, b), c) << " eh o maior\n";
    return 0;
}




