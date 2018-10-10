/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler used: eclipse
 * program description:
 * 	This program defines the methods and constructors header file
 *
 */

#ifndef GRASSHOPPER_H_
#define GRASSHOPPER_H_

#include <string>
#include <vector>

//grasshopper class
class grasshopper
{
private:
	int kind; //1: kriket, 2: hopper, 3: lokust
	unsigned int MAX; //stomach max size (determined and set at construction)
	std::vector <int> stomach;






public:
	//constructors
	grasshopper();
	grasshopper(int); //int refers to what kind of grasshopper

	//methods
	std::string status(); //returns string saying hungry or full, also contents of stomach
	std::string stomach_contents(); //returns a string of the contents

	bool eat(int); //eats inserted value, returns success or fail

	int vomit(); //returns most recent successful eat
	int excrete(); //returns first successful eat
	unsigned int sum(); //returns the sum of the stomach aka how full it is

	void reset(); //empties stomach


	//test methods
	int getsize();
	int getMAX();
	int getkind();


};



#endif /* GRASSHOPPER_H_ */
