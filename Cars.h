#include <iostream>

#include <string>

using namespace std;



class Cars {
    
public:
    
    Cars();
    
    Cars(const int& year, const string& make, const string& model, const double& speed, const double& accel);
    
    Cars(const Cars& other);
    
    
    
    int year() const;
    string make() const;
    string model() const;
    double speed() const;
    double accel() const;
    
    void year(const int& year);
    void make(const string& make);
    void model(const string& model);
    void speed(const double& speed);
    void accel(const double& accel);
    
    void accelerateBy(double deltaV = 5.0);
    void brakeBy(double deltaV = 5.0);
    
    friend ostream& operator<<(ostream& os, const Cars& c);
    
    bool operator==(const Cars& other) const;
    bool operator!=(const Cars& other) const;
    
    
private:
    int _year;
    string _make, _model;
    double _speed, _accel;
    
};