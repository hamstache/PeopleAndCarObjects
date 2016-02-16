#include "Person.h"



#include <iostream>

#include <string>

using namespace std;



class Student: public Person {
    
public:
    
    Student();
    
    Student(const Person& p, const string& schoolName, const string& major);
    
    
    
    string schoolName() const;
    
    string major() const;
    
    
    
    void schoolName(const string& schoolName);
    
    void major(const string& major);
    
    
    
    friend ostream& operator<<(ostream& os, const Student& st);
    
    bool operator==(const Student& stOther) const;
    
    bool operator!=(const Student& stOther) const;
    
    
    
private:
    
    string _schoolName;
    
    string _major;
    
};

