#ifndef PACKAGEQUEUE_HPP_INCLUDED
#define PACKAGEQUEUE_HPP_INCLUDED
#include <deque>
#include <functional>
#include "typy.hpp"
#include "Package.hpp"

class PackageQueue : public IPackageQueue {
private:
    QueueType packageQueueType;
    std::deque<Package> _deque;
    std::function<Package()> _popFuntion;
public:
    void PackageQueue(QueueType);
    void push(Package);
    Package pop();
    std::deque<Package> view();
    QueueType getQueueType();
    bool isEmpty();
    int size();

};

#endif // PACKAGEQUEUE_HPP_INCLUDED
