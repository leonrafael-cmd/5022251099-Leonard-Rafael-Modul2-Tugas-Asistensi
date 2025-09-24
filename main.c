#include <stdio.h> // Ditambahkan supaya program bisa berjalan karena program mengandung printf dan scanf

#define N 3 

void read_matrix(int M[N][N]) { // x dan y diganti N
    printf("Masukkan elemen matriks (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) { // Variabel k diganti menjadi j supaya sesuai dengan sampingnya
            scanf("%d", &M[i][j]);   // %lf diganti menjadi %d untuk membaca integer
        }
    }
}

void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0; // Diberi int sesuai dengan tipe data yang digunakan
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(int M[N][N]) {
    printf("Hasil matriks:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]); // %c diganti dengan %d untuk membaca integer
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N], B[N][N], C[N][N];

    printf("--- Input Matriks A ---\n");
    read_matrix(A);

    printf("\n--- Input Matriks B ---\n");
    read_matrix(B); // Wajib diberi titik koma

    multiply(A, B, C);

    printf("\n--- Hasil Kali Matriks ---\n");
    print_matrix(C);

    return 0;
}
