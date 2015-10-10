#include <iostream>
using namespace std;
class Distance
{

friend Distance operator+(const Distance&, const Distance&);
friend Distance operator-(const Distance&, const Distance&);


friend bool operator<(const Distance&, const Distance&);
friend bool operator>(const Distance&, const Distance&);
friend bool operator<=(const Distance&, const Distance&);
friend bool operator>=(const Distance&, const Distance&);
friend bool operator==(const Distance&, const Distance&);
friend bool operator!=(const Distance&, const Distance&);

public:
Distance();
Distance(double);


void 	set_in_santimeter(double) ;
double  get_in_santimeter() ;
void 	set_in_meter(double) ;
double  get_in_meter();
void 	set_in_feet(double) ;
double  get_in_feet() ;
void 	set_in_yards(double);
double  get_in_yards() ;

private:
double dist;

};

