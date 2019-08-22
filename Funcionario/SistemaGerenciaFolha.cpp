#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){}

void SistemaGerenciaFolha::setFuncionario(Funcionario * func) {
	funcionario[i] = func;
	i++;
}

double SistemaGerenciaFolha::calculaValorFolha() {
	double valorTotal = 0;

	for (int i = 0; i < 3; i++) {
		valorTotal += funcionario[i]->calcularSalario();
	}

	return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string n) {
	for (int i = 0; i < 3; i++) {
		if (n == funcionario[i]->getNome())
			return funcionario[i]->calcularSalario();
	}

	return -1;
}