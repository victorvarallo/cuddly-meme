#include"estacao.h"

estacao::estacao(){
	ID = 0;
	nome = "-1";
	latitude = "-1";
	longitude = "-1";
}

int estacao::get_ID(){
	return ID;
}

void estacao::set_ID(int _ID){
	ID = _ID;
}

string estacao::get_nome(){
	return nome;
}

void estacao::set_nome(string _nome){
	nome = _nome;
}

float estacao::get_latitude(){
	return latitude;
}

void estacao::set_latitude(float _latitude){
	latitude = _latitude;
}

float estacao::get_longitude(){
	return longitude;
}

void estacao::set_longitude(float _longitude){
	longitude = _longitude;
}
