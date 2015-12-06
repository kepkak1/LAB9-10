// LAB10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "szablon.h"
using namespace std;

template <typename T> void add(T a, T b)
{
	cout << "\t " << a << " + " << b <<" = ";
	a = a + b;
	cout << a<<endl;
}

template <typename T> void modulo(T a, T b)
{
	cout << "\t" << a << " % " << b<<" = ";
	a = a%b;
	cout << a<<endl;
}

int main()
{
	
	cout << "Example 1(int,double)";
	szablon <int, double> ex1(70, 0.0144);
	ex1.wyswietl();

	cout << "\nExample 2(string,int)";
	szablon <string, int> ex2("napis", 70);
	ex2.wyswietl();

	cout << "\nExample 3(string,double)";
	szablon <string, double> ex3("napis", 0.0144);
	ex3.wyswietl();



	cout << "\n\tDzialania na roznych typach zmiennych\n"; 

	add<string>("Programowanie", "Obiektowe");

	add<double>(0.144, -1.7014);

	modulo<int>(10, 7);



	return 0;
}

