#ifndef PACKAGESENDER_HPP_INCLUDED
#define PACKAGESENDER_HPP_INCLUDED
#include "ReceiverPreferences.hpp"
#include "typy.hpp"

class PackageSender{
private:
    std::vector<Package> sendingBuffer;
protected:
    ReceiverPreferences receiverPreferences;
public:
    PackageSender(ElementID _id);
    void sendPackage();
    std::vector<Package> viewSendingBudder();
};

#endif // PACKAGESENDER_HPP_INCLUDED
