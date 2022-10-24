#include<taxid.h>
#include<string>
#include<iostream>
using std::string;
#include<regex>

// initialize the mask to "XXXXX####"
string TaxId::mask_ = "XXXXX####";

// implement the TaxId class' member functions

TaxId::TaxId(string id) {
    id_ = id;
    if (id.length()  != 9) {
        id_ = "000000000";
    }
    SetId(id);
}

void TaxId::SetMask(string m) {
    if (m.length() > 9 || m.length() < 9) {
        m = mask_;
    } else if ((mask_.length() == 9 &&
    m.find("#") != std::string::npos) || m.find("X") !=
    std::string::npos) {
        mask_ = m;
    } else {
        m = mask_;
    }
}

string TaxId::GetMask() {
    return mask_;
}

void TaxId::SetId(const string &id) {
    int counter = 0;
     std::string idtemp;


    if (id.length() == 9) {
        for (int i = 0; i < 9; ++i) {
            if (id[i] >= '0' && id[i] <= '9') {
                counter++;
            }
        }
    } else if (id.length() == 11) {
            counter = 0;
                for (int i = 0; i < 11; ++i) {
                    if ((id[3] == '-' && id[6] == '-') && (id[i] >= '0' && id[i] <= '9')) {
                        counter++;
                    }
                }
    }
    if (counter == 9) {
            id_ = id;
       } else if (counter == 11) {
            id_ = id;
       }
    id_.erase(remove(id_.begin(), id_.end(), '-'), id_.end());

}

string TaxId::GetId() const {
   // id_.erase(remove(id_.begin(), id_.end(), '-'), id_.end());
    std::string idmask = id_;
    for (int i = 0; i < 9; ++i) {
    }
   // std::cout << idmask;
   return id_;
}
