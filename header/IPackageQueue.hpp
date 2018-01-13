#ifndef IPACKAGEQUEUE_HPP_INCLUDED
#define IPACKAGEQUEUE_HPP_INCLUDED
#include <IPackageDepot.hpp>
class IPackageQueue{
public:
    virtual Package pop();
    virtual QueueType getQueueType;
};

#endif // IPACKAGEQUEUE_HPP_INCLUDED
