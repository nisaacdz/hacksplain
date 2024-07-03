#include <iostream>

using namespace std;
const char ENDL = '\n';

void print_ascii(string& input) {
    for (char c: input) {
        cout << "ASCII value of " << c << " is " << c - 0 << ENDL;
    }
    cout << ENDL;
}

int main()
{
    bool playing = true;
    string input;
    while (playing)
    {
        cout << "Enter a string to convert to ascii values (Empty string to quit)" << ENDL;
        getline(cin, input);
        playing = !input.empty();
        if (playing) print_ascii(input);
    }
    return 0;
}