#include "Student.h"


Student::Student()

: Student(Person(), "no schoolName", "no major")    {}

Student::Student(const Person& p, const string& schoolName, const string& major)

: Person(p), _schoolName(schoolName), _major(major) {}



string Student::schoolName() const                      {return _schoolName;}

string Student::major() const                           {return _major;}



void Student::schoolName(const string& schoolName)      {_schoolName = schoolName;}

void Student::major(const string& major)                {_major = major;}



ostream& operator<<(ostream& os, const Student& st) {
    
    return os<<"Student["<<"school name = "<<st._schoolName<<", "<<"major = "<<st._major<<", "<<dynamic_cast<const Person&>(st)<<"]";
    
}



bool Student::operator==(const Student& stOther) const {
    
    return dynamic_cast<const Person&>(*this) == dynamic_cast<const Person&>(stOther) &&
    
    _schoolName                               == stOther._schoolName                  &&
    
    _major                                    == stOther._major;
    
}



bool Student::operator!=(const Student& stOther) const {
    
    return !(*this == stOther);
    
}

