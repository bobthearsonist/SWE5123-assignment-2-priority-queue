// Example Driver File
// Author: David Stabler

#include "pqqueue.h"
#include "PriorityString.h"
#include <iostream>
#include <string>

using namespace std;	// required for string

void main()
{

	string i="hi there";
 	PriorityString ps("String with Priority 5", 5);
	pqqueue<PriorityString> PQ;

	PQ.push( PriorityString("Test String 1", 1) );
	PQ.push( ps );
	PQ.push( PriorityString("Test String 2", 2), 2);
	cout << i << endl;
	cout << ps << endl;
	cout << PQ.size() << endl;


	
}
