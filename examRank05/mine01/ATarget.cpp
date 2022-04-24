# include "ATarget.hpp"

ATarget &ATarget::operator=(ATarget const &other) {

    this->type = other.type;
    return (*this);
}

void ATarget::getHitBySpell(ASpell const &aspell_ref) const {

    std::cout << this->type << " has been " << aspell_ref.getEffects() << "!\n";
}
