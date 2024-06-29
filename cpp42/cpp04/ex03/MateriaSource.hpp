#include "IMateriaSource.hpp"
#include <array>
#include "AMateria.hpp"

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource{
    private:
        std::array<AMateria *, 4> learnedAMateria;
    public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &objs);
    MateriaSource &operator=(const MateriaSource & objs);

    void learnMateria(AMateria *);
    AMateria * createMateria(std::string const &type);

    void deleteAMateria();
    void copyAMateria(const MateriaSource &objs);};

#endif