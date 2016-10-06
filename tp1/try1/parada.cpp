#include "parada.h"
//#include "veiculo.h"

parada::parada(){
    ID = 0;
    latitude = longitude = -1;
}    

void parada::set_ID(int _ID){
    ID = _ID;
}

void parada::set_latitude(float _lat){
    latitude = _lat;
}

void parada::set_longitude(float _long){
    longitude = _long;
}

int parada::get_ID(){
    return ID;
}

float parada::get_latitude(){
    return latitude;
}

float parada::get_longitude(){
    return longitude;
}
