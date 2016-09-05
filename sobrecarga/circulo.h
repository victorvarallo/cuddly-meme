#ifndef __CIRCULO_H__
#define __CIRCULO_H__

#define pi 3

#include <sstream> 
#include <string>
#include <iostream>
using namespace std;

class circulo{
	private:
		int raio, x, y;

		int area();
		int circunferencia();
		int distancia(int,int,int,int);
	
	public:
		circulo (); // o centro ficará em (0,0) e o raio será 1
		circulo (float raio); // o centro ficará em (0,0)
		circulo (float x, float y); // o raio será 1
		circulo (float x, float y, float raio);
	
		void set_raio(int _raio);
		void set_centro(int _x,int _y);

		void aumenta_raio(int porcentagem);
		void imprime_raio();
		void imprime_centro();
		void imprime_area();		

		string ToString();
};

#endif
