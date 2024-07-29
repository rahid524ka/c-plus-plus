#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open the file in reading mode
    ifstream inputFile("paper.txt");

    // Check if the file was successfully opened
    if (!inputFile) {
        cerr << "Unable to open file for reading." << endl;
        return 1; // Return an error code
    }

    string line;
    // Read the file line by line
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inputFile.close();

    return 0;
}
