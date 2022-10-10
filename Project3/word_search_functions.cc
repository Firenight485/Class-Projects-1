//  Copyright 2022 Brian Bongermino

#include<word_search_functions.h>
#include<fstream>
#include<iostream>
using std::cout;
using std::endl;
#include<string>

bool ReadWordSearch(string file_name, char word_search[][kSize]) {
    std::ifstream file_in;
    int count = 0;
    file_in.open(file_name);
    char temp;
    while (file_in >> temp) {
        count++;
    }
    file_in.close();
    file_in.open(file_name);
    if (!file_in.is_open()) {
        return false;
    }
    if (count != (kSize * kSize)) {
        file_in.close();
        return false;
    } else if (count == (kSize * kSize)) {
        for (int i = 0; i < kSize; ++i) {
            for (int j = 0; j < kSize; ++j) {
                file_in >> word_search[i][j];
            }
        }
    file_in.close();
    return true;
    }
    return 0;
}

void PrintWordSearch(const char print_grid[][kSize]) {
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
            cout << print_grid[i][j];
        }
        cout << endl;
    }
}

Position FindWordRight(const char find_right[][kSize], string to_find) {
    Position Location;
    Location.col = -1;
    Location.row = -1;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                    size_t k = 0;
                    for (size_t l = 0; l < to_find.length(); l++) {
                        if ((j+l) < kSize) {
                            if (to_find[l] == find_right[i][j + l]) {
                                if (find_right[i][j] != '\0') {
                                k++;
                            }
                        }
                        if (k == to_find.length()) {
                            Location.col = j;
                            Location.row = i;
                            return Location;
                    }
                }
            }
        }
    }
    return Location;
}

Position FindWordLeft(const char find_left[][kSize], string to_find) {
    Position Location;
    Location.col = -1;
    Location.row = -1;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                    size_t k = 0;
                    for (size_t l = 0; l < to_find.length(); l++) {
                        if ((j-l) < kSize) {
                            if (to_find[l] == find_left[i][j - l]) {
                                if (find_left[i][j] != '\0') {
                                k++;
                            }
                        }
                        if (k == to_find.length()) {
                            Location.col = j;
                            Location.row = i;
                            return Location;
                    }
                }
            }
        }
    }
    return Location;
}

Position FindWordDown(const char find_down[][kSize], string to_find) {
    Position Location;
    Location.col = -1;
    Location.row = -1;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                if (find_down[i][j] == to_find[0]) {
                size_t k = 0;
                while (find_down[i + k][j] == to_find[k]) {
                    if (find_down[i][j] != '\0') {
                                        k++;
                    }
                }
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    return Location;
}

Position FindWordUp(const char find_up[][kSize], string to_find) {
    Position Location;
    Location.col = -1;
    Location.row = -1;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                if (find_up[i][j] == to_find[0]) {
                size_t k = 0;
                while (find_up[i - k][j] == to_find[k]) {
                    if (find_up[i][j] != '\0') {
                                        k++;
                    }
                }
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    return Location;
}

Position FindWordDiagonal(const char find_diag[][kSize], string to_find) {
    Position Location;
    Location.col = -1;
    Location.row = -1;
    for (int i = 0; i < kSize; i++) {
        for (int j = 0; j < kSize; j++) {
                if (find_diag[i][j] == to_find[0]) {
                size_t k = 0;
                while (find_diag[i + k ][j + k] == to_find[k]) {
                    if (find_diag[i][j] != '\0') {
                                        k++;
                    }
                }
                if (k == to_find.length()) {
                    Location.col = j;
                    Location.row = i;
                    return Location;
                }
            }
        }
    }
    return Location;
}

