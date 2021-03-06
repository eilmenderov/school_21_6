#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

class SpellBook {

    private:
        std::vector<ASpell *> arr_spell;

    public:
        SpellBook() {}
        SpellBook(SpellBook const &other) { *this = other;}

        SpellBook &operator=(SpellBook const &other);
        ~SpellBook();

        void learnSpell(ASpell *aspell_ptr);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &name);
        
};

# endif
