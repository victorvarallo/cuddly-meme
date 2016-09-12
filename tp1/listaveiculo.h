#ifndef __LISTAVEICULO_H__
#define __LISTAVEICULO_H__

#include <string>
#include <iostream>

using namespace std;

class listaveiculo{
	private:
		listaveiculo *prox;
		veiculo *transporte;
	public:
		listaveiculo();
		
		void set_prox(listaveiculo);
		void set_transporte(veiculo);

		listaveiculo get_prox();
		veiculo get_transporte();
};
#endif
