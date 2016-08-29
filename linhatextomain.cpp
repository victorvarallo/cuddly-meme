#include "linhatexto.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    
    string S, arq;
    linhatexto Linha;
    ifstream arquivoDeEntrada;
    
	cout << "Entre com o nome do arquivo: "<<endl;
	cin >> arq;

    arquivoDeEntrada.open (arq.c_str(), ios::in);
    
    if (!arquivoDeEntrada)  
    {      
        cout << "Problemas na abertura do arquivo" << endl;
		return 0;      
    }
	else 
		cout << "Lendo arquivo...\n" << "========================="<<endl;
    while (!arquivoDeEntrada.eof())
    {
        getline(arquivoDeEntrada, S);
        if (S.empty())
            continue;
        Linha.set_texto(S);
        Linha.separa_palavras();
    }
    arquivoDeEntrada.close();
	cout << endl;
	
	return 0;
}
