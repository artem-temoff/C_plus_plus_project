#include <iostream>
#include "task1.h"
using namespace std;

int main()
{
Distance d1(10), d2(50);

if(d1 > d2){ cout << "d1 > d2" <<endl;
}
		else{ cout << "d1 < 2" <<endl;
	}
cout << "sum = " 		<< (d1+d2).get_in_santimeter() << " in santimeter" <<endl;	
cout << "difference = " << (d1-d2).get_in_yards()      << " in yards"      <<endl;

return 0;
}
