#include "Service.h"
using namespace std;

Service::Service(char serviceType, struct date date, string accountable)
{
    this->serviceType = serviceType;
    this->date = date;
    this->accountable = accountable; //responsável
}
char Service::getserviceType() const {
    return serviceType;
}
 date Service::getdate() const {
    return date;
}
string Service::getaccountable() const {
    return accountable;
}