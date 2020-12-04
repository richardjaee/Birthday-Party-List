

#ifndef BIRTHDAYPARTY_INCLUDED
#define BIRTHDAYPARTY_INCLUDED

#include <iostream>

typedef std::string BirthdayType;
class BirthdayParty
{
private:
    int m_size;
    
    struct Node{
        BirthdayType m_value;
        Node * next;
        Node * prev;
        std::string firstName;
        std::string lastName;
         
     };
    
    Node*head;
    Node*tail;
    
    
public:
    // NAME: Constructor
    // INPUT: None
    // OUTPUT: None
    // DESCRIPTION: Create an empty BirthdayParty list
    BirthdayParty();
    
    // NAME: Destructor
    // INPUT: None
    // OUTPUT: None
    // DESCRIPTION: Destructs the linked list
    ~BirthdayParty();
    
    // NAME: Assignment Operator
    // INPUT: None
    // OUTPUT: None
    // DESCRIPTION: Assignment Operator Overloading
    const BirthdayParty& operator=(const BirthdayParty& rhs);
    
    // NAME: noInvitees
    // INPUT: None
    // OUTPUT: True if the list is empty, otherwise false
    // DESCRIPTION: // Return true if the BirthdayParty list is empty, otherwise false.
    bool noInvitees() const;
    
    // NAME: whosOnTheGuestList
    // INPUT: None
    // OUTPUT: An integer corresponding to the size of the linked list
    // DESCRIPTION: Return the number of players in the BirthdayParty list.
    int whosOnTheGuestList() const;

    // NAME: addInvitee
    // INPUT: A string corresponding to first name, last name, and the value it maps to
    // OUTPUT: True if the input full name given is not equal to any full name and is added to the list, false otherwise
    // DESCRIPTION: If the full name (both the first and last name) is not equal to any full name currently in the list then add it and return true. Elements should be added according to their last name. Elements with the same last name should be added according to their first names. Otherwise, make no change to the list and return false (indicating that the name is already in the list).
    bool addInvitee(const std::string& firstName, const std::string& lastName, const BirthdayType& value);


    // NAME: modiftInvitee
    // INPUT: A string corresponding to first name, last name, and the value it maps to
    // OUTPUT: True if the input full name is equal to a full name in the list and if the value of the full name was changed. False otherwise
    // DESCRIPTION: If the full name is equal to a full name currently in the list, then make that full name no longer map to the value it currently maps to, but instead map to the value of the third parameter; return true in this case. Otherwise, make no change to the list and return false.
    bool modifyInvitee(const std::string& firstName, const std::string& lastName, const BirthdayType& value);

    
    // NAME: addOrModify
    // INPUT: A string corresponding to first name, last name, and the value it maps to
    // OUTPUT: True if the input full name is equal to a full name in the list. True if there is no full name, and if it was added to the list
    // DESCRIPTION: If full name is equal to a name currently in the list, then make that full name no longer map to the value it currently maps to, but instead map to the value of the third parameter; return true in this case. If the full name is not equal to any full name currently in the list then add it and return true. In fact, this function always returns true.
    bool addOrModify(const std::string& firstName, const std::string& lastName, const BirthdayType& value);

    
    // NAME: dropFromGuestList
    // INPUT: A string corresponding to first name, last name
    // OUTPUT: True if the input full name is equal to a full name in the list, and that full name was dropped. False otherwise
    // DESCRIPTION: If the full name is equal to a full name currently in the list, remove the full name and value from the list and return true. Otherwise, make no change to the list and return false.
    bool dropFromGuestList(const std::string& firstName, const std::string& lastName);
    
    
    // NAME: personOnGuestList
    // INPUT: A string corresponding to first name, last name
    // OUTPUT: True if the input full name is equal to a full name in the list, false otherwise
    // DESCRIPTION: Return true if the full name is equal to a full name currently in the list, otherwise false.
    bool personOnGuestList(const std::string& firstName, const std::string& lastName) const;

    
    // NAME: checkGuestList
    // INPUT: A string corresponding to first name, last name, and the value it maps to
    // OUTPUT: True if the input full name is equal to a full name in the list, false otherwise
    // DESCRIPTION: If the full name is equal to a full name currently in the list, set value to the value in the list that that full name maps to, and return true. Otherwise, make no change to the value parameter of this function and return false.
    bool checkGuestList(const std::string& firstName, const std::string& lastName, BirthdayType& value) const;
  
    
    // NAME: selectInvitee
    // INPUT: A string corresponding to first name, last name, and the value it maps to
    // OUTPUT: True if the value, first name, and last name that is at element i in the linked list is copied successfully, false otherwise
    // DESCRIPTION: If 0 <= i < size(), copy into firstName, lastName and value parameters the corresponding information of the element at position i in the list and return true. Otherwise, leave the parameters unchanged and return false. (See below for details about this function.)
    bool selectInvitee(int i, std::string& firstName, std::string& lastName, BirthdayType& value) const;

    
    // NAME: changeGuestList
    // INPUT: A BirthdayParty Object
    // OUTPUT: None
    // DESCRIPTION: Exchange the contents of this list with the other one.
    void changeGuestList(BirthdayParty& other);
   
    
    
    
    };

// NAME: combineGuestLists
// INPUT: Three birthday party objects
// OUTPUT: True if if there is no full name that exists in both bpOne and bpTwo, false if there is
// DESCRIPTION: If a full name appears in exactly one of bpOne and bpTwo, then bpJoined must contain an element consisting of that full name and its corresponding value.
bool combineGuestLists(const BirthdayParty & bpOne, const BirthdayParty & bpTwo, BirthdayParty & bpJoined);

// NAME: verifyGuestList
// INPUT: A constant reference to a string fsearch, lsearch, and a two BirthdayParty Objects
// OUTPUT: None
// DESCRIPTION: When this function returns, bpResult contains a copy of all the elements in bpOne that match the search terms
void verifyGuestList (const std::string& fsearch, const std::string& lsearch, const BirthdayParty& bpOne, BirthdayParty& bpResult);

#endif //BIRTHDAYPARTY_INCLUDED
