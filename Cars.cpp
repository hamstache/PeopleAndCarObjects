#include "Cars.h"

template<typename T>
T min(T m, T n )  {return (m<n ? m: n);}

template<typename T>
T max(T m, T n) {return m> n ? m: n;}


Cars::Cars()

: Cars(0, "no make", "no model", 0, 0)        {}

Cars::Cars(const int& year, const string& make, const string& model, const double& speed, const double& accel)
: _year(year), _make(make), _model(model), _speed(speed), _accel(accel)         {}

Cars::Cars(const Cars& other)
: _year(other._year), _make(other._make), _model(other._model), _speed(other._speed), _accel(other._accel)  {}



int Cars::year() const {return _year;}

string Cars::make() const               {return _make;}
string Cars::model() const              {return _model;}
double Cars::speed() const              {return _speed;}
double Cars::accel() const              {return _accel;}



void Cars::year(const int& year)        {_year = year;}
void Cars::make(const string& make)     {_make = make;}
void Cars::model(const string& model)   {_model = model;}
void Cars::speed(const double& speed)   {_speed = speed;}
void Cars::accel(const double& accel)   {_accel = accel;}

void Cars::brakeBy(double deltaV){
    if (_speed > 0) {
        _speed = ::min(_speed + deltaV, 0.0 );
        
    }else {
        _speed = ::max(_speed - deltaV, 0.0);
    }
}
void Cars::accelerateBy(double deltaV){
    _speed += deltaV;
}







ostream& operator<<(ostream& os, const Cars& c) {
    
    return os<<"Car[year="<<c._year<<", make="<<c._make<<", model="<<c._model<<", speed="<<c._speed<<"]";
    
}



bool Cars::operator==(const Cars& other) const {
    
    return _year  == other._year  &&
    
    _make  == other._make  &&
    
    _model == other._model &&
    
    _speed == other._speed;
    
}



bool Cars::operator!=(const Cars& other) const {
    
    return !(*this == other);
    
}