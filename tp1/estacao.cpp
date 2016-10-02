#include"estacao.h"

Estacao::Estacao(){
	ID = 0;
	nome = "-1";
	latitude = "-1";
	longitude = "-1";
}

int Estacao::get_ID(){
	return ID;
}

void Estacao::set_ID(int _ID){
	ID = _ID;
}

string Estacao::get_nome(){
	return nome;
}

void Estacao::set_nome(string _nome){
	nome = _nome;
}

float Estacao::get_latitude(){
	return latitude;
}

void Estacao::set_latitude(float _latitude){
	latitude = _latitude;
}

float Estacao::get_longitude(){
	return longitude;
}

void Estacao::set_longitudefloat _longitude){
	longitude = _longitude;
}
