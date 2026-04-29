#include <iostream>
#include <vector>
using namespace std;

int main(){
    int filas = 3, columnas = 4;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = (i + j) * (j + 1);
        }
        
    }

    for (const auto& fila : matriz)
    {
        for (int valor : fila)
        {
            cout << valor << "\t";
        }
        cout << endl;
    }
    return 0;
}