// CSC 134
// M1HW1
// Mario Bates
// 09 Sep 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // This program will give information about the movie Tropic Thunder.

    // The movie name
    string movieName = "Tropic THunder";
    // The year the movie came out
    int releaseYear = 2008;
    // The worldwide box office gross
    double worldwideGross = 195705346.00;
    // Print the movie information
    cout << "Movie: " << movieName << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << fixed << setprecision(2); 
    cout << "Worlwide Gross: $" << worldwideGross << endl;
    // Print a foavorite quote from the movie
    cout << "My favorite quote is: ";
    cout << "\" I don't read the script, the script reads me.\"" << endl;
}