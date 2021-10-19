#include<stdio.h>

int main() {

    int A[3][3];
    int mul[3][3];

    printf("행렬 A의 값을 입력하세요\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j <3; j++) {

            scanf("%d", & temp);

            A[i][j] = temp;

        }

    }


    int B[3][3];



    printf("행렬 B의 값을 입력하세요\n");

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j <3; j++) {

            scanf("%d", & temp);

            B[i][j] = temp;

        }

    }



        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                for(int k=0;k<3;k++){
               mul[i][j]+=A[i][k]*B[k][j];
            }

            }

        }

        printf("A * B (두 행렬의 곱셈)\n");

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                printf("%d ", mul[i][j]);

            }

            printf("\n");

        }



} 