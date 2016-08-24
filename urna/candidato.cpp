#include "candidato.h"


candidato::candidato(){
	nome = partido = "unknown";
	numero = votos = 0;
}
string candidato::get_nome(){
	return nome;
}
string candidato::get_partido(){
	return partido;
}
int candidato::get_numero(){
	return numero;
}
int candidato::get_votos(){
	return votos;
}
void candidato::set_nome(string _nome){
	nome = _nome;
}
void candidato::set_partido(string _partido){
	partido = _partido;
}
void candidato::set_numero(int _numero){
	numero = _numero;
}
void candidato::set_votos(int _votos){
	votos = _votos;
}		
void candidato::um_voto(){
	votos++;
}
