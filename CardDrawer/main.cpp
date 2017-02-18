//William Todd
//CS3304-05
//9-28-16
//Question 24A
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main()
{
const int NUMBER_OF_CARDS = 52;
int deck[NUMBER_OF_CARDS];
string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
"10", "Jack", "Queen", "King"};

// Initialize cards
for (int i = 0; i < NUMBER_OF_CARDS; i++)
	deck[i] = i;

// Shuffle the cards
srand(time(0));
for (int i = 0; i < NUMBER_OF_CARDS; i++)
{
// Generate an index randomly
	int index = rand() % NUMBER_OF_CARDS;
	int temp = deck[i];
	deck[i] = deck[index];
	deck[index] = temp;
}
cout << "PRINTED WITH ARRAYS: " << endl;
// Display the first four cards
for (int i = 0; i < 4; i++)
{
	string suit = suits[deck[i] / 13];
	string rank = ranks[deck[i] % 13];
	cout << "Card number " << deck[i] << ": " << rank << " of " << suit << endl;
}

///////////////////////////////////////////
/*       SAME BUT WITH VECTORS           */
///////////////////////////////////////////
vector<string> vsuits;
vsuits.push_back("Spades");
vsuits.push_back("Hearts");
vsuits.push_back("Diamonds");
vsuits.push_back("Clubs");

vector<string> vranks;
vranks.push_back("Ace");
vranks.push_back("1");
vranks.push_back("2");
vranks.push_back("3");
vranks.push_back("4");
vranks.push_back("5");
vranks.push_back("6");
vranks.push_back("7");
vranks.push_back("8");
vranks.push_back("9");
vranks.push_back("10");
vranks.push_back("Jack");
vranks.push_back("Queen");
vranks.push_back("King");

// Initialize cards
for (int i = 0; i < NUMBER_OF_CARDS; i++)
	deck[i] = i;

// Shuffle the cards
for (int i = 0; i < NUMBER_OF_CARDS; i++)
{
// Generate an index randomly
	int index = rand() % NUMBER_OF_CARDS;
	int temp = deck[i];
	deck[i] = deck[index];
	deck[index] = temp;
}
cout << endl << "PRINTED WITH VECTORS: " << endl;
// Display the first four cards
for (int i = 0; i < 4; i++)
{
	string vsuit = suits[deck[i] / 13];
	string vrank = ranks[deck[i] % 13];
	cout << "Card number " << deck[i] << ": " << vrank << " of " << vsuit << endl;
}

}
