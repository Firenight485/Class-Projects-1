//  Copyright 2022 Brian Bongermino

#include<word_search_functions.h>
#include<fstream>
using std::ifstream;
#include<iostream>
using std::cout;
using std::endl;
#include<string>

// Reads in a file line by line and checks if the character count is at least the constant
// Ksize * Ksize, if it is is then the file is read into the char word_search and implemented
// in program 3
bool ReadWordSearch(string file_name, char word_search[][kSize]) {
    ifstream file_in;
    int count = 0;
    file_in.open(file_name);
    char temp;
    // gets all characters in the file
    while (file_in >> temp) {
        count++;
    }
    file_in.close();
    file_in.open(file_name);
    if (!file_in.is_open()) {
        return false;
    }
    //  if the characters in the file are
    //  less than kSize * kSize, it outputs false
    //  and closes the file
    if (count != (kSize * kSize)) {
        file_in.close();
        return false;
        // if its valid then it reads row by row
        // column by column and reads into word_search
    } else if (count == (kSize * kSize)) {
        for (int i = 0; i < kSize; ++i) {
            for (int j = 0; j < kSize; ++j) {
                file_in >> word_search[i][j];
            }
        }
    // if everything is valid it returns true
    file_in.close();
    return true;
    }
    return 0;
}

//  prints the file into a kSize * kSize grid
void PrintWordSearch(const char print_grid[][kSize]) {
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
            cout << print_grid[i][j];
        }
        cout << endl;
    }
}

//  Finds a word from the grid going from left to right
Position FindWordRight(const char find_right[][kSize], string to_find) {
    Position Location;
    // sets the default position to -1,-1 (being out of the grid as a 
    // as a way to set a default not found position)
    Location.col = -1;
    Location.row = -1;
    //  loops through the lines and columns as determined by kSize
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                //  finds the starting letter
                if (find_right[i][j] == to_find[0]) {
                size_t k = 0;
                //  for a check on the size of the word
                for (size_t l = 0; l < to_find.length(); l++) {
                //  first checks if the size of the word fits in the grid
                //  if it does then it finds the location of the pattern
                //  ie if the word is program it will go over and find 
                //  the length and if what it found fits and is equal
                //  to the length of what to find's length is
                //  it'll move on and check if it doesn't end on the starting
                //  character. If all of this is right it'll at to varible
                //  k.
                if ((j+l) < kSize && find_right[i][j + l] == to_find[l]) {
                    if (find_right[i][j] != '\0') {
                                        k++;
                }
                }
                }
                //  outputs the location to the console 
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    // returns the default not found location if the if statements fail
    return Location;
}

//  finds where a word is from a grid going from left to right
Position FindWordLeft(const char find_left[][kSize], string to_find) {
    Position Location;
    // sets the default not found value
    Location.col = -1;
    Location.row = -1;
    //  moves through the grid line by line column by column
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                //  finds the starting letter
                if (find_left[i][j] == to_find[0]) {
                size_t k = 0;
                //  checks for the size of to_find
                for (size_t l = 0; l < to_find.length(); l++) {
                //  j-l moves through the rows right to left and compares
                //  what if found with the length of to_find. If it's 
                //  valid it'll add to k++
                if ((j-l) < kSize && find_left[i][j - l] == to_find[l]) {
                    if (find_left[i][j] != '\0') {
                                        k++;
                }
                }
                }
                // outputs the loction of what it found to the console
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    // returns default not found
    return Location;
}

//  find a word in the down direction
Position FindWordDown(const char find_down[][kSize], string to_find) {
    Position Location;
    // default location
    Location.col = -1;
    Location.row = -1;
    // moves through the grid line by line column by column
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                //  finds the starting letter
                if (find_down[i][j] == to_find[0]) {
                size_t k = 0;
                // checks for the size of to_find
                for (size_t l = 0; l < to_find.length(); l++) {
                // i+l moves through the columns downward and compares what
                // is imputted to the size of to find if the patterns is
                // valid then it adds to k
                if ((i+l) < kSize && find_down[i + l][j] == to_find[l]) {
                    if (find_down[i][j] != '\0') {
                                        k++;
                }
                }
                }
                //  outputs proper location to the console
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    // returns default value
    return Location;
}

//  checks for postion up
Position FindWordUp(const char find_up[][kSize], string to_find) {
    Position Location;
    //  default location
    Location.col = -1;
    Location.row = -1;
    //  moves through row by row and column by column 
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                // starts the pattern
                if (find_up[i][j] == to_find[0]) {
                size_t k = 0;
                // checks for length
                for (size_t l = 0; l < to_find.length(); l++) {
                // checks the column downwards and if its valid
                // adds to k
                if ((i-l) < kSize && find_up[i-l][j] == to_find[l]) {
                    if (find_up[i][j] != '\0') {
                                        k++;
                }
                }
                }
                //  outputs found location to console 
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    //  returns default
    return Location;
}

//  finds word diagonal
Position FindWordDiagonal(const char find_diag[][kSize], string to_find) {
    Position Location;
    // default location
    Location.col = -1;
    Location.row = -1;
    // moves through row by row column by column
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                // starts the pattern
                if (find_diag[i][j] == to_find[0]) {
                size_t k = 0;
                // checks for length
                for (size_t l = 0; l < to_find.length(); l++) {
                // checks right both column direction and row
                // direction are valid. If they are then it 
                // adds to k
                if (((j+l) < kSize && (i+l) < kSize)
                && find_diag[i + l][j + l] == to_find[l]) {
                    if (find_diag[i][j] != '\0') {
                                        k++;
                }
                }
                }
                //  outputs found location
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    //  returns found location
    return Location;
}
