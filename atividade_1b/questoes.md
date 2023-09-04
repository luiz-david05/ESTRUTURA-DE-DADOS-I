## 1. 
<br>

a) i = 19, j = 39, p = j, q = j;   

b) y = 4, x = 3, p = y

<br>

## 2.
<br>
a) 

```c
void main() {
int x, *p;
x = 100;
p = x;
printf("Valor de p: %d.n", *p);
```
<br>

```Erros: 
O erro está na atribuição "p = x", deveria ser "p = &x", além de na função printf "\n" no lugar de .n
```