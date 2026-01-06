#include <stdio.h>

int main() 
{
  //tabuleiro 10x10
  int tabuleiro[10][10];

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      tabuleiro[i][j] = 0;
    }
  }

  printf("TABULEIRO BATALHA NAVAL:\n");
  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
  }

  return 0; 
}