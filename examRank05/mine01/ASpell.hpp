#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell {

    private:
        std::string name;
        std::string effects;
    
    public:
        ASpell() {}
        virtual ~ASpell() {}
        ASpell(ASpell const &other) { *this = other; }
        std::string const &getName() const { return (this->name); }
        std::string const &getEffects() const { return (this->effects); }
        virtual ASpell *clone() const = 0;

        ASpell(std::string const &name, std::string const &effects);
        ASpell &operator=(ASpell const &other);
        void    launch(ATarget const &atarget_ref) const;
};

#endif
