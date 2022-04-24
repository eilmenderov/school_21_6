# include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) {

    this->name = name;
    this->effects = effects;
}

ASpell &ASpell::operator=(ASpell const &other) {

    this->name = other.name;
    this->effects = other.effects;
    return (*this);
}

void ASpell::launch(ATarget const &atarget_ref) const { atarget_ref.getHitBySpell(*this); }