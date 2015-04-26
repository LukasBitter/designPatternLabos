/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Apple.h"

CApple::CApple()
{
    Name = "Apple";
    HasSeed = true;
}
CApple::~CApple()
{
};

void CApple::Print()
{
    std::cout << Name;
}
bool CApple::IsWithSeed()
{
    return HasSeed;
}
