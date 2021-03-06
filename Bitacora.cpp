#include "Bitacora.h"
#include <ctime>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

void Bitacora::write(std::string m){
    time_t now = time(0);
    tm *time = localtime(&now);

    std::ofstream archivo;
    archivo.open(name,std::ios::app);
    archivo<<time->tm_mday<<"/"<<time->tm_mon+1<<"/"<<2021<<"  "<<time->tm_hour<<":"<<time->tm_min<<":"<<time->tm_sec<<"  "<<m<<std::endl;
    archivo.close();
}

std::string Bitacora::read(){
    std::string b, text;
    std::ifstream archivo;
    archivo.open(name, std::ios::in);
    while(!archivo.eof()){
        getline(archivo, text);
        b += text+"\n";
    }
    archivo.close();
    return b;
}
