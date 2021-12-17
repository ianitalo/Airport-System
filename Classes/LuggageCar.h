#ifndef TP1_AED_LUGGAGECAR_H
#define TP1_AED_LUGGAGECAR_H

#include "Luggage.h"
#include <list>
#include "Airport.h"

class LuggageCar {
private:
    int numCarriages, stacksPerCarriage, luggagesPerStack;
    Airport airport;
    list<list<stack<Luggage>>> luggageInCar;
    list<stack<Luggage>> carruagens;
    stack<Luggage> pilhas;
    int capacity, availability;
public:
    LuggageCar(Airport airport,int numCarriages, int stacksPerCarriage, int luggagesPerStack);
    void setLuggageOutCar(list<Luggage> Luggages);
    Airport getAirport(const Airport& airport) const;
    list<Luggage> setLuggageInCar(list<Luggage> &luggageOutCar);
};


#endif //TP1_AED_LUGGAGECAR_H
