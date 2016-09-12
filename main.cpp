#include <iostream>
#include <string>

using namespace std;

#include "veiculo.h"
#include "parada.h"
#include "estacao.h" 

int main(void)
{
	string opcao, linha, estacao;

    Veiculo transportePublico; // objeto que gerencia a lista de veículos
    Parada abrigoTransporte; // objeto que gerencia a lista de paradas em poa
    Estacao bikePoa; // objeto que gerencia a lista de estacoes de bicicleta em poa


    transportePublico.carregaVeiculos("linhas.csv"); // método que deve criar uma lista com  todas linhas de veiculos
 
    abrigoTransporte.carregaParadas("paradas.csv"); // método que deve criar uma lista com todas paradas

    abrigoTransporte.vinculaVeiculos("paradalinha.csv"); // método que deve vincular às paradas a lista de ônibus parada 
                                                         // e ao mesmo tempo vincular aos ônibus uma lista de paradas 
 
    bikePoa.carregaEstações("estacoes-bikepoa.csv");  // método que deve criar a lista de estacoes de bicicleta em poa
    
    do{
      cout << "Escolha uma opcao" << endl;
      cout << "  1. Listar as linhas de onibus" << endl;
      cout << "  2. Listar as paradas de onibus de uma linha especifica" << endl;
      cout << "  3. Listar as paradas pelas quais circulam mais linhas de onibus" << endl;
      cout << "  4. Listar as estacoes de bicicleta" << endl;
      cout << "  5. Listar a parada mais próxima de uma dada estacao de bicicleta e as linhas de que passam por ali" << endl;
      cout << "  0. FINALIZAR" << endl;
      cin >> opcao;
      switch(opcao){
        case 1: transportePublico.dump(); 
				break;
        case 2: 
            	cout << "Informe a linha: " << endl;
            	cin >> linha;
          		transportePublico.lstparadas(linha); 
				break;
        case 3: abrigoTransporte.uso(); 
				break;
        case 4: bikepoa.dump(); 
				break;
        case 5: 
	            cout << "Informe a estacao: " << endl;
	            cin >> estacao;
	            bikepoa.linhasProximas(estacao); 
	            break;
        case 0: return 0;
        default: cout << "OPCAO INVALIDA. ESCOLHA NOVAMENTE" << endl; 
     }
     return 0;

}
