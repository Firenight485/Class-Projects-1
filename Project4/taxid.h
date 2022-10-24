#ifndef _TAXID_H_
#define _TAXID_H_

#include<string>
using std::string;

// You will need a constructor that allows a TaxId to be created with or
// without an initial 9-digit string argument. The tax id should default
// to 0000000. The constructor should be explicit.
class TaxId {
  public:
    explicit TaxId(string id = "000000000");
// SetMask static function
// preconditions: The function will be sent a string which should contain
//                nine characters, the character X means to hide that digit
//                and the character # means to show that digit
// postconditions: The function will set the private data member mask to the
//                 argument sent if the argument is exactly nine characters
//                 long and only contains X and # as characters. Otherwise,
//                 mask will remain unchanged
   static void SetMask(string mask);
// GetMask static function
// the function takes no parameters and returns the mask string
    static string GetMask();
// SetId function
// preconditions: The function will be sent a string for the tax id. Excepted
//                formats are "#########" or "###-##-####"
// postconditions: If the argument is a string with exactly 9 digits, or an
//                 eleven character string with 3 digits, a dash, 2 digits,
//                 a dash, and 4 digits, then the id data member should be
//                 updated.
//                 If the argument does not meet one of the accepted formats
//                 the id data member should not be changed.
    static void SetId(const string &id);
// GetId function
// the function should return a string with the id data member masked using
// the format specified by the static mask data member.
// For example, if the id data member is "123456789" and the static mask
// data member is "XXXXX####" then the GetId function should return the string
// "XXXXX6789"
   static string GetId();
    
  static string mask_;
  static string id_;

};

#endif  // _TAXID_H_