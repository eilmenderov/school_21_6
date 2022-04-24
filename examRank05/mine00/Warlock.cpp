#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string tittle) {

    this->name = name;
    this->title = tittle;
    std::cout << this->name << ": This looks like another boring day.\n";
}

void Warlock::introduce() const {

    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

Warlock::~Warlock() { std::cout << this->name << ": My job here is done!\n"; }

int main()
{
    Warlock const richard("Richard", "Mistress of Magma");
    richard.introduce();
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

    Warlock* jack = new Warlock("Jack", "the Long");
    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;

    return (0);
}