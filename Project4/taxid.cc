// Copyright 2022 Brian Bongermino

#include<taxid.h>
#include<string>
#include<iostream>
using std::string;
#include<regex>

// initialize the mask to "XXXXX####"
string TaxId::mask_ = "XXXXX####";  // NOLINT

// implement the TaxId class' member functions

//  implements the default constructor
TaxId::TaxId(string id) {
    id_ = id;
    if (id.length()  != 9) {
        id_ = "000000000";
    }
    SetId(id);
}

// checks if the mask is in the correct format
void TaxId::SetMask(string m) {
    // moves through mask if its at the wrong length
    if (m.length() > 9 || m.length() < 9) {
        m == mask_;
        // checks if mask is at the right length
    } else if ((mask_.length() == 9 &&
    //  checks if it contains one of both of "X" or "#"
    m.find("#") != std::string::npos) || m.find("X") !=
    std::string::npos) {
        mask_ = m;
    } else {
        m == mask_;
    }
}

// returns mask
string TaxId::GetMask() {
    return mask_;
}

void TaxId::SetId(const string &id) {
    int counter = 0;

    //  begins the check for string at 9
    if (id.length() == 9) {
        //  moves through the length
        for (int i = 0; i < 9; ++i) {
            //  checks if the string is numeric
            //  if it is then the counter is added to
            if (id[i] >= '0' && id[i] <= '9') {
                counter++;
            }
        }
        //  begins the check at 9
    } else if (id.length() == 11) {
            counter = 0;
                //  checks for length, if the string has dashes at
                //  4 and 7, and if the string is numeric
                //  if the string is numeric then counter is
                //  added to
                for (int i = 0; i < 11; ++i) {
                    if ((id[3] == '-' && id[6] == '-') &&
                    (id[i] >= '0' && id[i] <= '9')) {
                        counter++;
                    }
                }
    }
    //  checks if counteris at 9, if it is then id_ is set to id
    if (counter == 9) {
            id_ = id;
        // same as above but for when counter is at 11
       } else if (counter == 11) {
            id_ = id;
       }
       //  checks for "-" in id_. If any are found then they are
       //  removed
    id_.erase(remove(id_.begin(), id_.end(), '-'), id_.end());
}

//  masks the id.
string TaxId::GetId() const {
    //  temporary string to store the updated id
    std::string idmask = id_;
    for (int i = 0; i < 9; ++i) {
        //  checks where X is in mask_. Whenever a character is not
        //  found at X, then it is replaced with the temporary string
        //  at the index where X is not found
        if (mask_[i] == 'X') {
            idmask[i] = mask_[i];
        }
    }
    return idmask;
}
