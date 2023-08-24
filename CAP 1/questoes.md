1.1 Analise a estrutura de dados esquematizada a seguir:
a ->b ->c<- d ->e ->f

Explique por que essa estrutura:

a) Não é um conjunto.
b) Não é uma lista. 
c) Não é uma arvore.

```
Resposta:

a) Não é um conjunto, pois o elemento c esta repetido.
b) Não é uma lista, pois o elemento c possui dois elementos anteriores.
c) Não é uma arvore, pois o elemento c possui dois elementos anteriores.
```

1.2 Indique a estrutura de dados mais adequada para ser usada num programa que precisa representar:

a) Estradas entre cidades de um mapa
b) A estrutura organizacional de uma empresa
c) A fila de impressao de um sistema operacional
d) A estrutura de diretorios em um sistema operacional


```
Resposta:

a) Grafo
b) Árvore
c) Fila
d) Árvore
```

1.3 Ao ser executado, o programa a seguir exibe a palavra diferentes.
Explique por que isso acontece.

```c
#include <stdio.h>
int main (void) {
    char s[3] = "um";
    char t[3] = "um";

    if (s == t) puts ("iguais");
    else puts ("diferentes");
    return 0;
}
```

```
Resposta:

O programa exibe a palavra diferentes, pois o operador == compara os endereços de memória dos vetores s e t, e não seus conteúdos.
```

1.4 Explique o que acontece quando o programa a seguir é executado.

```c 
#include <stdio.h>

typedef struct {char valor[10];} Str;

int main() {
    Str x = {"um"};
    Str y = {"dois"};
    puts(x.valor);
    x = y;
    puts(x.valor);
    return 0;
}

```

```
Resposta:

O programa exibe as palavras um e dois, pois o operador = copia o conteúdo do vetor y para o vetor x.
```

1.5 Explique o que acontece quando o programa a seguir é executado.

```c
#include <stdio.h>
int main() {
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
    printf("%d %d\n", a, b);
    return 0;
}

```

```
Resposta:

O programa exibe os números 5 e 3, pois o operador * acessa o conteúdo do endereço de memória apontado por p e q.
```

1.6 Indique a forma de alocação de memória (estática sequencial, estática encadeada, dinâmica sequencial ou dinâmica encadeada) usada para armazenar os itens 1,2,3 e 4, em cada um dos programas a seguir.

(a)
```c

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *v = malloc(4 * sizeof(int));
    for (i=0; i<4; i++) v[i] = i+1;
    for (i=0; i<4; i++) printf("%d\n", v[i]);
    return 0;
}

```

```
Resposta:

Dinâmica sequencial
```

(b)
```c

#include <stdio.h>

typedef struct no {
    int item;
    struct no *prox;
} No;

int main() {
    No v[4] = {{3, v+2}, {1, v+3}, {4, NULL}, {2, v+0}};

    No *p;

    for (p = v+1; p != NULL; p = p->prox)
     printf("%d\n", p->item);
    return 0;
}

```

```
Resposta:

Estática encadeada
```
(c)

```c

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int item;
    struct no *prox;
} *Lst;

Lst no (int x, Lst p) {
    Lst n = malloc(sizeof(struct no));
    n -> item = x;
    n -> prox = p;
    return n;
}

int main() {
    Lst p = no(1, no(2, no(3, no(4, NULL))));

    while (p) {
        printf("%d\n", p->item);
        p = p->prox;
    }

    return 0;
}

```

```
Resposta:

Dinâmica encadeada
```