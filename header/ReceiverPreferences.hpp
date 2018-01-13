#ifndef RECEIVERPREFERENCES_HPP_INCLUDED
#define RECEIVERPREFERENCES_HPP_INCLUDED
#include <map>
#include <utility>

class ReceiverPreferences {
`   private:
        std:map <IPackageReceiver*, double> probabilities;
    public:
        std:map <IPackageReceiver*, double> getPreferences();
        void setPreferences(std:map <IPackageReceiver*, double>);
        void addReceiver(IPackageReceiver*);
        void addReceiverWithProbability(IPackageReceiver*, double);
        void removeReceiver(IPackageReceiver*);
        IPackageReceiver* drawREceiver(double);
        std:pair<IPackageReceiver*,double>[] view();
};
#endif // RECEIVERPREFERENCES_HPP_INCLUDED
