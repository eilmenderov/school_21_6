#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {

    private:
        std::string type;
    
    public:
        ATarget() {}
        virtual ~ATarget() {}
        ATarget(ATarget const &other) { *this = other;}
        ATarget(std::string const &type) { this->type = type; }
        std::string const &getType() const { return (this->type); }
        virtual ATarget *clone() const = 0;

        ATarget &operator=(ATarget const &other);
        void    getHitBySpell(ASpell const &aspell_ref) const;
};

#endif