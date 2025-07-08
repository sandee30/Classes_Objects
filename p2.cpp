#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to input time
    void input() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to display time in hh:mm:ss format
    void display() const {
        cout << hours << " hrs " << minutes << " min " << seconds << " sec" << endl;
    }

    // Function to add two time objects
    Time add(const Time& t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }
};

int main() {
    Time t1, t2, sum;

    cout << "Enter first time:\n";
    t1.input();

    cout << "Enter second time:\n";
    t2.input();

    sum = t1.add(t2);

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Sum of Time: ";
    sum.display();

    return 0;
}
