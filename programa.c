#include "string/String.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    coletor = stringList(50);

    char *a[] = {"aaa", " eee", NULL};

    String *palavra = string(a, 1);

    String *palavra2 =
        string((char *[]){"aaaa a aa ", "aaaaaaa ", palavra->data, NULL}, 1);


        palavra->data = "gan";



    println(string((char *[]){"antes do free coletor", NULL}, 0));
    for (int i = 0; i < coletor->length; i++) {
        println(coletor->list[i]);
    }

    freeColetor();

    println(string((char *[]){"depois do free coletor", NULL}, 0));
    for (int i = 0; i < coletor->length; i++) {
        println(coletor->list[i]);
    }

    return 0;
}
