#include <iostream>
using namespace std;

int main() {
	int tam = 3, n = 1;
    int mat[tam][tam];

    for(int l = 0; l < tam; l++){
        for(int c = 0;  c < tam; c++){
			mat[l][c] = n++;
        }
    }

    // imprime a matriz na tela
    cout << "\n";
for(int l = 0; l < tam; l++){
        for(int c = 0;  c < tam; c++){
            cout << mat[l][c];
            cout << "\t";
        }
       cout << "\n";
    }


//mostrando a diagonal principal
    cout << "\n\nDiagonal principal: ";
    for(int l = 0; l < tam; l++){
       cout << mat[l][l];
    }


//mostrando a diagonal secundaria
    cout << "\n\nDiagonal secundaria: ";
    for(int l = 0; l < tam; l++){
        cout << mat[l][tam - 1 - l];
    }
    cout << "\n\n";
}
