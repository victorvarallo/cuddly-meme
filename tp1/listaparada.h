#ifndef __LISTAPARADA_H__
#define __LISTAPARADA_H__

#include <string>
#include <iostream>

using namespace std;

class listaparada{
	private:
		listaparada *prox;
		parada *abrigo;
	public:
		listaparada();
		
		void set_prox(listaparada);
		void set_abrigo(parada);
		
		listaparada get_prox();
		parada get_abrigo();
};
#endif
