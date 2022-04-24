#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector> //mod01

# include "ASpell.hpp"
# include "ATarget.hpp"
# include "Dummy.hpp"
# include "Fwoosh.hpp"
# include "SpellBook.hpp"
# include "TargetGenerator.hpp"
# include "Fireball.hpp"
# include "Polymorph.hpp"
# include "BrickWall.hpp"

class Warlock {

    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);

        // std::vector<ASpell *>   arr; //mode01
        SpellBook               book; //mode02

    public:
        std::string const &getName() const { return this->name; }
        std::string const &getTitle() const { return this->title; }
        void    setTitle(std::string const &title) { this->title = title; }

        Warlock(std::string name, std::string tittle);
        void    introduce() const;
        ~Warlock();

        void    learnSpell(ASpell *aspell_ptr); //mode01
        void    forgetSpell(std::string name); //mode01
        void    launchSpell(std::string name, ATarget const &atarget_ref); //mode01
};

#endif
