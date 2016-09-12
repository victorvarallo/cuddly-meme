#ifndef __PARADA_H__
#define __PARADA_H__

#include <string>
#include <iostream>

using namespace std;

class parada{
	private:
	  	int ID;
		float latitude;
		float longitude; 
		parada *prox; 
		listaveiculo *lstVeiculo;

	public:
		parada();

		void set_id(int);
		void set_latitude(float)
		void set_longitude(float);
		void set_prox(parada);
		void set_lstVeiculo(listaveiculo);
		
		int get_id()
		float get_latitude();
		float get_longitude();
		parada get_prox();
		listaveiculo get_lstVeiculo();
};
#endif
