// Assignment5.cpp : Cesar Roncancio
//

#include <iostream>
using namespace std;
//function declaration
void towersOfHanoi(int rings, char fromPeg, char toPeg, char auxPeg);

int main()
{
	int rings = 0;
	cout << "Welcome to the Towers of Hanoi game!" << endl;
	cout << "We have 3 pegs(towers) and you choose the number of rings!" << endl;
	cout << "Please enter the number of rings we are going to be playing with:" << endl;
	cin >> rings;
	towersOfHanoi(rings, 'A', 'C', 'B');
   
}
//this function uses the algorithm that solves the Tower of Hanoi game which consists of 3 steps: 1- shifts n-1 rings from A to B 2-shifts last ring from A to C 3- shifts n-1 rings from B to C
void towersOfHanoi(int rings, char fromPeg, char toPeg, char auxPeg)
{
	if (rings == 0) {
		return;
	}
	//using the recurion by doing the pattern for the algorithm to solve the tower 
	towersOfHanoi(rings - 1, fromPeg, auxPeg, toPeg);
	cout << "Move ring " << rings << " from peg " << fromPeg << " to peg " << toPeg << endl;
	towersOfHanoi(rings - 1, auxPeg, toPeg, fromPeg);
}
