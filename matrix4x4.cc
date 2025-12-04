#include <iostream>
#include <iomanip>
using namespace std;

const int UKURAN = 4;

void tampilkanMatriks(int m[UKURAN][UKURAN]) {
    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            cout << setw(2) << m[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    cout << "Nama : Gerry Atha Himawan\n";
    cout << "NIM  : 25104410012\n";
    cout << "Prodi: Teknik Informatika 1A\n";
    cout << "Tugas Praktikum 4\n\n";

    cout << "---- Program Perkalian Matriks 4x4 ----\n";
    
    int A[UKURAN][UKURAN] = {
        {1, 2, 0, 0},
        {0, 0, 1, 1},
        {1, 2, 0, 1},
        {0, 2, 0, 1}
    };

    int B[UKURAN][UKURAN] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int hasil[UKURAN][UKURAN] = {0};

    cout << "\nMatriks A:\n";
    tampilkanMatriks(A);

    cout << "\nMatriks B:\n";
    tampilkanMatriks(B);

    cout << "\n=======================================\n";
    cout << "Matriks Hasil Perkalian (A x B):\n";
    cout << "Matriks A x B:\n";

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            for (int k = 0; k < UKURAN; k++) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    tampilkanMatriks(hasil);

    return 0;
}