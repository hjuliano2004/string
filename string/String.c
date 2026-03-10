#include <stdlib.h>
#include "String.h"
#include <string.h>
#include <stdio.h>

ArrayList* coletor = NULL;

int contaLength(char **data){

    int dataLength = contaLinha(data);
    int length = 0;

    for(int i=0; i < dataLength; i++){
        for(int j=0; data[i][j] != '\0' ;j++){
            length++;
        }
    }

    return length;
}

String* frase(char **data){


    String *s = malloc(sizeof(String));

    s->data = escrita(data);

    s->length = contaLength(data);
    s->limite = s->length + (s->length / 3);

    return s;
}

int contaLinha(char **lista){

    if(lista == NULL){
        return 0;
    }

    int linhas =0;
    for(int i=0;lista[i]!=NULL;i++){
        linhas++;
    }

    return linhas;
} 

char* escrita(char **data){

    int linha = contaLinha(data);
    char *s = malloc(contaLength(data) + 1);

    int p = 0;

    for(int i=0;i<linha;i++){
        int len = strlen(data[i]);

        for(int j=0;j<len;j++){
            s[p] = data[i][j];
            p++;
        }

    }

    s[p] = '\0';
    return s;
}

void println(String* string){

    if(string != NULL){
        printf("%s \n", string->data);
    }else{
        printf("null\n");
    }

}

void freeString(String** string){
    for(int i=0; string[i] != NULL;i++){
        free(string[i]);
    };
}



ArrayList* criaArrayList(int initialSize) {

    ArrayList *arr = malloc(sizeof(ArrayList));
    arr->list = malloc(initialSize * sizeof(String*));
    arr->length = 0; // começa vazio
    arr->size = initialSize; // capacidade inicial

    for(int i=0;i<initialSize;i++){
        arr->list[i] = NULL;
    }

    }