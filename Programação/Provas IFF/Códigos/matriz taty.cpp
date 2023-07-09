#include <iostream>
#include <cstring>
using namespace std;

#define nomes 5 // definindo "nomes" globalmente como 5. Referente a quantidade de nomes que sera usada no vetor
#define tam 50 //definindo "tam" globalmente como 50. Referente ao tamanho dos nomes que sera usada no vetor

int main() {

	char talytta[nomes][tam]; // definindo o vetor "talytta" com quantidade de nomes e tamanho para esses nomes
		
// estrutura de repeti��o pra preencher o vetor "talytta".
	for (int l = 0; l < nomes; l++) {
		//pedindo ao usuario para informar os nomes
		cout << "Informe um nome: " << endl;
		//armazenando os nomes no vetor do tipo char "talytta" na posi��o atual da estrutura de repeti��o, com limite de 50 caracteres.
		cin.getline (talytta[l], 50);
	}
	//aqui eu ja preenchi a estrutura todinha
	
	//estrutura de repeti��o pra exibir esse vetor preenchido
	//note que em ambos os for eu utilizei enquanto "l" menor que nomes. "nomes" ta definido globalmente como 5, 
	//portanto ser� executado apenas 5 vezes a estrutura
	for (int l=0; l < nomes; l++) {
		
		//exibindo o vetor talytta na posi��o atual da estrutura de repeti��o. Pulando uma linha a cada repeti��o
		cout << talytta[l] << endl;
	}
}
