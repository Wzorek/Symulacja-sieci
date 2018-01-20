#ifndef RAMP_HPP_INCLUDED
#define RAMP_HPP_INCLUDED
#include "typy.hpp"

class Ramp: public PackageSender{
private:
    ElementID id;
    TimeOffset deliveryInterval();
    Ramp(ElementID, TimeOffset);
    void deliverGoods(Time);
    TimeOffset getDelivertInterval;
    ElementID getId();
};

#endif // RAMP_HPP_INCLUDED
