// Name:  Kody Perdue
// Date:  7/9/24
// CS2 at UCA with Baarsch

#include <iostream>
using namespace std;

void practiceArrays();
void practicePointers();
void practiceStructs();
void getNumbers(int numbers[], int COUNT);


int main()
{
    practiceArrays();


}

void practiceArrays() {
    const int COUNT = 5;
    int numbers[COUNT];

    //get the numbers;
    getNumbers(numbers, COUNT);

    //print the array of numbers
    cout << endl << endl;
    for (int num : numbers)
        cout << num << endl;

    cout << endl;

    //calculate sum, average, max, and min
    int sum = 0, max = numbers[0], min = numbers[0], count = 0;
    double average = 0.0;

    for (int num : numbers) {
        sum += num;
        if (max < num)
            max = num;
        if (min > num)
            min = num;
        count++;
    }
    average = sum / static_cast<double>(count);

    //display the sum, average, max, and min
    cout << "The sum is " << sum << endl;
    cout << "The average is " << average << endl;
    cout << "The max is " << max << endl;
    cout << "The min is " << min << endl;

}

void getNumbers(int numbers[], int COUNT) {

    for (int i = 0; i < COUNT; i++) {
        cout << "Please enter a value:  " << endl;
        cin >> numbers[i];
    }

}

void practicePointers() {


}

void practiceStructs() {


}
