/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#include "Strawberry.h"

CStrawberry::CStrawberry()
{
    Name = "Strawberry";
    HasSeed = false;
}

CStrawberry::~CStrawberry()
{
};

void CStrawberry::Print()
{
    std::cout << Name;
}

bool CStrawberry::IsWithSeed()
{
    return HasSeed;
}
