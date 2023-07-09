#include <iostream>
#include <cstring>

using namespace std;

int t = 3;
int codigo = 101;

struct pessoa {
	int codigo = 100;
	string nome;
	string cidade;
};

void cod(int n = 101) {
	n--;
	cout << n << endl;
	n--;
}

int menu () {
	int escolha_m;
	cout << "\n1. Cadastrar pessoa \n2. Buscar por nome \n3. Buscar por codigo \n4. Listar cidades \n0. Sair \n";
	cin >> escolha_m;
	return escolha_m;
}

void preencher (pessoa *vetor, int t) {
	char escolha = 's';
	bool vdd = true;
	int posicao = 0;
		while (vdd == true) {
			for (int i = 0; i < t; i++) {
				cout << "Informe o nome: ";
				cin >> vetor[i].nome;
				cout << "Informe a cidade: ";
				cin >> vetor[i].cidade;
				cout << "Codigo: ";
				cod(codigo);
				codigo = codigo - 1;
				vetor[posicao];
				posicao++;
				cout << "Cadastro feito." << endl;
				cout << "Deseja Cadastrar novamente? (s/n) ";
				cin >> escolha;
					if (escolha == 's') {
						vdd = false;
				} else {
					return;
				}	
			}
		}
}

//busca por codigo
void BuscaBinaria (pessoa *vetor, int codigo, int t) {
	int inicio = 0;
	int fim = t - 1;
	 
	while (inicio<=fim) {
		int centro = (inicio + fim) / 2;
			if (vetor[centro].codigo == codigo) {
				cout << "Codigo esta na posicao: " << centro;
				for (int i = 0; i < t; i++) {
					cout << "\nNome: " << vetor[i].nome;
					cout << "\nCidade Natal: " << vetor[i].cidade << endl;
					break;
			}
			return;
			} else if (codigo < vetor[centro].codigo){
				fim = centro - 1;
			} else {
				inicio = centro + 1;
			}
		}
	cout << "Codigo não encontrado" << endl;
	}

//busca por nome
void buscasequencial(pessoa *vetor, int t, string nome) {
	for (int i = 0; i < t - 1; i++) {
		for (int j = 0; j < t - 1; j++) {
				if (strcmp(vetor[j].nome.c_str(), vetor[j+1].nome.c_str()) > 0){
					string aux = vetor[j].nome;
					vetor[j].nome = vetor[j+1].nome;
					vetor[j+1].nome = aux;
				
				}	
				if (strcmp(vetor[j].nome.c_str(), nome.c_str())) {
				cout << "Nome: " << vetor[j].nome << " esta na posicao: " << i << endl;
				cout << "Cidade Natal: " << vetor[j].cidade << endl;
				cout << "Codigo: " << codigo;
				return;
			}
		}
	}
	cout << "Nome nao encontrado. " << endl;
}

void imprimirrtd(pessoa *vetor, int t) {
	for (int i = 0; i < t - 1; i++) {
		cout << "Nome: " << vetor[i].nome << endl;
		cout << "Cidade Natal: " << vetor[i].cidade << endl;
		cout << "Codigo: " << codigo;
		return;
	}
}

void imprimir(pessoa *vetor, int t) {
	cout << "--------------\n";
	for (int i = 0; i < t - 1; i++) {
		for (int j = 0; j < t - 1; j++) {
			if (strcmp(vetor[j].cidade.c_str(), vetor[j+1].cidade.c_str()) > 0){
				string aux = vetor[j].cidade;
				vetor[j].cidade = vetor[j+1].cidade;
				vetor[j+1].cidade = aux;
			}
			if (strcmp(vetor[j].cidade.c_str(), vetor[j + 1].cidade.c_str()) != 0) {
		 		cout << "Cidade: " << vetor[j].cidade << endl; 
		 		break;
			} 
		}
	}
	cout << "--------------" << endl;
}

int main () {
	pessoa vetor[t];
	int opcao;
	string nome;
	int codigo = 100;
	
	do {
		opcao = menu();
		
		switch (opcao) {
			
			case 1: 
			preencher(vetor, t);
			break;
			
			case 2: 
			cout << "Informe o nome a ser pesquisado: ";
			cin >> nome;
			buscasequencial(vetor, t, nome);
			break;
			
			case 3: 
			cout << "Informe o codigo a ser pesquisado: ";
			cin >> codigo;
			BuscaBinaria(vetor, codigo, t);
			break;	
			
			case 4: 
			imprimir(vetor, t);
			break;
			
			case 5:
			imprimirrtd(vetor, t);
			break;
		}
	} while (opcao != 0);
	cout << "Execucao finalizada.";
}