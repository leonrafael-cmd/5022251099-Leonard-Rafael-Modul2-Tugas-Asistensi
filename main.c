// Benarkan Code ini

#include <stdio.h>

#define N 3  // ini untuk deklarasi size matrix berapa (biar tetap seimbang saat perkalian matrix)

void read_matrix(double M[N][N]) {
    printf("Masukkan elemen matriks (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
}

void multiply(double A[N][N], double B[N][N], double C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            double sum = 0.0; 
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(double M[N][N]) {
    printf("Hasil matriks:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2lf ", M[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    double A[N][N], B[N][N], C[N][N];

    printf("--- Input Matriks A ---\n");
    read_matrix(A);

    printf("\n--- Input Matriks B ---\n");
    read_matrix(B); 

    multiply(A, B, C);

    printf("\n--- Hasil Kali Matriks ---\n");
    print_matrix(C);

    return 0;
}
