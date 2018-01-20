#ifndef STOREHOUSE_HPP_INCLUDED
#define STOREHOUSE_HPP_INCLUDED
#include "IPackageReceiver.hpp"
#include "IPackageDepot.hpp"
#include "typy.hpp"
#include <vector>
#include "Package.hpp"

class Storehouse:public IPackageReceiver{
private:
    ElementID id;
    IPackageDepot* packageDepot;
public:
    Storehouse(ElementID);
    void receivePackage(Package);
    std::vector<Package> viewDepot();
    ReceiverType getReceiverType;
    ElementID getId();

};


#endif // STOREHOUSE_HPP_INCLUDED
