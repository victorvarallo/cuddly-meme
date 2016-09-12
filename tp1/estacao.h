#ifndef __ESTACAO_H__
#define __ESTACAO_H__

#include <string>
#include <iostream>

using namespace std;

class estacao{
	private:	
		int ID;
 		string nome;
   		float latitude;
   		float longitude; 
   	 	estacao *prox; 
   	public:
		estacao();

		void set_id(int);
		void set_nome(string);
		void set_latitude(float);
		void set_longitude(float);
		void set_prox(estacao);

		int get_id();
		string get_nome();
		float get_latitude();
		float get_longitude();
		estacao get_prox();
};
#endif
