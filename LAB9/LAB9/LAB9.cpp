// LAB9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bazowa.h"
#include "pochodna.h"

int main()
{
	bazowa b;
	pochodna p;

	b.pochodze();
	p.pochodze();

	bazowa * bptr = &p;
	bptr->pochodze();

	return 0;
}