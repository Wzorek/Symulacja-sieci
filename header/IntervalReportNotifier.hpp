#ifndef INTERVALREPORTNOTIFIER_HPP_INCLUDED
#define INTERVALREPORTNOTIFIER_HPP_INCLUDED
#include <IReportNotifier.hpp>
class IntervalReportNotifier::public IReportNotifier
{
private:
    TimeOffset interval;
public:
    void IntervalReportNotifier(TimeOffset);
    bool shouldGenerateReport(Time);
};


#endif // INTERVALREPORTNOTIFIER_HPP_INCLUDED
