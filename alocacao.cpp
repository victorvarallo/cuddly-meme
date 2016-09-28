#include <iostream>


using namespace std;

int main (void){
	int **matriz;
	int c,l;
	
	cout << "insira o numero de colunas: "<< endl;
	cin >> c;
	
	matriz = new int*[c];

	for(int i=0;i<c; i++){
		cout << "insira o numero de linhas da coluna" << i << endl;
		cin >> l;
		matriz[i] = new int*[l];
	}

	return 0;
}
