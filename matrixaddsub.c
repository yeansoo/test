#include<stdio.h>

int main() {

    int input1, input2, input3, input4, temp;

    printf("행렬 A의 행, 열의 수를 입력하세요 >>");

    scanf("%d %d", & input1, & input2);



    int A[input1][input2];

    int plus[input1][input2];

    int minus[input1][input2];

    printf("행렬 A의 값을 입력하세요\n");

    for (int i = 0; i < input1; i++) {

        for (int j = 0; j < input2; j++) {

            scanf("%d", & temp);

            A[i][j] = temp;

        }

    }

    printf("행렬 B의 행, 열의 수를 입력하세요 >>");

    scanf("%d %d", & input3, & input4);

    int B[input3][input4];



    printf("행렬 B의 값을 입력하세요\n");

    for (int i = 0; i < input3; i++) {

        for (int j = 0; j < input4; j++) {

            scanf("%d", & temp);

            B[i][j] = temp;

        }

    }

    

        for (int i = 0; i < input1; i++) {

            for (int j = 0; j < input2; j++) {

                plus[i][j] = A[i][j] + B[i][j];

                minus[i][j] = A[i][j] - B[i][j];

            }

        }

        printf("A + B (두 행렬의 덧셈)\n");

        for (int i = 0; i < input1; i++) {

            for (int j = 0; j < input2; j++) {

                printf("%d ", plus[i][j]);

            }

            printf("\n");

        }



        printf("A - B (두 행렬의 뺄셈)\n");

        for (int i = 0; i < input1; i++) {

            for (int j = 0; j < input2; j++) {

                printf("%d ", minus[i][j]);

            }

            printf("\n");

        }

    

}