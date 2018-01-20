#ifndef IPACKAGEDEPOT_HPP_INCLUDED
#define IPACKAGEDEPOT_HPP_INCLUDED
#include "Package.hpp"
#include <vector>

class IPackageDepot{
public:
    virtual void push(Package) = 0;
    virtual bool empty() = 0;
    virtual int size() = 0;
    virtual std::vector<Package> view() = 0;
};

#endif // IPACKAGEDEPOT_HPP_INCLUDED
