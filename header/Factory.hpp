#ifndef FACTORY_HPP_INCLUDED
#define FACTORY_HPP_INCLUDED
#include "Worker.hpp"
#include "Storehouse.hpp"
#include "Ramp.hpp"
#include <list>
class Factory{
private:
    std::list<Ramp> ramps;
    std::list<Worker> workers;
    std::list<Storehouse> storehouses;
public:
    Ramp[] getRamps();
    void addRamp(ramp);
    void removeRamp(ElementID);

    Worker[] getWorkers();
    void addWorker(Worker);
    void removeWorker(ElementID);

    Storehouse[] getStorehouses();
    void addStorehouse(Storehouse);
    void removeStorehouse(ElementID);

    bool isConsistent();
};


#endif // FACTORY_HPP_INCLUDED
