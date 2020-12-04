#include "BirthdayParty.h"
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    BirthdayParty theLastDance;
    theLastDance.addInvitee ("Michael", "Jordan", "23"); theLastDance.addInvitee ("Scottie", "Pippen", "33");
    
    theLastDance.addInvitee ("Dennis", "Rodman", "91"); theLastDance.addInvitee ("Luc", "Longley", "13");
    theLastDance.addInvitee ("Ron", "Harper", "9");
    for (int n = 0; n < theLastDance.whosOnTheGuestList(); n++) {
        string first;

        string last;

        string val;

        theLastDance.selectInvitee (n, first, last, val); cout << first << " " << last << " " << val << endl;
}
    
}
