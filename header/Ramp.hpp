#ifndef RAMP_HPP_INCLUDED
#define RAMP_HPP_INCLUDED

class Ramp:class PackageSender{
private:
    ElementID id;
    void TimeOffset deliveryInterval;
    void Ramp(ElementID, TimeOffset);
    void deliverGoods(Time);
    TimeOffset getDelivertInterval;
    ElementID getId();
};

#endif // RAMP_HPP_INCLUDED
