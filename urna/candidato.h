#ifndef __CANDIDATO_H__
#define __CANDIDATO_H__

#include <string>
#include <iostream>


using namespace std;

class candidato{
	private:
		string nome, partido;
		int numero,votos;
	public:
		candidato();

		string get_nome();
		string get_partido();
		int get_numero();
		int get_votos();

		void set_nome(string);
		void set_partido(string);
		void set_numero(int);
		void set_votos(int);
		
		void um_voto();
};
#endif 
