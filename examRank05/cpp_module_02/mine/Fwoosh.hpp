#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class   Fwoosh: public ASpell {

    public:
        Fwoosh();
        ~Fwoosh();

        virtual ASpell *clone() const {
            return (new Fwoosh());
        }
};

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}

# endif
