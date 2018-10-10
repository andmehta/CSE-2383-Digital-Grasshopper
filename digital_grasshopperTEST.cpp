/*
 * Student Name: Andrew Mehta
 * Student NetID: am3258
 * Compiler used: eclipse
 * program description:
 * 	This program tests and displays the implementation of
 * 		the digital grasshopper and the UI
 *
 */

#include <iostream>
#include <string>
#include "grasshopper.h"



using std::cout;
using std::cin;
using std::endl;
using std::string;

//function prototypes
void mainMenu();
void options();
void train();
void eat();
void try_vomit();
void try_excrete();
void report();
void reset();


//global object variable
grasshopper grasshopper_test;


int main()
{
	//main menu variables
		int type;
		//title
		cout << "Welcome to the digital grasshopper program \n" << endl;


		//first ask what kind of grasshopper user wants to train first
		cout << "First pick what kind of grasshopper you'd like to train \n 1. kricket \n 2. hopper \n 3. lokust " << endl;
		cout << "? ";
		cin >> type;

		grasshopper new_jiminy(type);
		grasshopper_test = new_jiminy;

		mainMenu(); //activate main menu

}

void mainMenu()
{
	int option = 0;

	while(option != 7) //keep asking questions until user says exit
	{
		//ask users for what they'd like to do
		cout << "\nNow what would you like to do?" << endl;
		options();
		cout << "? ";
		cin >> option;

		switch (option){
		case 1: train();
			break;
		case 2: eat();
			break;
		case 3: try_excrete();
			break;
		case 4: try_vomit();
			break;
		case 5: report();
			break;
		case 6: reset();
			break;
		case 7: break;
		}
	}
}

//display the options
void options()
{
	cout << " 1. train 2. eat 3. excrete 4. vomit 5. report 6. reset 7. exit" << endl;

}

//replace the original global grasshopper with a new one
void train()
{
	bool yes_or_no;
	cout << "are you sure you want to delete your previous grasshopper (0 = no, 1 = yes)? ";
	cin >> yes_or_no;

	if(!yes_or_no)
	{
		cout << "OK";
		return; //to end the function here
	}

	int t;
	cout << "\nWhat kind of grasshopper would you like? \n 1. kricket \n 2. hopper \n 3. lokust \n?";
	cin >> t;


	grasshopper grasshopper(t);

	grasshopper_test = grasshopper;
}

//try to excrete, if it fails, throw exception that stomach must be empty
void try_excrete()
{
	try{
		cout << grasshopper_test.excrete();
		} catch(char const* e1){
			cout << e1 << endl;
		}
}

//try to vomit, if it fails, throw exception that stomach must be empty
void try_vomit()
{
	try{
	cout << grasshopper_test.vomit();
	} catch(char const* e1){
		cout << e1 << endl;
	}
}

//make a string, and print that string that contains:
//1. the status of the stomach, and if it has food, the members
void report()
{
	string x = grasshopper_test.status();

	cout << x << endl;
}

//first ask user if they for sure want to reset the grasshoppers stomach
//second if yes, reset the stomach to empty
void reset()
{
	//local variable for yes/no question
	bool yes_or_no;


	cout << "Are you sure (0 = no, 1 = yes) ?";
	cin >> yes_or_no;

	if(yes_or_no)
	{
		grasshopper_test.reset();

		cout << "stomach is empty" << endl;
	}
}

//first prompt user to pick the type of food they want to eat
//second state whether the eat was successful or not
void eat()
{
	//local answer variable
	int answer;


	cout << "What is your grasshopper eating? \n 1. grass \n 2. seeds \n 3. bugs " << endl;
	cout << "? ";
	cin >> answer;

	if(grasshopper_test.eat(answer))//if eat is successful
		{
		cout << "he ate the food" << endl;
		}
	else
	{
		cout << "he can't eat that" << endl;
	}

}

