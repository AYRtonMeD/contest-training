#include <iostream>
#include <algorithm>

using namespace std;

bool coisa(int n1, int n2){
    if (n1%2 == 0){
        if (n1 <= n2 || n2%2 == 1) return true;
    }
    else if (n1 >= n2 && n1%2 == 1 && n2%2 == 1) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int nums[n];

    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums, nums+n, coisa);
    for (int i = 0; i < n; i++){
        cout << nums[i] << endl;
    }
    return 0;
}
