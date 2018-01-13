#ifndef WORKER_HPP_INCLUDED
#define WORKER_HPP_INCLUDED
#include <vector>
#include <IPackageReceiver.hpp>
#include <IPackageQueue.hpp>

class Worker::public IPackageReceiver, public PackageSender{
private:
    ElementID id;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
    std::vector<Package> currentlyProcessedPackage;
public:
    Worker(ElementID, TimeOffset, IPackageQueue*);
    void receivePackage(Package);
    Package[] viewQueue();
    doWork();
    TimeOffset getProcessingDuration()
    Time getPackageProcessingStartTime();
    ReceiverType getReceiverType();
    ElementID getId();
};

#endif // WORKER_HPP_INCLUDED
