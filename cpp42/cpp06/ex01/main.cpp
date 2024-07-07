#include "Serializer.hpp"

int main (){
    Data s;
    s.x = 5;
    uintptr_t p = Serializer::serialize(&s);
    Data *save = Serializer::deserialize(p);
    std::cout << save->x << std::endl;
}