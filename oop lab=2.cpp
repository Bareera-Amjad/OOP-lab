#include <iostream>
using namespace std;

float kilometersToMiles(float kilometers) {
    return kilometers * 0.621371;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

void secondsToHMS(int seconds) {
    int hours = seconds / 3600;
    seconds = seconds % 3600;
    int minutes = seconds / 60;
    seconds = seconds % 60;

    cout << "Hours: " << hours << " Minutes: " << minutes << " Seconds: " << seconds << endl;
}

int main() {
    int choice;
    float kilometers, celsius;
    int totalSeconds;

    cout << "Choose an option:"<<endl;
    cout << "1. Convert kilometers to miles"<<endl;
    cout << "2. Convert Celsius to Fahrenheit"<<endl;
    cout << "3. Convert seconds to hours, minutes, and seconds"<<endl;
    cout << "Enter your choice (1 ....2....3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter distance in kilometers: ";
            cin >> kilometers;
            cout << kilometers << " kilometers is equal to " << kilometersToMiles(kilometers) << " miles." << endl;
            break;

        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            cout << celsius << " Celsius is equal to " << celsiusToFahrenheit(celsius) << " Fahrenheit." << endl;
            break;

        case 3:
            cout << "Enter total seconds: ";
            cin >> totalSeconds;
            secondsToHMS(totalSeconds);
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
