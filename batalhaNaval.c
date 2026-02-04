#include <stdio.h> 
  int main() {

    char coluna[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int i, j;
    int tabuleiro[10][10];

        for(i = 0; i < 10; i++) {
            for(j = 0; j < 10; j++) {
                tabuleiro[i][j] = 0;
        }
    }
        
    //preenchendo lugares no tabuleiro com loop for
        for(i = 3; i <= 5; i++) {
            tabuleiro[2][i] = 3;
        }      
        
       for(j = 5; j <= 7; j++) {
            tabuleiro[j][7] = 3;
       }
        
        printf("TABULEIRO BATALHA NAVAL\n");

        printf("    ");
        for(i = 0; i < 10; i++) {
            printf(" %c ", coluna[i]);
            
        } printf("\n");

        for(i = 0; i < 10; i++) {
            printf(" %2d ", i + 1);
                for(j = 0; j < 10; j++) {
                    printf(" %d ", tabuleiro[i][j]);
            } printf("\n");

        }

            
            
        



        return 0;
  }