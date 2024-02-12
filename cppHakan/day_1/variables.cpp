/**
 * Variables
 * Tasks:
 *     - Print the size of short, integer, long, double and character on your
 *     system
 *     - Print the min/max limits of short, integer and double on your system
 *     - Declare an integer variable named limit and initialize it to 60
 *     - Declare two double variables named distance and time, respectively
 *     - Get the distance from the standard input with the following prompt:
 *     "Enter the traveled distance: "
 *     - Get the time from the standard input with the following prompt:
 *     "Enter the travel time: "
 *     - Declare a double variable named velocity
 *     - Compute the velocity as distance / time
 *     - Print the following information to the standard output in an
 *     organized manner:
 *     traveled distance, travel time, velocity and the speed limit
 */

#include <iostream>
#include <limits>

int main()
{
  std::cout << "short:\n" <<
    "    min:  " << std::numeric_limits<short>::min() << "\n" <<
    "    max:  " << std::numeric_limits<short>::max() << "\n" <<
    "    size: " << sizeof(short) << " Bytes\n" <<
    "int:\n" <<
    "    min:  " << std::numeric_limits<int>::min() << "\n" <<
    "    max:  " << std::numeric_limits<int>::max() << "\n" <<
    "    size: " << sizeof(int) << " Bytes\n" <<
    "double:\n" <<
    "    min:  " << std::numeric_limits<double>::min() << "\n" <<
    "    max:  " << std::numeric_limits<double>::max() << "\n" <<
    "    size: " << sizeof(double) << " Bytes\n" << std::endl;

    int limit = 60;
    double distance, time;

    std::cout << "Enter the traveled distance [m]: ";
    std::cin >> distance;

    std::cout << "Enter the travel time [s]: ";
    std::cin >> time;

    double velocity = distance / time;

    std::cout << "Traveled distance = " << distance << " m\n" <<
        "Travel time = " << time << " s\n" <<
        "Velocity = " << velocity << " m/s" <<
        std::endl;

    return 0;
}