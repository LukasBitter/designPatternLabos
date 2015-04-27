/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once
#include "Component.h"
#include <iostream>

/** \brief
* Abstract Leaf component class. Acts as a fulltime component while beeing specialized.
*/
class CLeaf :
    public CComponent
{
public:
    CLeaf() {};
    virtual ~CLeaf() {};
};
