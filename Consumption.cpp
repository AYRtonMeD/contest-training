#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int distance;
    float consumption;

    cin >> distance >> consumption;

    printf("%.3f km/l\n", distance/consumption);
    return 0;
}
