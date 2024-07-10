// Name:  Kody Perdue
// Date:  7/9/24
// CS2 at UCA with Baarsch

#include <iostream>
using namespace std;

void practiceArrays();
void practicePointers();
void practiceStructs();
int* getNumbers(int* ptr, int count);
int getCount();


int main()
{
    //practiceArrays();
    practicePointers();

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

    //printing the value and memory address
    cout << name << endl;
    cout << &name << endl;

    cout << "What is your age?" << endl;
    cin >> age;

    //printing the value and memory address
    cout << age << endl;
    cout << &age << endl;

    //printing January to December
    for (int i = 0; i < 12; i++) {
        cout << *(months + i) << endl;
    }

    cout << endl;

    //printing December to January
    for (int i = 11; i >= -1; i--) {
        cout << *(months + i) << endl;
    }

}

void practiceStructs() {


}
