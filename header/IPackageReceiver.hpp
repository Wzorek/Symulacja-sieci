#ifndef IPACKAGERECEIVER_HPP_INCLUDED
#define IPACKAGERECEIVER_HPP_INCLUDED

class IPackageReceiver {
    public:
        virtual void receivePackage(Package);
        virtual Package[] viewDepot();
        virtual ReceiverType getReceiverType();
        virtual ElementID getId();
};

#endif // IPACKAGERECEIVER_HPP_INCLUDED
