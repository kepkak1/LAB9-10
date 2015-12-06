#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class szablon
{
public:
	szablon(T1 a, T2 b) : zmienna1(a), zmienna2(b)
	{
	}

	~szablon()
	{
	}

	T1 zmienna1;
	T2 zmienna2;

	void wyswietl()
	{
		cout << "\nzmienna1: \n" << zmienna1 << endl;
		cout << "\nzmienna2: \n" << zmienna2 << endl;
	}
};
