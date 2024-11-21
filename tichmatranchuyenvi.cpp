#include <stdio.h>


void chuyenVi(int n, int m, int a[][100], int b[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[j][i] = a[i][j];
  }
  }
}
void tich(int n, int m, int a[][100], int b[][100], int c[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
    }
     }
   }
}
void inMaTran(int n, int m, int a[][100]) {
    for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
       printf("%d ", a[i][j]);
      }
        printf("\n");
    }
}

int main() {
    int t; 
    printf("Nhap so ban test: ");
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n, m;
        printf("Nhap kich thuc ma tran (n m): ");
        scanf("%d %d", &n, &m);
        int a[100][100], b[100][100], c[100][100];

        printf("Nhap ma tran A:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
          }
      }
        chuyenVi(n, m, a, b);

        tich(n, m, a, b, c);

        printf("Test %d:\n", test);
        inMaTran(n, n, c);
    }
    return 0;
}


