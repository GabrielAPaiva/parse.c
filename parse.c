#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *arg[]){
    FILE *pa;
    int x,y;
    char aux[25];
    x = atoi(arg[2]);
    y = atoi(arg[3]);
    //printf("%i+%i=%i\n", x,y,x+y);

    void salvar(){
        if(pa = fopen("cript.txt","rb+") == NULL){
        pa = fopen("cript.txt","wb+");}
        rewind(pa);
        for(int i=4; i<4+x; i++){
            strcpy(aux,arg[i]);
            
            fwrite(&aux,sizeof(arg)*1,1,pa);
        }
        fclose(pa);
    }

    if(strcmp(arg[1],"salvar")==0)
    salvar();
    //void abrir(){
    //    pa = fopen("cript.txt","rb+");
    //    fread(sizeof(char),100,pa);
    //    system("pause");
    //}
    return 0;
}