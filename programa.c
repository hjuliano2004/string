#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct String {
    char *data; // array de ponteiros para pedaços
    int length;      // número de pedaços
    int limite;     // capacidade máxima do array
};

typedef struct String String;

String* frase(char **data);

int contaLength(char **data);


int calcLinha(char **lista);
char* escrita(char **data);

void println(String* string);


int main(){

    char* a[] = {"aaa", " eee"};

    String* string = frase(a);

    String* string2 = frase((char*[]){"aaaa a aa ", "aaaaaaa ", string->data, NULL});

    println(string);
    println(string2);


    return 0;
}

int contaLength(char **data){

    int dataLength = calcLinha(data);
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
};

int calcLinha(char **lista){

    int linhas =0;
    for(int i=0;lista[i]!=NULL;i++){
        linhas++;
    }

    return linhas;
} 

char* escrita(char **data){

    int linha = calcLinha(data);
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
};

void println(String* string){

    printf("%s \n", string->data);

}