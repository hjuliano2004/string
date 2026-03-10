#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string/String.h"

int main(){

    char* a[] = {"aaa", " eee", NULL};

    coletor = criaArrayList(50);


    String* string = frase(a);

    String* string2 = frase((char*[]){"aaaa a aa ", "aaaaaaa ", string->data, NULL});


    String* lista[100] = {NULL};

    println(lista[80]);

    println(string);
    println(string2);

    free(string->data);
    free(string2->data);

    free(string);
    free(string2);


    return 0;
}
