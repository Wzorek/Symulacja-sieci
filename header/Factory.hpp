#ifndef FACTORY_HPP_INCLUDED
#define FACTORY_HPP_INCLUDED
#include "Worker.hpp"
#include "Storehouse.hpp"
#include "Ramp.hpp"
#include <list>
#include <vector>

class Factory{
private:
    std::list<Ramp> ramps;
   // std::list<Worker> workers;
    //std::list<Storehouse> storehouses;

public:
    std::vector<Ramp> getRamps();
    void addRamp(Ramp);
    void removeRamp(ElementID);

    std::vector<Worker> getWorkers();
    void addWorker(Worker);
    void removeWorker(ElementID);

    std::vector<Storehouse> getStorehouses();
    void addStorehouse(Storehouse);
    void removeStorehouse(ElementID);

    bool isConsistent();
};


#endif // FACTORY_HPP_INCLUDED
