#ifndef IPACKAGERECEIVER_HPP_INCLUDED
#define IPACKAGERECEIVER_HPP_INCLUDED
#include "Package.hpp"

class IPackageReceiver {
    public:
        virtual void receivePackage(Package) = 0;
        virtual std::vector<Package> viewDepot() = 0;
        virtual ReceiverType getReceiverType() = 0;
        virtual ElementID getId() = 0;
};

#endif // IPACKAGERECEIVER_HPP_INCLUDED
