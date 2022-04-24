#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class   BrickWall: public ATarget {

    public:
        BrickWall();
        ~BrickWall();

        virtual ATarget *clone() const {
            return (new BrickWall());
        }
};

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::~BrickWall() {}

# endif
