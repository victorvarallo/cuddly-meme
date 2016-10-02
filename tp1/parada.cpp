#include"veiculo.h"
#include"parada.h"
#include<iostream>
#include<string>

using namespace std;

Parada::Parada(){

	ID = -1;
	latitude = longitude = -1;
}

int Parada::get_ID(){
	return id;
}

float Parada::get_latitude(){
	return latitude;
}

float Parada::get_longitude(){
	return longitude;
}

void Parada::set_ID(int _ID){
	ID = _ID;
}

void Parada::set_latitude(float _latitude){
	latitude = _latitude;
}

void Parada::set_longitude(float _longitude){
	longitude = _longitude;
}
