#include <iostream>
#include <cstring>
using namespace std;

#define nomes 5 // definindo "nomes" globalmente como 5. Referente a quantidade de nomes que sera usada no vetor
#define tam 50 //definindo "tam" globalmente como 50. Referente ao tamanho dos nomes que sera usada no vetor

int main() {

	char talytta[nomes][tam]; // definindo o vetor "talytta" com quantidade de nomes e tamanho para esses nomes
		
// estrutura de repetição pra preencher o vetor "talytta".
	for (int l = 0; l < nomes; l++) {
		//pedindo ao usuario para informar os nomes
		cout << "Informe um nome: " << endl;
		//armazenando os nomes no vetor do tipo char "talytta" na posição atual da estrutura de repetição, com limite de 50 caracteres.
		cin.getline (talytta[l], 50);
	}
	//aqui eu ja preenchi a estrutura todinha
	
	//estrutura de repetição pra exibir esse vetor preenchido
	//note que em ambos os for eu utilizei enquanto "l" menor que nomes. "nomes" ta definido globalmente como 5, 
	//portanto será executado apenas 5 vezes a estrutura
	for (int l=0; l < nomes; l++) {
		
		//exibindo o vetor talytta na posição atual da estrutura de repetição. Pulando uma linha a cada repetição
		cout << talytta[l] << endl;
	}
}
