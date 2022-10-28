// Chapter 16, Programming Challenge 7: TestScores class
#include <iostream>
#include "TestScores.h"
#include "NegativeScore.h"
using namespace std;

// Constant for the number of test scores
const int NUM_SCORES = 5;

int main()
{
	try
	{
		// Create an array of valid scores.
		int myScores[NUM_SCORES] = { 88, 90, 93, 87, 99 };

		// Create a TestScores object.
		TestScores myTestScores(myScores, NUM_SCORES);

		// Display the average.
		cout << "The average score is "
			 << myTestScores.getAverage() << endl;

		// Create an array with an invalid score.
		int badScores[NUM_SCORES] = { 88, 90, 101, 87, 99 };

		// Create a TestScores object.
		TestScores badTestScores(badScores, NUM_SCORES);

		// Display the average.
		cout << "The average score is "
			 << badTestScores.getAverage() << endl;
	}
	catch(NegativeScore e)
	{
		cout << "An invalid score was found. The "
			 << "invalid score is " << e.getScore()
			 << endl;
	}

	return 0;
}