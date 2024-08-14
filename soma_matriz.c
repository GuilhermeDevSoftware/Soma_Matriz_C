#include<stdio.h>

void criando_matriz(int matA[3][3], int matB[3][3]){
    printf("MATRIZ A: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Matriz A:[%d][%d] = ", i, j );
            scanf("%d", &matA[i][j]);
        }
    }

    printf("MATRIZ B: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("Matriz B:[%d][%d] = ", i, j );
            scanf("%d", &matB[i][j]);
        }
    }
}

int soma(int matA[3][3], int matB[3][3]){
    int valor;
    printf("Matriz C: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            valor = matA[i][j] + matB[i][j];
            printf("%d ", valor);
        }
        printf("\n");
    }
    return valor;
}

int main(){
    int matA[3][3];
    int matB[3][3];

    criando_matriz(matA, matB);
    soma(matA, matB);
    
    return 0;
}