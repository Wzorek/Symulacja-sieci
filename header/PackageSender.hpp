#ifndef PACKAGESENDER_HPP_INCLUDED
#define PACKAGESENDER_HPP_INCLUDED
#include <ReceiverPreferences.hpp>
class PackageSender{
private:
    std::vector<Package> sendingBuffer;
protected:
    ReceiverPreferences receiverPreferences;
public:
    void PackageSender(ElementID);
    void sendPackage();
    void Package[] viewSendingBudder();
};

#endif // PACKAGESENDER_HPP_INCLUDED
