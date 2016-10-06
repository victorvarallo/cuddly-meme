#ifndef __PARADA_H__
#define __PARADA_H__

#include <string>
#include <iostream>
//#incude "veiculo.h"

using namespace std;

class parada{
    private:
        int ID;
        float latitude, longitude;
	//		lista de veiculos que passam por aqui
	//		veiculo *  listaVeiculo[100];

    public:
        parada();
        void set_ID(int);
		void set_latitude(float);
		void set_longitude(float);
		int get_ID();
		float get_latitude();
		float get_longitude();
};
#endif
