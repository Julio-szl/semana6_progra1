#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};

    cout << "Numeros en el vector: ";
    for (const auto& num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    for (auto& num : numeros) {
        num += 1;
    }

    cout << "Elementos modificados: ";
    for (const auto& num : numeros)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}