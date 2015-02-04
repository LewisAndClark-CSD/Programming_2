//ProgChallenge2.cpp : A program to findbatting averages.
//Author: Thomas Morrissey
//Collerated with Luke Gosnellll, Tyler Gurrea, and Jose Chica.
//Date: 02-03-2015


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int CharacterStat();

int CharacterStat(){
	string PlayerName = "";
	int PlayerTeam = 0;
	int NumberAtBat = 0;
	int Singles = 0;
	int Double = 0;
	int Triple = 0;
	int Homeruns = 0;
	double BattingAverage = 0.00;
	double Slugging = 0.00;
	cout << "What is the Players name? ";
	cin >> PlayerName;
	cout << "What is the player's team? ";
	cin >> PlayerTeam;
	cout << "How many times has this player been at bat? ";
	cin >> NumberAtBat;
	cout << "How many singles has this player had? ";
	cin >> Singles;
	cout << "How many doubles has this player had? ";
	cin >> Double;
	cout << "How many triples has this player had? ";
	cin >> Triple;
	cout << "How many Home Runs has this player had? ";
	cin >> Homeruns;
	BattingAverage = Singles + Double + Triple + Homeruns;
	BattingAverage = BattingAverage / NumberAtBat;
	Slugging = Singles + (Double * 2) + (Triple * 3) + (Homeruns * 4) / NumberAtBat;
	cout << "Player Name Batting Average Slugging percentage" << endl;
	cout << PlayerName << "         " << BattingAverage << "           " << Slugging << "%" << endl;
	return BattingAverage;
}
int main()
{
	char Exit = ' ';
	int NewPlayer = 0;
	while (Exit != 'n'){
		cout << "Do you wish to calulate a player's stats(y/n)?";
		cin >> Exit;
		if (Exit == 'y'){
			NewPlayer = CharacterStat();
		}
	}
	cout << "Goodbye.";
	return 0;
}

