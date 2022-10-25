//  copyright 2022 Brian Bongermino

#include<employee.h>
#include<taxid.h>
#include<iostream>

//  default constructor with default values
Employee::Employee(): TaxId_("999999999") {
    hpw_ = 40;
    payt_ = 2;
}

//  an initial constructor with base values being passed into
//  the functions
Employee::Employee(string sid, int pt, double hpw) {
    SetTaxId(sid);
    SetPayType(pt);
    SetHoursPerWeek(hpw);
}

// checks for the paytype in range
int Employee::SetPayType(int payt) {
    if (payt == 1 || payt == 2 || payt == 3) {
        payt_ = payt;
    }
    return payt;
}

//  assigns the type of pay to an integer
string Employee::SetPayType(string pt)  {
    if (pt == "salaried") {
        payt_ = 1;
    } else if (pt == "hourly") {
        payt_ = 2;
    } else if (pt == "contract") {
        payt_ = 3;
    }
    return pt;
}

//  recieves the paytype for if the user
//  enter 1 - 3 or the direct type
string Employee::GetPayType() const {
    if (payt_ == 1)
        return "salaried";
    else if (payt_ == 2)
        return "hourly";
    else if (payt_ == 3)
        return "contract";
    else if (spayt_ == "salaried")
        return "salaried";
    else if (spayt_ == "hourly")
        return "hourly";
    else if (spayt_ == "contract")
        return "contract";
    return 0;
}

// checks for if hpw is between 1 and 40 inclusively
double Employee::SetHoursPerWeek(double hpw) {
    if (hpw > -1 && hpw < 41) {
        hpw_ = hpw;
    }
    return hpw_;
}

// returns the hours per week
double Employee::GetHoursPerWeek() const {
    return hpw_;
}

//  sends the string id to taxid's setid
void Employee::SetTaxId(string sid) {
    TaxId_.SetId(sid);
}

// formats the gettaxid
string Employee::GetTaxId() const {
    //  sets the mask to "XXXXXX####"
    TaxId_.SetMask("XXXXX####");
    //  creates a tempary string thats equal to
    //  taxid_ running the getid function in
    //  the taxid class
    std::string temp = Employee::TaxId_.GetId();
    return temp;
}
