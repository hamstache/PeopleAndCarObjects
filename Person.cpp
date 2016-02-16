#include "Person.h"

#include "Student.h"



Person::Person()                                            : Person("no name", "no adress")                    {}

Person::Person(const string& name, const string& address)   : _name(name), _address(address)                    {}

Person::Person(const Person& pOther)                        : _name(pOther._name), _address(pOther._address)    {}



string Person::name() const                 {return _name;}

string Person::address() const              {return _address;}


    
void Person::name(const string& name)       {_name = name;}

void Person::address(const string& address) {_address = address;}



ostream& operator<<(ostream& os, const Person& p) {
    
    return os<<"Person[name = "<<p._name<<", address = "<<p._address<<"]";
    
}



bool Person::operator==(const Person& pOther) const {
    
    return _name    == pOther._name     &&
    
    _address == pOther._address;
    
}



bool Person::operator!=(const Person& pOther) const {
    
    return !(*this == pOther);
    
}

