#include <iostream>

using namespace std;

main(){
	
	setlocale( LC_ALL, "portuguese");
	
	float salario, salarioNovo, diferenca;
	string nome;
	
	cout << "Informe o seu nome:";	
	cin>> nome;
	
	cout << "Informe o seu salario:";	
	cin>> salario;
	
	if (salario<=1500) {
		salarioNovo = salario*1.10;
		diferenca= salarioNovo-salario;
		cout<< "10% de aumento." << nome << " Seu salário era:"  << salario << "foi para:" << salarioNovo<< "aumento de R$:" <<diferenca;
		
	} else if ( salario >1500){
		salarioNovo = salario*1.05;
		diferenca= salarioNovo-salario*1.05;
		cout<< "5% de aumento." << nome<< "seu salário era:" << salario << "foi para:" << salarioNovo<< "aumento de R$:" <<diferenca;
	}

}
