#ifndef PACKAGE_HPP_INCLUDED
#define PACKAGE_HPP_INCLUDED
#include "typy.hpp"

class Package{
private:
    ElementID id;
    ElementID packageCounter;
public:
    int getid();
    Package();
};


#endif // PACKAGE_HPP_INCLUDED
