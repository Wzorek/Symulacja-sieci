#ifndef PACKAGEQUEUE_HPP_INCLUDED
#define PACKAGEQUEUE_HPP_INCLUDED
#include <deque>
#include <functional>
class PackageQueue{
private:
    PackageQueueTypejj queueType;
    std::deque<Package> deque;
    std::function<Package()> _popFuntion;
public:
    void PackageQueue(PackageQueueType);
    void push(Package);
    Package pop();
    Package[] view();
    QueueType getQueueType();
    bool isEmpty();
    int size();

};

#endif // PACKAGEQUEUE_HPP_INCLUDED
