#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {

    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);

    public:
        Warlock(std::string name, std::string tittle);
        ~Warlock();
        std::string const &getName() const;
        std::string const &getTitle() const;

        void    introduce() const;
        void    setTitle(std::string const &title);
};

#endif
