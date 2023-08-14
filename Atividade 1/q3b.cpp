/* B) As duas strings devem ser definidas como string, para isso use a blioteca iostream do C++. conforme
abaixo:*/

#include <stdio.h>
#include <iostream>
using namespace std;

string f1, f2;

int main(void)
{
    cout << "Digite a primeira frase: ";
    getline(cin, f1);
    cout << "Digite a segunda frase: ";
    getline(cin, f2);

    if (f1 == f2)
        cout << "As frases sao iguais" << endl;
    else
        cout << "As frases sao diferentes" << endl;

    return 0;
}