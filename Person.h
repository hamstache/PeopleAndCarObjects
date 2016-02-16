#ifndef _Person_h_
#define _Person_h_

#include <iostream>

#include <string>

using namespace std;



class Person {
    
public:
    
    Person();
    
    Person(const string& name, const string& address);
    
    Person(const Person& pOther);
    
    
    
    string name() const;
    
    string address() const;
    
    
    
    void name(const string& name);
    
    void address(const string& address);
    
    
    
    friend ostream& operator<<(ostream& os, const Person& p);
    
    bool operator==(const Person& pOther) const;
    
    bool operator!=(const Person& pOther) const;
    
    
    
private:
    
    string _name;
    
    string _address;
    
};

#endif

