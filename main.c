// Benarkan Code ini



#define N 3  // ini untuk deklarasi size matrix berapa (biar tetap seimbang saat perkalian matrix)

void read_matrix(int M[x][y]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; k < N; j++)
            scanf("%lf", &M[i][j]);
}

void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum = 0;
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", M[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N], B[N][N], C[N][N];

    read_matrix(A);
    read_matrix(B)

    multiply(A, B, C);

    printf("Hasil Kali matrix: \n");
    print_matrix(C);
    return 0;
}
