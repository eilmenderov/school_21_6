#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string tittle) {

    this->name = name;
    this->title = tittle;
    std::cout << this->name << ": This looks like another boring day.\n";
}

void    Warlock::introduce() const {

    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

Warlock::~Warlock() {

    std::cout << this->name << ": My job here is done!\n";
    // std::vector<ASpell *>::iterator it_begin = this->arr.begin();   //mod01
    // std::vector<ASpell *>::iterator it_end = this->arr.end();       //mod01
    // while (it_begin != it_end){                                     //mod01
    //     delete *it_begin;                                           //mod01
    //     ++it_begin;                                                 //mod01
    // }                                                               //mod01
    // this->arr.clear();                                              //mod01
}

//mod01
void Warlock::learnSpell(ASpell *aspell_ptr) {

    book.learnSpell(aspell_ptr);
    // std::vector<ASpell *>::iterator it_begin = this->arr.begin();
    // std::vector<ASpell *>::iterator it_end = this->arr.end();
    // if (aspell_ptr) {
    //     while (it_begin != it_end) {
    //         if ((*it_begin)->getName() == aspell_ptr->getName())
    //             return ;
    //         ++it_begin;
    //     }
    //     this->arr.push_back(aspell_ptr->clone());
    // }
}

//mod01
void    Warlock::forgetSpell(std::string name) {

    book.forgetSpell(name);
    // std::vector<ASpell *>::iterator it_begin = this->arr.begin();
    // std::vector<ASpell *>::iterator it_end = this->arr.end();
    // while (it_begin != it_end) {
    //     if ((*it_begin)->getName() == name) {
    //         delete *it_begin;
    //         this->arr.erase(it_begin);
    //         return ;
    //     }
    //     ++it_begin;
    // }
}

//mod01
void    Warlock::launchSpell(std::string name, ATarget const &atarget_ref) {

    ASpell *temp = book.createSpell(name);
    if (temp)
        temp->launch(atarget_ref);
    // std::vector<ASpell *>::iterator it_begin = this->arr.begin();
    // std::vector<ASpell *>::iterator it_end = this->arr.end();
    // while (it_begin != it_end) {
    //     if ((*it_begin)->getName() == name) {
    //         (*it_begin)->launch(atarget_ref);
    //         return ;
    //     }
    //     it_begin++;
    // } 
}

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}

