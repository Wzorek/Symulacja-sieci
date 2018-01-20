#ifndef IPACKAGEQUEUE_HPP_INCLUDED
#define IPACKAGEQUEUE_HPP_INCLUDED
#include "IPackageDepot.hpp"
#include "typy.hpp"

class IPackageQueue{
public:
    virtual Package pop()=0;
    virtual QueueType getQueueType()=0;
};

#endif // IPACKAGEQUEUE_HPP_INCLUDED
