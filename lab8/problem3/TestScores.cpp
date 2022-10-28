#include "NegativeScore.h"
#include "TestScores.h"

//***********************************************
// Constructor                                  *
//***********************************************

TestScores::TestScores(int scoreArray[], int size)
{
	// Assign numScores.
	numScores = size;

	// Allocate memory for the array.
	scores = new int[size];

	// Copy the array.
	for (int index = 0; index < size; index++)
	{
		if (scoreArray[index] < 0 ||scoreArray[index] >100)
			throw NegativeScore(scoreArray[index]);
		else
			scores[index] = scoreArray[index];
	}
}

//********************************************************
// getAverage function                                   *
//********************************************************

double TestScores::getAverage() const
{
	int total = 0;

	for (int index = 0; index < numScores; index++)
	{
		total += scores[index];
	}
	return static_cast<double>(total) / numScores;
}