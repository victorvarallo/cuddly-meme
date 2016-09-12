#include "circulo.h"

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

ostream& operator<<(ostream &out, circulo &c){
  out << "x=" << c.getX() << ", y=" << c.getY() << ", raio=" << c.getRaio();
  return out;
}

istream& operator>>(istream &in, circulo &c){
  int x, y, r;
  in >> x >> y >> r;
  c.setX(x);
  c.setY(y);
  c.setRaio(r);
  return in;
}

int main(){
	circulo circulo1;
	string valor;

	cout << circulo1 << endl;
	cout << circulo1.ToString();
	
	cout << "informe os valores de x,y e r para o curculo: " << endl;
	cin >> circulo1;
	cout << circulo1 << endl;	

	return 0;
}
