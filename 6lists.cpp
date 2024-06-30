#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void printVector(const vector<T> &vec, const string &delimiter = ", ")
{
    if (vec.empty())
    {
        cout << "[]" << endl;
        return;
    }

    cout << "[";
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        cout << vec[i] << delimiter;
    }
    cout << vec[vec.size() - 1] << "]" << endl;
}

int main()
{
    vector<vector<string>> all_names(6);
    string next_name;
    int count = 0;

    /*
    Here, I am using a counter to prevent accepting more than 36 names
    because that will always cause at least one list to contain more
    than six elements (which is against the instructions)
    */

    /*
    If the number of names inputed is a multiple of six, it is guaranteed
    that each of the six lists will have an equal number of elements.
    */

    /*
    If the number of names is not a multiple of six, then the maximum 
    difference between the sizes of any two of the six lists will be 1
    */
   
    while (count < 36)
    {
        cout << "Enter next name (Enter empty name to quit): ";
        getline(cin, next_name);
        if (next_name.size() == 0)
            break;
        all_names[count++ % 6].push_back(next_name);
    }

    cout << "Finished taking names: " << endl;

    for (vector<string> &list : all_names)
    {
        printVector(list);
    }

    return 0;
}