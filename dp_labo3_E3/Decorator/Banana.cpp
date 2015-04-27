/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Banana.h"

CBanana::CBanana()
{
    Name = "Banana";
    HasSeed = false;
}

CBanana::~CBanana()
{
};

void CBanana::Print()
{
    std::cout << Name;
}

bool CBanana::IsWithSeed()
{
    return HasSeed;
}

