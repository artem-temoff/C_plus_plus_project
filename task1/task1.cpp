#include <iostream>
#include "task1.h"
using namespace std;

Distance::Distance()
{
	set_in_meter(0);
}
Distance::Distance(double d)
{
	set_in_meter(d);
}


 void Distance::set_in_meter(double i) 
{
 dist=i;
}
 double Distance::get_in_meter()
{
  return dist;
}


void Distance::set_in_santimeter(double i)
{
 dist=i/10;
}
double Distance::get_in_santimeter()
{
  return dist*10;
}

void Distance::set_in_feet(double i)
{
 dist=i/0.3048;
}
double Distance::get_in_feet()
{
  return dist*0.3048;
}

void Distance::set_in_yards(double i)
{
 dist=i/0.9144;
}
double Distance::get_in_yards()
{
  return dist*0.9144;
}




Distance operator+( Distance& x,  Distance& y)
{
	Distance *temp;
	temp = new Distance((x.get_in_meter() + y.get_in_meter()));

	return *temp;
}

Distance operator-( Distance& x,  Distance& y)
{
	Distance *temp;
	temp = new Distance((x.get_in_meter() - y.get_in_meter()));

	return *temp;
}

bool operator<( Distance& x,Distance& y)
{
	if (x.get_in_meter() < y.get_in_meter())
	{
		return true;
	}
	return false;
}
bool operator>( Distance& x,  Distance& y)
{
if (x.get_in_meter() > y.get_in_meter())
	{
		return true;
	}
	return false;
}
bool operator<=( Distance& x,  Distance& y)
{
return !(y < x);if (x.get_in_meter() <= y.get_in_meter())
	{
		return true;
	}
	return false;
}
bool operator>=( Distance& x,  Distance& y)
{
if (x.get_in_meter() >= y.get_in_meter())
	{
		return true;
	}
	return false;
}
bool operator==( Distance& x,  Distance& y)
{
if (x.get_in_meter() == y.get_in_meter())
	{
		return true;
	}
	return false;
}
bool operator!=( Distance& x,  Distance& y)
{
if (x.get_in_meter() != y.get_in_meter())
	{
		return true;
	}
	return false;
}

