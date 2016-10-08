#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <stdlib.h>

#include "parada.h"
#include "veiculo.h"

using namespace std;

int main(void){	
    ifstream arq;
	string str;
	char *tokchar;
	char *cstr;
	int tokcount=1;

	int i=0;
	float codigo;
	char *terminal;

    parada* stop;
    parada* lst;

    arq.open("paradas.csv", ios::in); // lêr do arquivo paradas.csv e guardar cada coluna em sua respectiva variavel (int,float ou char)

    arq >> str;			//leitura da 1 linha(cabecalho)

    while(!arq.eof()){
    i++;  
    arq >> str;
    if (str.c_str() == NULL) 
        break;
    }

    lst = new parada[i-1];    
	i=0;	//vetor com lista de parada ja inicializado no tamanho do numero de linhas com variaveis

    arq.close();

    arq.open("paradas.csv", ios::in);

    arq >> str;			//leitura da 1 linha(cabecalho)

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
							stop -> set_ID(atoi(tokchar));  //idparada = atoi(tokchar); 
							break;
					case 2:tokcount++;
							tokchar[0]=tokchar[5]=' ' ;
							codigo = atof(tokchar);	//XXXX -- useless
							break;
					case 3:tokcount++;
							for(int k=0; k<= 5;k++)
								if(tokchar[k]==',')
									tokchar[k]='.';
							stop -> set_longitude(atof(tokchar));	//longitude = atof(tokchar);  
							break;
					case 4:tokcount++;
							for(int k=0; k<= 5;k++)
								if(tokchar[k]==',')
									tokchar[k]='.';
							stop -> set_latitude(atof(tokchar)); //latitude = atof(tokchar);	
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

	//LISTA LST CRIADA COM i(5765) POSICOES ARMAZENANDO OBJETOS parada
    i = 0;
    tokcount =1;
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

cout << "/*****************************************************/" <<endl;	
    
    //variaveis utilizadas a partir desta parte do codigo//
    //int i=0;
	//char *tokchar;
	//char *cstr;
	//int tokcount=1;
    //string str

    ifstream file;

	veiculo* carro;
	veiculo* lstcarro;

	file.open("linhas.csv",ios::in);
	//iniciar leitura dos dados do veiculo

	file >> str;					//leitura da 1 linha(cabecalho)

    while(!file.eof()){			//tratar i maior que numero de linhas do arquivo /////////////////////////////<<<--------------------------
    i++;  
    file >> str;
    if (str.c_str() == NULL) 
        break;
    }
	cout << i-1 << endl;    
    lstcarro = new veiculo[i-1];   
     
	i=0;	//vetor com lista de parada ja inicializado no tamanho do numero de linhas com variaveis

    file.close();

    file.open("linhas.csv", ios::in);

    file >> str;		//leitura da 1 linha(cabecalho)

    while(!file.eof()){
   	carro = new veiculo();
		file >> str;
		
		cstr = new char[str.length()+1];
		strcpy(cstr, str.c_str());

		tokchar = strtok(cstr,";");

			while(tokchar != NULL){

				switch(tokcount){
					case 1:tokcount++;
							carro -> set_ID(atoi(tokchar));  //idcarro = atoi(tokchar); 
							break;
					case 2:tokcount++;
						  	str = tokchar;
							carro -> set_nome(str);	//nome do carro é uma string e tokchar e char
							break;
					case 3:tokcount++;	//codigo --useless
							break;

					default:tokcount = 1;
							carro -> set_tipo(tokchar[1]);		//"L" ou "O"
							break;
				}
				tokchar = strtok(NULL, ";");
			}
	lstcarro[i] = *carro;	
	i++;	
	}
    file.close();

	cout <<"idlinha = "<< carro -> get_ID() << endl;
	cout <<"nome = "<< carro -> get_nome() << endl;    
	cout <<"tipo = "<< carro -> get_tipo() << endl;
    cout<<"/*******************************************/"<<endl;
    cout << lstcarro[1].get_ID() << endl;
    cout << lstcarro[1].get_nome() << endl;
    cout << lstcarro[1].get_tipo() << endl;
	

    return 0;
}
