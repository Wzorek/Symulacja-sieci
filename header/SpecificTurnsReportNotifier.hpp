#ifndef SPECIFICTURNSREPORTNOTIFIER_HPP_INCLUDED
#define SPECIFICTURNSREPORTNOTIFIER_HPP_INCLUDED
#include <IReportNotifier.hpp>
#include <set>
class SpecificTurnsReportNotifier::public IReportNotifier{
private:
    std::set<Time> turns;
public:
    void SpecificTurnsReportNotifier(std::set<Time>);
    bool shouldGenerateReport(Time);
};

#endif // SPECIFICTURNSREPORTNOTIFIER_HPP_INCLUDED
