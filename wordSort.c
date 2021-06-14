#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void sortWord(char **matr, int size){
  char *temp;
  for(int i=0; i < size; i++){
    if(strcmp(matr[i], matr[i+1]) > 0){
      temp = matr[i];
      matr[i] = matr[i+1];
      matr[i+1] = temp;
    }
  }
}

int main(){
  int size;

  printf("List size: \n");
  scanf("%d", &size);

  char **matrix = (char **) malloc(sizeof(char*) * size);
  printf("Enter words\n");
  for(int i=0; i < size; i++){
    matrix[i] = (char *) malloc(sizeof(char) * 100);
    scanf("%s", matrix[i]);
    matrix[strlen(matrix[i])] = '\0';
  }

  sortWord(matrix, size);
  for(int j=0; j < size; j++){
    printf("%s", matrix[j]);
  }

}
