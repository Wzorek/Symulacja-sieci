#ifndef IPACKAGEDEPOT_HPP_INCLUDED
#define IPACKAGEDEPOT_HPP_INCLUDED

class IPackageDepot{
public:
    virtual void push(Package);
    virtual bool empty();
    virtual int size();
    virtual Package* view();
};

#endif // IPACKAGEDEPOT_HPP_INCLUDED
