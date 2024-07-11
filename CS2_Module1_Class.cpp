// Name:  Kody Perdue
// Date:  7/9/24
// CS2 at UCA with Baarsch

#include <iostream>
#include <ctime>
using namespace std;

//Suit, which should contain a string, name, and int value.
struct Suit {
    string name;
    int value;
};

//Rank, which should contain a string, name, and an int value.
struct Rank {
    string name;
    int value;
};

//Card, which should contain a Suit, a Rank, and a boolean, isFaceUp.
struct Card {
    Suit suit;
    Rank rank;
    bool isFaceUp = false;
};

void practiceArrays();
void practicePointers();
int* getNumbers(int* ptr, int count);
int getCount();


int main()
{
    //practiceArrays();
    //practicePointers();

    srand(time(0));

    Suit suits[4] = {
        {"hearts", 4},
        {"diamonds", 3},
        {"clubs", 2},
        {"spades", 1}
    };

    Rank ranks[13] = {
        {"Ace", 1},
        {"Two", 2},
        {"Three", 3},
        {"Four", 4},
        {"Five", 5},
        {"Six", 6},
        {"Seven", 7},
        {"Eight", 8},
        {"Nine", 9},
        {"Ten", 10},
        {"Jack", 10},
        {"Queen", 10},
        {"King", 10},
    };

    Card deck[52];

    for (int i = 0; i < 52; i++) {
        Card tempCard = { suits[i / 13], ranks[i % 13], true };
        deck[i] = tempCard;
    }

    //for (Card card : deck) {
    //    cout << "The " << card.rank.name << " of " << card.suit.name << endl;
    //}

    for (int i = 0; i < 5; i++) {
        Card card = deck[rand() % 52];
        cout << "The " << card.rank.name << " of " << card.suit.name << endl;
    }
}

void practiceArrays() {
    int count = getCount();
    int* ptr = nullptr;

    //get the numbers;
    ptr = getNumbers(ptr, count);

    //print the array of numbers
    cout << endl << endl;
    for (int i = 0; i < count; i++)
        cout << *(ptr + i) << endl;

    cout << endl;

    //calculate sum, average, max, and min
    int sum = 0, max = ptr[0], min = ptr[0];
    double average = 0.0;

    for (int i = 0; i < count; i++) {
        sum += *(ptr + i);
        if (max < *(ptr + i))
            max = *(ptr + i);
        if (min > *(ptr + i))
            min = *(ptr + i);
        
    }
    average = sum / static_cast<double>(count);

    //display the sum, average, max, and min
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    cout << "The max is " << max << endl;
    cout << "The min is " << min << endl;

}

int getCount() {
    int count;
    cout << "How many numbers do you want to process?" << endl;
    cin >> count;

    return count;
}

int* getNumbers(int* ptr, int size) {

    ptr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Please enter a value:  " << endl;
        cin >> *(ptr + i);
    }
    return ptr;
    delete[] ptr;
    ptr = nullptr;
}

void practicePointers() {
    string name;
    int age;
    string months[12] = { "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December" };

    cout << "Enter your name." << endl;
    cin >> name;

    cout << name << endl;
    cout << &name << endl;

    cout << "What is your age?" << endl;
    cin >> age;

    cout << age << endl;
    cout << &age << endl;

    for (int i = 0; i < 12; i++) {
        cout << *(months + i) << endl;
    }

    for (int i = 11; i >= -1; i--) {
        cout << *(months + i) << endl;
    }

}

