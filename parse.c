#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *arg[]){
    FILE *pa;
    int op,x,y;
    char aux[25];

    void salvar(){
      x = atoi(arg[2]);
      y = atoi(arg[3]);
      if(pa = fopen("cript.txt","rb+") == NULL){
      pa = fopen("cript.txt","wb+");}
      rewind(pa);
      for(int i=4; i<4+x; i++){
            strcpy(aux,arg[i]);
            fwrite(&aux,sizeof(char)*30,1,pa);
        }
    }
    void me(){
      printf("========================================================");
      printf("\n   .-------.\n   \\\\   ___ \\\\\n    \\\\  \\  \\ \\\\ \n     \\\\  ---  \\\\\n      \\\\-      _____   _____    _____\n       \\\\     \\\\ __\\\\ \\\\   \\\\ \\\\\n        \\\\     \\\\   \\\\ \\\\__'-  \\\\\n         \\\\     \\\\   \\\\ \\\\ \\\\   \\\\_____\n");
      printf("========================================================\n");
      printf("\nSalvar:\n\t*[parse salvar  i j valores]\n\tonde i = número de elementos,\n\tj = número letras em cada elemento.\n");
    }
    strcpy(aux,arg[1]);
    if(strcmp(aux,"salvar")==0){op=1;}
    if (strcmp(aux,"help")==0){op=2;}
    switch (op) {
      case 1:
      salvar();
      break;
      case 2:
      me();
      break;
    }
    return 0;
}
