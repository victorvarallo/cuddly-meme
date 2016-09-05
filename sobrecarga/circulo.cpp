#include "circulo.h"

int circulo::area(){
	int tmp_area = pi*raio^2;
	return tmp_area;
}
int circulo::circunferencia(){
	int tmp_circ = 2*pi*raio;
	return tmp_circ;
}
int circulo::distancia(int x0,int y0, int x1, int y1){
	int tmp_dist =((x1-x0)^2+(y1-y0)^2)^(1/2);
	
}
/**********************CONSTRUTORES*******************************/
circulo::circulo(){
	x = y = 0;
	raio = 1;
}
circulo::circulo(float _raio){
	x = y = 0;
	raio = _raio;
}
circulo::circulo(float _x, float _y){
	x = _x;
	y = _y;
	raio = 1;
}
circulo::circulo(float _x, float _y, float _raio){
	x = _x;
	y = _y;
	raio = _raio;
}
/****************************************************************/	
void circulo::set_raio(int _raio){
	raio = _raio;
}
void circulo::set_centro(int _x, int _y){
	x = _x;
	y = _y;	
}
void circulo::aumenta_raio(int porcentagem){


}
void circulo::imprime_raio(){
	cout << raio << endl;
}
void circulo::imprime_centro(){
	cout << "(" << x << "," << y << ")" << endl;
}
void circulo::imprime_area(){
	cout << area() << endl;
}
string circulo::ToString(){
	string s;
	stringstream convert;
	convert << "Centro:(" << x <<"," << y << ")   Raio: " <<  raio << endl;
	s = convert.str();
	return s;
}



