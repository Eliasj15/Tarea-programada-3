#ifndef BITACORA_H
#define BITACORA_H
#include <string>

class Bitacora{
    std::string name;
public:
    Bitacora(){ name = "Bitacora.txt"; };
    void write(std::string m);
    std::string read();
};

#endif // BITACORA_H
