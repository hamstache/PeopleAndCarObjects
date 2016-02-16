#include <iostream>
using namespace std;

#include "Person.h"

#include "Student.h"
#include "Cars.h"




int main() {
    
    Person p("John Smith", "321 Wilson St.");
    
    Person q("John Smith", "123 Wilson St.");
    
    
    
    Student st1(p, "CSUF", "CS");
    
    Student st2(p, "CSUF", "EE");
    
    
    
    cout<<"p is: "<<p<<endl;
    
    cout<<"q is: "<<q<<endl;
    
    cout<<"p == q ? "<<(p == q)<<endl;
    
    
    
    cout<<"st1 is: "<<st1<<endl;
    
    cout<<"st2 is: "<<st2<<endl;
    
    cout<<"st1 == st2: "<<(st1 == st2)<<endl;
    
    
    
    cout<<"...done."<<endl;
    
    //cin.get();
    cout<<endl;
        
    Cars c1(2013, "Dodge", "Viper", 150, 0);
    
    cout<<c1<<endl;
    
    Cars c2(2012, "Ferrari", "458 Italia", 160, 0);
    
    cout<<c2<<endl;
    
    cout<<"Polizia! Hit the brakes!"<<endl;
    
    
    cout<<"Whew! That was a close one!"<<endl;
    
    cout<<"...done."<<endl;
    
    
    return 0;
    
}


