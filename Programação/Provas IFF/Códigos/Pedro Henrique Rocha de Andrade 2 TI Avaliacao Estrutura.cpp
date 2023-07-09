#include <iostream>
using namespace std;

int main () {
	double nota, soma = 0;
	int i;
	
	for (i = 0; i < 5; i++) {
		cout << "Informe a nota: ";
		cin >> nota;
		soma = soma + nota;
	}
	
	double media = soma/i;
	cout << "media: " << media;
	
}
