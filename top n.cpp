#include <iostream>

using namespace std;

int main() {

    int n;
    int vetor[7] = {1, 3, 5, 10, 25, 50, 100};
    cin >> n;

    for (int i = 0; i < 7; i++){
        if (n <= vetor[i]){
            cout << "Top " << vetor[i] << endl;
            break;
        }
    }

    return 0;
}
