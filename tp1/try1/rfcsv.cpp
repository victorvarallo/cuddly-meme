#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>

#include "parada.h"

using namespace std;

int main(void){	// lê do arquivo paradas.csv e guarda cada coluna em sua respectiva variavel (int,float ou char)

    ifstream arq;

	string str;
	char *tokchar;
	char *cstr;
	int tokcount=1;

	int idparada,i=0;
	float latitude, longitude;
	float codigo;
	char *terminal;

    parada* stop;
    parada* lst;

    arq.open("paradas.csv", ios::in); 

    arq >> str;

    while(!arq.fail()){
    i++;  
    arq >> str;
    if (str.c_str() == NULL) 
        break;
    }
    
    lst = new parada[i-1];    
	i=0;	//vetor com lista de parada ja inicializado no tamanho do numero de linhas com variaveis

    arq.close();

    arq.open("paradas.csv", ios::in);

    arq >> str;

    while(!arq.eof()){
   	stop = new parada();
		arq >> str;
		cstr = new char[str.length()+1];
		strcpy(cstr, str.c_str());

		tokchar = strtok(cstr,";");

			while(tokchar != NULL){
//              cout << tokchar << "\n"<< endl;

				switch(tokcount){
					case 1:tokcount++;
							stop -> set_ID(atoi(tokchar));  //idparada = atoi(tokchar); //preencher no objeto nesta linha
							break;
					case 2:tokcount++;
							tokchar[0]=tokchar[5]=' ' ;
							codigo = atof(tokchar);	//XXXX -- useless
							break;
					case 3:tokcount++;
							for(int k=0; k<= 5;k++)
								if(tokchar[k]==',')
									tokchar[k]='.';
							stop -> set_longitude(atof(tokchar));	//longitude = atof(tokchar);  //preencher no objeto nesta linha
							break;
					case 4:tokcount++;
							for(int k=0; k<= 5;k++)
								if(tokchar[k]==',')
									tokchar[k]='.';
							stop -> set_latitude(atof(tokchar)); //latitude = atof(tokchar);	//preencher no objeto nesta linha
							break;
					default:tokcount = 1;
							tokchar[0] = tokchar[2] = ' ';
							terminal = tokchar;		//S ou N -- useless
							break;
				}
				tokchar = strtok(NULL, ";");
			}
	lst[i] = *stop;	
	i++;	
	}
    arq.close();


	cout <<"idparada = "<< stop -> get_ID() << endl;
	cout <<"codigo = "<< codigo << endl;    //codigo nao esta no obj
	cout <<"longitude = "<< stop -> get_longitude() << endl;
	cout <<"latitude = "<< stop -> get_latitude() << endl;
	cout <<"terminal = "<< terminal << endl; //terminal nao esta no obj
    cout << lst[1].get_ID() << endl;
    cout << lst[1].get_latitude() << endl;
    cout << lst[1].get_longitude() << endl;

	//ISTA LST CRIADA COM i(5765) POSICOES ARMAZENANDO OBJETOS parada


    return 0;
}
