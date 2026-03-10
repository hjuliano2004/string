#ifndef STRING_H
#define STRING_H

typedef struct{
    char *data; // array de ponteiros para pedaços
    int length;      // número de pedaços
    int limite;     // capacidade máxima do array

}String;

    
typedef struct{
    String** list;
    int length;
    int size;
}ArrayList;

extern ArrayList *coletor;

String* frase(char **data);

int contaLength(char **data);

int contaLinha(char **lista);

char* escrita(char **data);

void println(String* string);

void freeString(String** string);

ArrayList* criaArrayList(int initialSize);


#endif