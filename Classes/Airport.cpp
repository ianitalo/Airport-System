#include "Airport.h"

Airport::Airport(string name, string initials)
{
    this->name = name;
    this->initials = initials;
}
bool Airport::addTransport(Transport transport){
    //listTransp.push_back(transport);
    return transports.insert(transport);
}
const string Airport::getName() const {
    return name;
}
const string Airport::getInitials() const {
    return initials;
}
const BST<Transport>& Airport::getTransports() const {
    return transports;
}

bool Airport::deleteTransport(Transport transport)
{
    return transports.remove(transport);
}

Transport Airport::getClosestTransport() const //tlvz tenha q mudar o nome dessa classe se a gnt escolhelr mudar o sort o transport
{
    return transports.findMin();
}

void Airport::setInitials(string initials)
{
    this->initials = initials;
}

void Airport::setName(string name)
{
    this->name = name;
}

bool Airport::operator==(const Airport& a) const{
    return initials == a.getInitials();
}
ostream& operator<<(ostream& os , const Airport& air)
{
    os << air.getName() << " - " << air.getInitials();
    return os;
}

