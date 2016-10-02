#ifndef __VEICULO_H__
#define __VEICULO_H__

#include <string>
#include <iostream>

using namespace std;

class veiculo{
	private:                
		int id;
		string nome;
		string linha;
		char tipo; // L=lotação ou O=ônibus
		veiculo *prox;   
		listaparada *lstParada; // A lista de paradas deve ser organizada a fim de supor a ordem em que se dá o deslocamento do veículo
    
	public:
		veiculo()	// Construtores ......  
        

		void set_id(int);
		void set_nome(string);
		void set_linha(string);
		void set_tipo(char);
		void set_prox();
		void set_lstParada();

		int get_id();
		string get_nome();
		string get_linha();
		char get_tipo();
		veiculo get_prox();
		listaparada get_lstParada();

};

#endif
