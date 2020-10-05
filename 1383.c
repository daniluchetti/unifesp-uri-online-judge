// 1383 - Sudoku
#include <stdio.h>
#include <stdlib.h>

int sudokuLinha(int M[][9]){
    int i, j,soma, v[9];

    for(i=0;i<9;i++){
        soma=0;
        for(j=0;j<9;j++){
            soma += M[i][j];
        }
        v[i]=soma;

        if(v[i] != 45)
            return -1;
    }

    return 0;
}

int sudokuColuna(int M[][9]){
    int i,j,soma,v[9];

    for(j=0;j<9;j++){
        soma=0;
        for(i=0;i<9;i++){
            soma+=M[i][j];
        }
        v[j]=soma;

        if(v[j] != 45)
            return -1;
    }

    return 0;
}

int sudokutresXtres(int M[][9], int linhaI, int linhaF, int colI, int colF){
    int i,j;
    int soma = 0;
    int v[9];

    for(i=linhaI; i<=linhaF; i++){
        for(j=colI;j<=colF;j++){
            soma+=M[i][j];
        } 
    }

    if(soma != 45)
        return -1;

    return 0;
}

int main(int argc, char *argv[]) {

    int M[9][9];
    int i,j;
    int linha, coluna, tresXtres;
    int n,cont=1;

    scanf("%d", &n);
    while(n--){
        for(i=0; i<9;i++){
            for(j=0;j<9;j++){
                scanf("%d", &M[i][j]);
            }
        }

        printf("Instancia %d\n",cont);

        linha = sudokuLinha(M);
        coluna = sudokuColuna(M);

        if(linha == -1 || coluna == -1)
            puts("NAO");
        else{

            tresXtres+=sudokutresXtres(M,0,2,0,2);  
            tresXtres+=sudokutresXtres(M,0,2,3,5);
            tresXtres+=sudokutresXtres(M,0,2,6,8);
            tresXtres+=sudokutresXtres(M,3,5,0,2);
            tresXtres+=sudokutresXtres(M,3,5,3,5);
            tresXtres+=sudokutresXtres(M,3,5,6,8);
            tresXtres+=sudokutresXtres(M,6,8,0,2);
            tresXtres+=sudokutresXtres(M,6,8,3,5);
            tresXtres+=sudokutresXtres(M,6,8,6,8);

            if(tresXtres != 0)
                puts("NAO");
            else
                puts("SIM"); 
        }
        puts("");
        cont++;
    }
    return 0;
}
