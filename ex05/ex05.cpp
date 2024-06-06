#include <iostream> <locale>
using namespace std;




// ATIVIDADE DA 5º LISTA DE C++



//atividade 01
/*int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int number;

	for (number = 1; number <= 10; number++) {
		cout << number << "\n";
	}
}*/


//atividade 02
/*int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int numberTab;
	cout << "Informe um número: ";
	cin >> numberTab;

	for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
		int resultado = numberTab * multiplicador;
		cout << numberTab << " * " << multiplicador << " = " << resultado << "\n";
	}

}*/


//atividade 03
/*int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int number;
	for (number = 5; number <= 50; number += 5) {
		cout << number << "\n";
	}

}*/


//atividade 04
/*int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int numberUser;

	for ( numberUser = 1; numberUser <= 5; numberUser++) {
		cout << "Informe um número: ";
		cin >> numberUser;
		if (numberUser > 100) {
			cout << "NÚMERO ESPECIAL!";
		}
		else {
			cout << "NÚMERO COMUM!" << "\n";
			cout << "Informe um novo número: ";
			cin >> numberUser;
		}
	}
	return 0;

}*/


//atividade 05
/*int main() {
	locale::global(locale("pt_BR.UTF - 8"));

	int number;
	for (number = 1; number <= 31; number += 2) {
		cout << number << "\n";
	}
}*/



//atividade 06
/*int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int numbers[5];

	cout << "Digite 5 números: \n";

	for (int i = 1; i <= 5; i++) {
		cout << "Número " << +i << ": ";
		cin >> numbers[i];
	}

	cout << "\n";

	for (int i = 0; i < 5; i++) {
		if (numbers[i] > 0) {
			cout << "Número Positivo. \n";
		}
		else if (numbers[i] < 0) {
			cout << "Número Negativo. \n";
		}
		else {
			cout << "O Número é zero. \n";
		}
	}



}*/