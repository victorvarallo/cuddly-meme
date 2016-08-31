#ifndef __LINHATEXTO_H__
#define __LINHATEXTO_H__

#include <string>
#include <iostream>

using namespace std;

class linhatexto{
	private:
		string texto; 
	public:
		linhatexto();

		void set_texto(string);
			
		void separa_palavras();
};

#endif
