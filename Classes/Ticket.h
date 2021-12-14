//
// Created by Ian on 28/11/2021.
//

#ifndef TP1_AED_TICKET_H
#define TP1_AED_TICKET_H
#include <list>
#include "Flight.h"
//#include "Passenger.h"

class Ticket {
private:
    int id; //esse "id" é o equivalente ao assento do mlk???????? se for melhor trocar o nome
    Flight flightAssocieted;
    //Passenger passengerAssocieted;
    bool luggageIncluded = false;

public:
    Ticket(int id, Flight flightAssocieted);
    int getID() const;
    void setID(int id);
    Flight getFlightAssocited() const;
    void setFlightAssociated(Flight flight);
    //Passenger getPassengerAssocieted();
    bool getLuggageStatus() const;
    void setLuggageIncluded();
};


#endif //TP1_AED_TICKET_H
