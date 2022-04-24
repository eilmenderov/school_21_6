#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>

# include "ASpell.hpp"      //mod01
# include "ATarget.hpp"     //mod01
# include "SpellBook.hpp"   //mod02

class Warlock {

    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);

        //mod02 std::vector<ASpell *> arr; //mod01
        SpellBook book;     //mod02

    public:
        Warlock(std::string name, std::string tittle);
        ~Warlock();
        std::string const &getName() const;
        std::string const &getTitle() const;

        void    introduce() const;
        void    setTitle(std::string const &title);

        void learnSpell(ASpell *aspell_ptr);                            //mod01
        void forgetSpell(std::string name);                             //mod01
        void launchSpell(std::string name, ATarget const &atarget_ref); //mod01
};

#endif
