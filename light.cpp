#include <iostream>
using namespace std;

int main() {
    // Constants
    const double speedOfLight = 299792.458; // Speed of light in km/s
    const int secondsInMinute = 60;
    const int minutesInHour = 60;
    const int hoursInDay = 24;
    const int daysInYear = 365; // Assuming a non-leap year

    // Calculate the total number of seconds in a year
    long long secondsInYear = static_cast<long long>(secondsInMinute) *
                              minutesInHour * hoursInDay * daysInYear;

    // Calculate the distance traveled by light in one year
    double distance = speedOfLight * secondsInYear;

    // Output the result
    cout << "The distance traveled by light in one year is: " 
         << distance << " kilometers." << endl;

    return 0;
}
