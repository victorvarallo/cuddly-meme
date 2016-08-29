#include "linhatexto.h"

linhatexto::linhatexto(){
	texto = "unknown";
}
void linhatexto::set_texto(string _texto){
	texto = _texto;
}			
void linhatexto::separa_palavras(){
	string const c(texto);
    for (unsigned i=0; i!=texto.length(); i++){
		if(c[i]==' ')
			 cout << endl;

		else cout << c[i];
	}
}
