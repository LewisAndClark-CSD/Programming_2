// ProgChallenge2.cpp : Defines the entry point for the console application.
//Author: Thomas Morrissey
//Collerated with Luke Gosnellll, Tyler Gurrea, and Jose Chica.
//Date: 02-03-2015


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int PizzaCost(char SecondPizza, string FirstSize, string SecondSize, int FirstTopping, int SecondToppings);

int PizzaCost(char SecondPizza, string FirstSize, string SecondSize, int FirstTopping, int SecondToppings)
{
	double TotalCost = 0.00;
	double SizeTotal = 0.00;
	int ToppingsTotal = 0;
	double Toppings = 0.00;
	if (SecondPizza == 'y'){
		if (SecondSize == "Large"){
			SizeTotal = 15.95;
		}
		else if (SecondSize == "Medium"){
			SizeTotal = 12.95;
		}
		else{
			SizeTotal = 10.95;
		}
	}
	if (FirstSize == "Large"){
		SizeTotal = SizeTotal + 15.95;
	}
	else if (FirstSize == "Medium"){
		SizeTotal = SizeTotal + 12.95;
	}
	else{
		SizeTotal = SizeTotal + 10.95;
	}
	ToppingsTotal = FirstTopping + SecondToppings;
	Toppings = ToppingsTotal*1.25;
	TotalCost = SizeTotal + Toppings;
	return TotalCost;
}

int main()
{
	string CustomerName = " ";
	char SecondPizza = ' ';
	string FirstSize = " ";
	string SecondSize =" ";
	char AddToppings = ' ';
	char AddToppingSecond = ' ';
	int FirstTopping = 0;
	int SecondTopping = 0;
	string FirstShape = "";
	string SecondShape = "";
	string FirstCrust = "";
	string SecondCrust = "";
	double Total = 0.00;
	cout << "Would you like a second pizza? (y/n) ";
	cin >> SecondPizza;
	if (SecondPizza == 'y'){
		cout << "For your first Pizza:" << endl;}
	cout << "Pizza Sizes:\n     1-Large\n    2-Medium:\n    3-Small\nYour Selection:";
	cin >> FirstCrust;
	cout << "Would you like toppings?(y/n)";
	cin >> AddToppings;
	if (AddToppings == 'y'){
		cout << "How many toppings would you like? ";
		cin >> FirstTopping;}
	cout << "Pizza Shapes Available:\n    -Round\n     -Square\nWhat shape would you like for your pizza? ";
	cin >> FirstShape;
	cout << "Pizza Crusts Available:\n    -Thick\n      -Thin\nWhat Crust would you like to eat? ";
	cin >> FirstCrust;
	if (SecondPizza == 'n'){
		Total = PizzaCost(SecondPizza, FirstSize, SecondSize, FirstTopping, SecondTopping);
		cout << "Customer Name: " << CustomerName << endl;
		cout << "Pizza Order:" << endl;
		cout << "Pizza Size: " << FirstSize << endl;
		cout << "Topping Cost" << endl;
		cout << "Per Topping $ 1.25 " << FirstTopping << endl;
		cout << "Pizza Shape: " << FirstShape;
		cout << "Pizza Crust: " << FirstCrust;
		cout << "Total: " << Total << endl;
	}
	else{
		cout << "For your second pizza: " << endl;
		cout << "Pizza Sizes:\n     1-Large\n    2-Medium:\n    3-Small\nYour Selection:";
		cin >> SecondCrust;
		cout << "Would you like toppings?(y/n)";
		cin >> AddToppingSecond;
		if (AddToppings == 'y'){
			cout << "How many toppings would you like? ";
			cin >> SecondTopping;
		}
		cout << "Pizza Shapes Available:\n    -Round\n     -Square\nWhat shape would you like for your pizza? ";
		cin >> SecondShape;
		cout << "Pizza Crusts Available:\n    -Thick\n      -Thin\nWhat Crust would you like to eat? ";
		cin >> SecondCrust;
		Total = PizzaCost(SecondPizza, FirstSize, SecondSize, FirstTopping, SecondTopping);
		cout << "Customer Name: " << CustomerName << endl;
		cout << "Pizza Order:" << endl;
		cout << "Pizza one:" << endl;
		cout << "Pizza Size: " << FirstSize << endl;
		cout << "Topping Cost" << endl;
		cout << "Per Topping $ 1.25 " << FirstTopping << endl;
		cout << "Pizza Shape: " << FirstShape << endl;
		cout << "Pizza Crust: " << FirstCrust << endl;
		cout << "Pizza Two: " << endl;
		cout << "Pizza Size: " << SecondSize << endl;
		cout << "Topping Cost" << endl;
		cout << "Per topping $1.25 " << SecondTopping << endl;
		cout << "Pizza Shape: " << SecondShape;
		cout << "Pizza Crust: " << SecondCrust;
		cout << "Total: " << Total << endl;
	}
	return 0;
}

