#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class   Polymorph: public ASpell {

    public:
        Polymorph();
        ~Polymorph();

        virtual ASpell *clone() const {
            return (new Polymorph());
        }
};

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {}
Polymorph::~Polymorph() {}

# endif
