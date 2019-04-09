#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int id, hours;
    float aph;

    cin >> id >> hours >> aph;
    cout << "NUMBER = " << id;
    printf("\nSALARY = U$ %.2f\n", aph*hours);

    return 0;
}

