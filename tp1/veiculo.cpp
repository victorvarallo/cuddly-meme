#include"veiculo.h"
#include"parada.h"
#include<iostream>
#include<string>

using namespace std;

	/*Não Implementados:


		veiculo get_prox();
		listaparada get_lstParada();

	*/
Veiculo::Veiculo(){
	ID = 0;
	nome = "-1";
	linha = "-1";
	tipo = "-1";

}

int Veiculo::get_id(){
	return id;
}

string Veiculo::get_linha(){
	return linha;
}

string Veiculo::get_nome(){
	return nome;
}

char Veiculo::get_tipo(){
	return tipo;
}

void Veiculo::set_id(int _id){
	id=_id;
}

void Veiculo::set_nome(string _nome){
	nome=_nome;
}

void Veiculo::set_linha(string _linha){
	linha=_linha;
}

void Veiculo::set_tipo(char _tipo){
	tipo=_tipo;
}

//Não implementado
void Veiculo::set_prox(){
	
}
//Não Implementado
void Veiculo::set_lstParada(){
	
}




