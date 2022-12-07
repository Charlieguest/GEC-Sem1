#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

/*
int main()
{
    ifstream inFile;
    inFile.open("example.txt", ios::in);

    if (!inFile)
    {
        cerr << "File could not be opened!";
        exit(1);
    }
}
*/

////// Add text to a file ///////


/*
int main() 
{
    ofstream outfile("example.txt");

    if (!outfile.is_open())
    {
        cerr << "File could not be opened!";
        exit(1);
    }

    outfile << "This is a line. \n";
    outfile << "This is another line. \n";

    outfile.close();

    return 0;
}
*/

////// Read text from a file ///////

/*
int main() 
{
    string lineOfText;
    ifstream infile("example.txt");

    //Check if the file was opened
    if (infile.is_open())
    {
        // Loop through the entire file and output each line to the console.
        while (getline(infile, lineOfText))
        {
            cout << lineOfText << endl;
        }
    }
    else
    {
        // File Did not open. Inform user.
        cout << "unable to open file";
    }

    cin.get();
    return 0;
}
*/

////// Example Of File Size ///////

/*
int main()
{
    streampos begin, end;
    
    // Open the file.
    ifstream inFile("example.txt", ios::binary);

    if (!inFile)
    {
        cerr << "File could not be opened!";
        exit(1);
    }

    // Get the current position in the file.
    begin = inFile.tellg();

    //Reposition the file pointer to the end of the file
    inFile.seekg(0, ios::end);

    // Get the current position in the file.
    end = inFile.tellg();

    // Close the file
    inFile.close();

    cout << "size is: " << (end - begin) << " bytes.\n";

    cin.get();
    return 0;
}
*/

////// Example Of File Size ///////

int main()
{
    char character;
    int number = 51;
    int count = 0;

    ofstream out_stream;
    ifstream in_stream1;
    ifstream in_stream2;

    //Create the file
    out_stream.open("Integers");
    for (count = 1; count <= 5; count++)
    {
        out_stream << number++ << " ";
    }
    out_stream.close();

    // Count the integers in the file
    in_stream1.open("Integers");
    count = 0;
    in_stream1 >> number;
    while (!in_stream1.eof())
    {
        count++;
        in_stream1 >> number;
    }
    in_stream1.close();
    cout << "There are " << count << " integers in the file, \n";

    // Count the non-blank characters
    in_stream2.open("Integers");
    count = 0;
    in_stream2 >> character;
    while (!in_stream2.eof())
    {
        count++;
        in_stream2 >> character;
    }
    in_stream2.close();
    cout << "represent using " << count << " characters." << endl;

    cin.get();
    return 0;
}

