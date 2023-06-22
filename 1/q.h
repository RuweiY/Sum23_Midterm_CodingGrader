#include <iostream>
#include <string>

// Returns the index of the fist space character in a string.
// Returns -1 if there are no spaces.
int IndexOfFirstSpace(std::string& input);

// Given the full_name, it returns the first_name and last_name.
// Note: you should use IndexOfFirstSpace function and cannot use any other
// std:: functions.
// If there is no space, set the last_name to an empty string.
// If the string is empty, both first and last name should be empty strings.
void SeparateFirstAndLastNames(std::string& full_name, std::string& first_name,
                               std::string& last_name);

// Returns the number of vowels (a, e, i, o, u) in a string.
// Your algorithm should be case insensitive.
int NumberOfVowels(std::string& input);

// Returns the number of consonants (letters that are not a, e, i, o, u) in a
// string.
// Your algorithm should be case insensitive.
int NumberOfConsonants(std::string& input);