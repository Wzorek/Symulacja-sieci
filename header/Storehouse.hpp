#ifndef STOREHOUSE_HPP_INCLUDED
#define STOREHOUSE_HPP_INCLUDED
#include <IPackageReceiver.hpp>
#include <IPackageDepot.hpp>
enum ReceiverType{WORKER, STOREHOUSE};

class Storehouse::public IPackageReceiver{
private:
    ElementID id;
    IPackageDepot* packageDepot;
public:
    void Storehouse(ElementID);
    void receivePackage(Package);
    Package[] viewDepot();
    ReceiverType getReceiverType;
    ElementID getId();

};


#endif // STOREHOUSE_HPP_INCLUDED
