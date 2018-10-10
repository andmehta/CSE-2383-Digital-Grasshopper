/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler used: eclipse
 * program description:
 * 	This program defines the methods and constructors from the header file
 *
 */

#include "grasshopper.h"

//constructors
grasshopper::grasshopper(int k): kind(k)
{
	//1: kriket, 2: hopper, 3: locust

	//set stomach size with inputted kind
	switch(kind) {
	case 1: MAX = 3; //kriket
		break;
	case 2: MAX = 5; //hopper
		break;
	case 3: MAX = 9; //lokust
		break;
	}
}

grasshopper::grasshopper()
{
	kind = 2; //default is hopper
	MAX = 5;
}


//methods
bool grasshopper::eat(int food)
{
	//add food to stomach
	if(food > 3 || food < 1 || sum() + food > MAX)
	{
		return false;
	}
	else
	{
		stomach.push_back(food);
		return true;

	}
}

int grasshopper::excrete() //excrete last value
{
	if(stomach.empty())
	{
		throw "The stomach is empty";
	}

	//first item in the vector
	int excretion = stomach.front();


	//remove value from vector
	stomach.erase(stomach.begin());


	return excretion;


}

int grasshopper::vomit()
{
	if(stomach.empty())
	{
		throw "The stomach is empty";
	}


	//set return variable to back variable
	int puke = stomach.back();

	//remove the back variable from stomach vector
	stomach.pop_back();


	return puke;
}

unsigned int grasshopper::sum()
{
	int sum = 0;

	for(int i = 0; unsigned(i) < stomach.size(); i++)
	{
		sum += stomach.at(i);
	}

	return sum;
}
std::string grasshopper::status()
{
	if (stomach.empty())
	{
		return "EMPTY";
	}

	else if(sum() < MAX)
	{
		std::string contents = stomach_contents();

		return "partial stomach. contents: " + contents;
	}

	else
	{
		std::string contents = stomach_contents();

		return "FULL. contents: " + contents;
	}

	return "Broke";
}

std::string grasshopper::stomach_contents()
{
	std::string contents = "";
			for(int i = 0; unsigned(i) < stomach.size(); i++)
			{
				contents += std::to_string(stomach.at(i));
				contents += ", ";
			}

			//remove excess comma from string
			contents = contents.erase(contents.size() - 2);

	return contents;
}


//empty the current grasshopper's stomach
void grasshopper::reset()
{
	while(!stomach.empty())
	{
		stomach.pop_back();
	}
}


//test methods
int grasshopper::getsize()
{
	return stomach.size();
}

int grasshopper::getMAX()
{
	return MAX;
}

int grasshopper::getkind()
{
	return kind;
}
