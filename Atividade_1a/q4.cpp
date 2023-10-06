#include <string.h>
#include <iostream>
using namespace std;

string f1;
string f2;

int main() {
	cout << "Digite a primeira frase: " << endl;
	getline(cin, f1);
	
	cout << "Digite a segunda frase: " << endl;
	getline(cin, f2);
	
	if (f1 == f2) {
		cout << "Sao iguais" << endl;
	}
	else {
		cout << "Sao diferentes" << endl;
	}
	
	return 0;
}
