# Hacksplain

## ascii.cpp
- I began with a utility function `print_ascii` which prints the ascii value of each character in the string argument.
```
void print_ascii(string& input) {
    for (char c: input) {
        cout << "ASCII value of " << c << " is " << c - 0 << ENDL;
    }
    cout << ENDL;
}
```
- In the `main` function, I ask the user to input a string for conversion to ascci or they can terminate by entering an empty string.
```
        cout << "Enter a string to convert to ascii values (Empty string to quit)" << ENDL;
        getline(cin, input);
```

- Then I call the utility function on the input string value to print the conversion.
```
    if (playing) print_ascii(input);
```
- Finally, I loop as long as the user keeps inputing a non-empty string.
```
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
```