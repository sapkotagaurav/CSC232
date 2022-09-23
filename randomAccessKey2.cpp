#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    fstream inFile("proverb.txt", ios::in);
    long offset;
    char ch;
    char more;
    inFile.seekg(0, ios::end);
    do
    {
        // Fill in the code to write to the screen
        // the current read position (with label)

        cout << "The pointer is currently on the position " << inFile.tellg() << endl;

        cout << "Enter an offset from the current read position: ";
        cin >> offset;
        offset = -offset;

        //	Fill in the code to move the read position offset bytes
        //	from the CURRENT read position.

        //	Fill in the code to get one byte of information from the file
        //	and place it in the variable "ch".
        inFile.seekg(offset, ios::cur);
        inFile.tellg();
        ch = inFile.get();

        cout << "The character read is " << ch << endl;
        cout << "If you would like to input another offset enter a Y"
             << endl;
        cin >> more;

        // Fill in the code to clear the eof flag.

    } while (toupper(more) == 'Y');

    inFile.close();

    return 0;
}