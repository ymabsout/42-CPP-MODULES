#include <iostream>
#include <array>
#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain{
    protected:
        std::array< std::string, 100 > ideas;
    public:
    Brain();
    ~Brain();
    Brain(const Brain &objs);
    Brain &operator=(const Brain &objs);
};

#endif