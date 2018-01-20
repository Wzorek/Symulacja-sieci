#ifndef WORKER_HPP_INCLUDED
#define WORKER_HPP_INCLUDED
#include "IPackageQueue.hpp"
#include "typy.hpp"
#include "IPackageReceiver.hpp"
#include "PackageSender.hpp"
#include <queue>
#include "PackageQueue.hpp"

class Worker : public IPackageReceiver, public PackageSender
{
private:
    ElementID id;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
    std::vector<Package> currentlyProcessedPackage;
public:
    Worker(ElementID, TimeOffset, IPackageQueue*);
    void receivePackage(Package _pack) override;
    std::vector<Package> viewQueue();
    void doWork();
    TimeOffset getProcessingDuration();
    Time getPackageProcessingStartTime();
    ReceiverType getReceiverType() override;
    ElementID getId() override;
};

#endif // WORKER_HPP_INCLUDED
