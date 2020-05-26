#include<iostream>
#include<MORSE.hpp>
#include<MORSE_STRING.hpp>
using namespace std;

main()
{
	S_M obj;
	obj.GET();
	obj.Convert();
	cout<<endl<<endl;

    M_S obj1;
    obj1.GET();
    obj1.M_SConvert();
	return 0;
}
