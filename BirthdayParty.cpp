
#include "BirthdayParty.h"

/*
 Psuedocode
 
 create a temporray node p that is set equal to head
 while p is not a nullptr
    create a temporary node n that is set equal to p's pointer to next
    delete p
    set p equal to n
 end while loop
 */
BirthdayParty::~BirthdayParty(){
    Node*p;
    p= head;
    while (p!=nullptr){
        Node*n = p->next;
        delete p;
        p = n;
    }
}


/*
 Psuedocode
 
 initialize m_size to 0
 set head equal to a new Node
 set tail equal to a new Node
 set head's pointer to previous equal to nullptr
 set tail's pointer to next equal to nullptr
 set head's pointer to next equal to tail
 set tail's pointer to previous equal to head
 */
BirthdayParty::BirthdayParty(){
    m_size = 0;
    head = new Node;
    tail = new Node;
    head->prev = nullptr;
    tail->next = nullptr;
    
    head ->next = tail;
    tail ->prev = head;
}
/*
 Psuedocode
    if m_size is 0
        return true
    else
        return false
 */
bool BirthdayParty::noInvitees() const{
    if (m_size == 0 ){
        return true;
    }
    else
        return false;
}

/*
 Psuedocode:
 
 return private member variable m_size
 */
int BirthdayParty::whosOnTheGuestList() const{
    
    return m_size;
}

/*
Psuedocode:

create a temporary Node x that is set equal to head
 
 while x is not a nullptr
    if x's pointer to firstName is equal to the argument's firstName and x's pointer to lastName is equal to the argument's lastName
        return false
    set x equal to the x's pointer to next
 end while loop
 
 create a temporary Node q that is set equal to head
 if the size of the list is 0
    head's pointer to firstName is set equal to the argument's firstName
    head's pointer to lastName is set equal to the argument's lastName
    head's pointer to m_value is set equal to the argument's value
    increment m_size
    return true
 
 if the size of the list is 1
    if the argument's lastName is equal to q's pointer to lastName
        if the argument's firstName is less than q's pointer to firstName
            create a temporary string that is set equal to head's pointer to firstName
            create a temporary string that is set equal to head's pointer to lastName
            create a temporary BirthdayType that is set equal to head's pointer to m_value
 
            head's pointer to firstName is set equal to the argument's firstName
            head's pointer to lastName is set equal to the argument's lastName
            head's pointer to m_value is set equal to the argument's value
            
            tail's pointer to firstName is set equal to the firstName temporary string
            tail's pointer to lastName is set equal to the lastName temporary string
            tail's pointer to m_value is set equal to the value temporary string
 
            incremement m_size
            return true
        else if firstName greater than q's pointer to firstName
            set tail's pointer to firstName equal to firstTemp
            set tail's pointer to m_value equal to value
            increment size
            return true
        
    
        else if
           last name is less than q's pointer to lastName
           create a temporary string that is set equal to head's pointer to firstName
           create a temporary string that is set equal to head's pointer to lastName
           create a temporary BirthdayType that is set equal to head's pointer to m_value
        
           head's pointer to firstName is set equal to the argument's firstName
           head's pointer to lastName is set equal to the argument's lastName
           head's pointer to m_value is set equal to the argument's value
           
           tail's pointer to firstName is set equal to the firstName temporary string
           tail's pointer to lastName is set equal to the lastName temporary string
           tail's pointer to m_value is set equal to the value temporary string
           
           increment size
           return true
        else
            tail's pointer to firstName is set equal to the firstName temporary string
            tail's pointer to lastName is set equal to the lastName temporary string
            tail's pointer to m_value is set equal to the value temporary string

 
 create a temporary node m that is set equal to m
 while m's pointer to next is not equal to nullptr
    create a temporary node l that is set equal to m's pointer to next
    if m's pointer to last name is equal to lastName
        if firstName is less than m's pointer to firstName and less than l's pointer's to firstName
            create a temporary string that is set equal to head's pointer to firstName
            create a temporary string that is set equal to head's pointer to lastName
            create a temporary BirthdayType that is set equal to head's pointer to m_value
            
            m's pointer to firstName is set equal to firstName
            m's pointer to lastName is set equal to lastName
            m's pointer to m_value is set equal to value
 
            create a new Node newNode
            newNode's pointer to lastName is set equal to temp
            newNode's pointer to firstName is set equal to temp
            newNode's pointer to m_value is set equal to temp
            
            newNode's pointer to next is set equal to m's pointer to next
            newNode's pointer to prev is set equal to m
            m's pointer to next's pointer to prev is set equal to newNode
            m's pointer to next is set equal to newNode
 
            increment m_size
            return true
 
 else if firstName is greater than m's pointer to firstName and less than l's pointer to firstName
    create a temporary string that is set equal to head's pointer to firstName
               create a temporary string that is set equal to head's pointer to lastName
               create a temporary BirthdayType that is set equal to head's pointer to m_value
               
               m's pointer to firstName is set equal to firstName
               m's pointer to lastName is set equal to lastName
               m's pointer to m_value is set equal to value
    
               create a new Node newNode
               newNode's pointer to lastName is set equal to temp
               newNode's pointer to firstName is set equal to temp
               newNode's pointer to m_value is set equal to temp
               
               newNode's pointer to next is set equal to m's pointer to next
               newNode's pointer to prev is set equal to m
               m's pointer to next's pointer to prev is set equal to newNode
               m's pointer to next is set equal to newNode
    
               increment m_size
               return true
 
            
             if lastName greater than m's pointer to lastName and less than l's pointer to lastName
                create a new Node newNode
                newNode's pointer to lastName is set equal to temp
                newNode's pointer to firstName is set equal to temp
                newNode's pointer to m_value is set equal to temp
                              
                newNode's pointer to next is set equal to m's pointer to next
                newNode's pointer to prev is set equal to m
                m's pointer to next's pointer to prev is set equal to newNode
                m's pointer to next is set equal to newNode
                   
                increment m_size
                return true
             
             m is set equal to m's pointer to next
             
            if lastName is greater tail's pointer to lastName
                create a temporary string that is set equal to tail's pointer to firstName, lastName
                create a temp BirthdayType that is set equal to tail's pointer to m_value
                
                tail's pointer to firstName is set equal to firstName
                tail's pointer to lastName is set equal to lastName
                tail's pointer to m_value is set equal to value
             
                create a new Node newNode
                newNode's pointer to lastName is set equal to temp
                newNode's pointer to firstName is set equal to temp
                newNode's pointer to m_value is set equal to temp
                                         
                newNode's pointer to next is set equal to tail
                newNode's pointer to prev is set equal to tail's pointer to prev
                tail's pointer to prev's pointer to next is set equal to newNode
                tail's pointer to prev is set equal to newNode
                              
             increment m_size
                return true
                
             
             if tail's's pointer to lastname is equal to lastName
                     if firstName is greater than tail's pointer to firstName
                         create a temporary string that is set equal to tail's pointer to firstName
                         create a temporary string that is set equal to tail's pointer to lastName
                         create a temporary BirthdayType that is set equal to tail's pointer to m_value
                         
                         tail's pointer to firstName is set equal to firstName
                         tail's pointer to lastName is set equal to lastName
                         tail's pointer to m_value is set equal to value
              
                         create a new Node newNode
                         newNode's pointer to lastName is set equal to temp
                         newNode's pointer to firstName is set equal to temp
                         newNode's pointer to m_value is set equal to temp
                         
                         newNode's pointer to next is set equal to tail
                         newNode's pointer to prev is set equal to tail's pointer to prev
                         tail's pointer to prev's pointer to next is set equal to newNode
                         tail's pointer to prev is set equal to newNode
              
                         increment m_size
                         return true
              
              else if lastName is less than head's pointer to lastName
                 create a temporary string that is set equal to head's pointer to firstName
                            create a temporary string that is set equal to head's pointer to lastName
                            create a temporary BirthdayType that is set equal to head's pointer to m_value
                            
                            head's pointer to firstName is set equal to firstName
                            head's pointer to lastName is set equal to lastName
                            head's pointer to m_value is set equal to value
                 
                            create a new Node newNode
                            newNode's pointer to lastName is set equal to temp
                            newNode's pointer to firstName is set equal to temp
                            newNode's pointer to m_value is set equal to temp
                            
                            newNode's pointer to next is set equal to m's pointer to next
                            newNode's pointer to prev is set equal to m
                            head's pointer to next's pointer to prev is set equal to newNode
                            head's pointer to next is set equal to newNode
                 
                            increment m_size
                            return true
              
    return false
            
*/
bool BirthdayParty::addInvitee(const std::string& firstName, const std::string& lastName, const BirthdayType& value){
    
    Node*x = head;
    while (x != nullptr){ //searches for same
        if (x->firstName == firstName && x->lastName == lastName)
            return false;
        x = x->next;
    }
    
    
    Node*q = head;
    if (m_size == 0){
        head->firstName = firstName;
        head->lastName = lastName;
        head->m_value = value;
        m_size++;
        return true; 
    }
    if (m_size == 1 ){
        if (lastName == q->lastName){
            if (firstName < q ->firstName){
                std::string firstTemp = head->firstName;
                std::string lastTemp = head ->lastName;
                BirthdayType temp = head ->m_value;
                
                head->firstName = firstName;
                head->lastName = lastName;
                head->m_value = value;
                
                tail ->firstName = firstTemp;
                tail ->lastName = lastTemp;
                tail -> m_value = temp;
                
                m_size++;
                return true;
            }
            else if (firstName > q ->firstName){
                tail->firstName = firstName;
                           tail->lastName = lastName;
                           tail->m_value = value;
                           m_size++;
                           return true;
            }
        }
   
        else if (lastName < q->lastName){
            std::string firstTemp = head->firstName;
            std::string lastTemp = head ->lastName;
            BirthdayType temp = head ->m_value;
            
            head->firstName = firstName;
            head->lastName = lastName;
            head->m_value = value;
            
            tail ->firstName = firstTemp;
            tail ->lastName = lastTemp;
            tail -> m_value = temp;
            
            m_size++;
            return true;
        }
        else{
            tail->firstName = firstName;
            tail->lastName = lastName;
            tail->m_value = value;
            m_size++;
            return true;
        }
        
        
    }
    
    
    Node * m = head;
    
    while (m->next != nullptr){ //iterates all the way up before the tail
        Node * l = m->next;
        if (m->lastName == lastName){
            if (firstName < m->firstName && firstName < l->firstName){ //if the first name is smaller than the node's firstName and the node that follows it
            std::string firstTemp = m->firstName;
            std::string lastTemp = m ->lastName;
            BirthdayType temp = m ->m_value;
            
            m->firstName = firstName;
            m->lastName = lastName;
            m->m_value = value;
            
            Node*newNode = new Node;
            newNode -> lastName = lastTemp;
            newNode -> firstName = firstTemp;
            newNode -> m_value = temp;
            
            //relinking
            newNode -> next = m->next;
            newNode -> prev = m;
            m->next->prev = newNode;
            m->next = newNode;
            
            
            m_size++;
            return true;
            }
            else if (firstName > m->firstName && firstName < l->firstName){
                Node*newNode = new Node;
                newNode -> lastName = lastName;
                newNode -> firstName = firstName;
                newNode -> m_value = value;
                
                newNode -> next = m->next;
                newNode -> prev = m;
                m->next->prev = newNode;
                    m->next = newNode;
                m_size++;
                return true;
            }
           
        }
        
        if (lastName > m->lastName && lastName < l ->lastName){
            Node*newNode = new Node;
            newNode -> lastName = lastName;
            newNode -> firstName = firstName;
            newNode -> m_value = value;
            
            newNode -> next = m->next;
            newNode -> prev = m;
            m->next->prev = newNode;
            m->next = newNode;
            m_size++;
            return true;
        }
        m = m->next;
      
    }
    if (lastName > tail->lastName){
        std::string firstTemp = tail->firstName;
                   std::string lastTemp = tail ->lastName;
                   BirthdayType temp = tail ->m_value;
                   
                   tail->firstName = firstName;
                tail->lastName = lastName;
                   tail->m_value = value;
                   
                   Node*newNode = new Node;
                   newNode -> lastName = lastTemp;
                   newNode -> firstName = firstTemp;
                   newNode -> m_value = temp;
                   
                   //relinking
        
        newNode->next = tail;
        newNode->prev = tail->prev;
        tail ->prev->next = newNode;
        tail->prev = newNode;
        
                   
                   m_size++;
                   return true;
    }
    
    
    if (lastName == tail->lastName){
        if (firstName > tail ->firstName){
            std::string firstTemp = tail->firstName;
                       std::string lastTemp = tail ->lastName;
                       BirthdayType temp = tail ->m_value;
                       
                       tail->firstName = firstName;
                    tail->lastName = lastName;
                       tail->m_value = value;
                       
                       Node*newNode = new Node;
                       newNode -> lastName = lastTemp;
                       newNode -> firstName = firstTemp;
                       newNode -> m_value = temp;
                       
                       //relinking
            
            newNode->next = tail;
            newNode->prev = tail->prev;
            tail ->prev->next = newNode;
            tail->prev = newNode;
            
                       
                       m_size++;
                       return true;
        }
    }
    if (lastName < head->lastName){
        std::string firstTemp = head->firstName;
                   std::string lastTemp = head ->lastName;
                   BirthdayType temp = head ->m_value;
                   
                   head->firstName = firstName;
                head->lastName = lastName;
                   head->m_value = value;
                   
                   Node*newNode = new Node;
                   newNode -> lastName = lastTemp;
                   newNode -> firstName = firstTemp;
                   newNode -> m_value = temp;
                   
                   //relinking
        
        newNode->next = head->next;
        newNode->prev = head;
        head->next->prev = newNode;
        head->next = newNode;
       
        
                   
                   m_size++;
                   return true;
    }
   
    return false;
}

/*
Psuedocode:

 create a temporary node p that is set equal to other's head
 set other's head equal to this's head
 set this's head equal to p
 
 create an integer that is set equal to other's m_size
 set other's m_size equal to this's m_size
 set m_size equal to other.size
*/
void BirthdayParty::changeGuestList(BirthdayParty& other){
// Exchange the contents of this list with the other one.
    Node * p = other.head;
    other.head = head;
    head = p;
    
    int otherSize = other.m_size;
    other.m_size = m_size;
    m_size = otherSize;
}

/*
Psuedocode:

 create a temporary node p that is set equal to head
 while p is not a nullptr
    if the argument's firstName is equal to p's pointer to first name and the argument's lastName is equal to p's pointer to last name
        p's pointer to m_value is set equal to the argument's value
        return true
    p is set equal to p's pointer to next
 end while loop
 return false
*/
bool BirthdayParty::modifyInvitee(const std::string& firstName, const std::string& lastName, const BirthdayType& value){
    
    Node*p = head;
    while (p!= nullptr){
        if (firstName == p->firstName && lastName == p->lastName){
            p->m_value = value;
            return true;
        }
        p = p->next;
    }
    return false;
}
/*
Psuedocode:

 create a temporary node p that is set equal to head
 while p is not a nullptr
    if p's pointer to firstName is equal to the argument's firstName and p's pointer to lastName is equal to the argument's lastName
        p's pointer to firstName is set equal to the argument's firstName
        p's pointer to lastName is set equal to the argument's lastName
        p's pointer to m_value is set equal to the argument's value
        return ture
    p is set equal to p's pointer to next
 end while loop
 
 call addInvitee with the parameters firstName, lastName, value
 return true
        
*/
bool BirthdayParty::addOrModify(const std::string& firstName, const std::string& lastName, const BirthdayType& value){
    
    Node * p = head;
    
    while (p != nullptr){
        if (p->firstName == firstName && p->lastName == lastName){
            p->firstName = firstName;
            p->lastName = lastName;
            p->m_value = value;
            return true;
        }
        p = p->next;
    }
    addInvitee(firstName, lastName, value);
    return true;
}

/*
 Psuedocode:
 
 create a temporary node p that is set equal to head
 while p is not a nullptr
    if p is equal to head and p's pointer to firstName is equal to firstName and p's pointer to lastName is equal to lastName
        p's pointer to next's pointer to previous is set equal to nullptr
        head is set equal to p's pointer to next
        delete p
        decrement m_size
        return true
 
    if p is equal to tail and p's pointer to firstName is equal to firstName and p's pointer to lastName is equal to lastName
        p's pointer to prev's pointer to next is set equal to nullptr
        delete p
        decrement m_size
        return true
 
    if p's pointer to firstName is equal to firstName and p's pointer to lastName is equal to lastName
        p's pointer to prev's pointer to next is set equal to p's pointer to next
        p's pointer to next's pointer to prev is set equal to p's pointer to prev
        delete p
        decrement m_size
        return true
 
    p is set equal to p's pointer to next
 end while loop
 return false 
 */
bool BirthdayParty::dropFromGuestList(const std::string& firstName, const std::string& lastName){
    
    Node*p = head;
    
    while (p!= nullptr){
        if (p == head && p->firstName == firstName && p->lastName == lastName){ //head
            p->next->prev = nullptr;
            head = p->next;
            delete p;
            m_size--;
            return true; 
        }
        if (p == tail && p->firstName == firstName && p->lastName == lastName){ //tail
            p->prev->next = nullptr;
            delete p;
            m_size--;
            return true;
        }
        if (p->firstName == firstName && p->lastName == lastName){ //middle of the list
            p->prev->next = p->next;
            p->next->prev = p->prev;
            delete p;
            m_size--;
            return true;
        }
        
        p = p->next;
    }
    return false;
}

/*
 Psuedocode
 
 create a temporary node p that is set equal to head
 while p is not a nullptr
    if p's pointer to firstName is equal to the argument's firstName and p's pointer to lastName is equal to the argument's lastName
        return true
    set p equal to p's pointer to next
end while loop
 return false
 */
bool BirthdayParty::personOnGuestList(const std::string& firstName, const std::string& lastName) const{
    Node * p = head;
    while (p != nullptr){
        if ( p->firstName == firstName && p->lastName == lastName){
            return true;
        }
        p = p->next;
    }
    return false; 
          
}
/*
 Pseudocode

 create a temporary node p that is set equal to head
 while p is not a nullptr
    if p's pointer to firstName is equal to the argument's firstName and p's pointer to lastName is equal to the argument's lastName
        value is set equal to p's pointer to m_value
        return true
    p is set equal to p's pointer to next
 end while loop
 return false
 */
bool BirthdayParty::checkGuestList(const std::string& firstName, const std::string& lastName, BirthdayType& value) const{
    
    Node * p = head;
    while (p!= nullptr){
        if (p->firstName == firstName && p->lastName == lastName){
            value = p->m_value;
            return true;
        }
        p = p->next;
    }
    return false;
}
/*
 Pseudocode
 
 if the argument's i is less than 0 or greater than or equal to m_size
    return false
 create an integer x that is initialized to 0
 create a temporary node p that is set equal to head
 while x is not equal to i
    p is set equal to p's pointer to next
    increment x
 end while loop
 
 firstName is set equal to p's pointer to firstName
 lastName is set equal to p's pointer to lastName
 value is set equal to p's pointer to m_value
 return true
 */
bool BirthdayParty::selectInvitee(int i, std::string& firstName, std::string& lastName, BirthdayType& value) const{

    if (i < 0 || i >= m_size){
        return false;
    }
    int x = 0;
    Node * p = head;
    while (x != i){
        p = p->next;
        x++;
    }
    firstName = p->firstName;
    lastName = p->lastName;
    value = p-> m_value;
    return true;
}

/*
 Psuedocode
 
 if this object is not equal to the argument's object
    create a temporary BirthdayParty Object
    call the changeGuestList with the temp argument as its object
 
 return this
 */
const BirthdayParty& BirthdayParty::operator=(const BirthdayParty& rhs){
    if (this != &rhs){
        BirthdayParty temp;
        changeGuestList(temp);
        
    }
    return *this;
}

/*
 Psuedocode
 
 create an integer bpOneSize that is set equal to bpOne's size
 create an integer bpTwoSize that is set equal to bpTwo's size
 
 set a boolean flag equal to true
 
 create a temporary BirthdayParty Object
 
 if bpOneSize is greater than or equal to bpTwoSize
    for int i = 0; i less than bpOneSize; i++
        create a string firstName1, lastName1
        create Birthdaytype variable value1
        call bpOne's selectInvitee function with parameters i, firstName1, lastName1, value1
        call temporary object's addInvitee function with the parameters firstName1, lastName1, value1
    end for loop
    for int k = 0; k less than bpTwoSize; k++
        create a string firstName2, lastName2
        create Birthdaytype variable value2
        call bpTwo's selectInvitee function with parameters k, firstName2, lastName2, value2
        create Birthdaytype variable value3
            if temporary object's checkguestlist function is true
                if value3 is not equal to value2
                    call temporary object's dropFromGuestList function
                    set flag equal to false
                        continue
                else if value3 is equal to value2
                    continue
        call temporary object's addInvitee function
    end for loop
 
 if bpTwoSize is greater than bpOneSize
    for int i = 0; i less than bpTwoSize; i++
            create a string firstName1, lastName1
            create Birthdaytype variable value1
            call bpTwo's selectInvitee function
            call temp's addinvitee function
        end for loop
        
     for int k = 0; k less than bpTwoSize; k++
         create a string firstName2, lastName2
         create Birthdaytype variable value2
         call bpTwo's selectInvitee function with parameters k, firstName2, lastName2, value2
         create Birthdaytype variable value3
             if temporary object's checkguestlist function is true
                 if value3 is not equal to value2
                     call temporary object's dropFromGuestList function
                     set flag equal to false
                         continue
                 else if value3 is equal to value2
                     continue
         call temporary object's addInvitee function
     end for loop
 
 call temp's changeGuestList function
 return flag
 */
bool combineGuestLists(const BirthdayParty & bpOne, const BirthdayParty & bpTwo, BirthdayParty & bpJoined){
    
    int bpOneSize = bpOne.whosOnTheGuestList();
    int bpTwoSize = bpTwo.whosOnTheGuestList();
  
    bool flag = true;

    BirthdayParty temp;
    
    if (bpOneSize >= bpTwoSize){
        for (int i = 0; i < bpOneSize; i++){ //add everything from bpOne to temp
            std::string firstName1;
            std::string lastName1;
            BirthdayType value1;
            bpOne.selectInvitee(i, firstName1, lastName1, value1); //get the values of first name, last name, and value at position i
            temp.addInvitee(firstName1, lastName1, value1); //add in these values to bpJoined
        
        }
        
   
        
        for (int k = 0; k < bpTwoSize; k++){ //add everything from bpTwo to bpJoined
            std::string firstName2;
            std::string lastName2;
            BirthdayType value2;
            bpTwo.selectInvitee(k, firstName2, lastName2, value2);
            BirthdayType value3;
                if (temp.checkGuestList(firstName2, lastName2, value3)){
                    if (value3 != value2){
                    temp.dropFromGuestList(firstName2, lastName2);
                    flag = false;
                        continue;
                    }
                    else if (value3 == value2){
                        continue;
                    }
                }
            temp.addInvitee(firstName2, lastName2, value2);
            
                
        }
    }
   
        if (bpTwoSize > bpOneSize){
             for (int i = 0; i < bpTwoSize; i++){ //add everything from bpTwo to bpJoined
                 std::string firstName1;
                 std::string lastName1;
                 BirthdayType value1;
                 bpTwo.selectInvitee(i, firstName1, lastName1, value1); //get the values of first name, last name, and value at position i
                 temp.addInvitee(firstName1, lastName1, value1); //add in these values to bpJoined
             
             }
             

             
             for (int k = 0; k < bpOneSize; k++){ //add everything from bpTwo to bpJoined
                 std::string firstName2;
                 std::string lastName2;
                 BirthdayType value2;
                 bpOne.selectInvitee(k, firstName2, lastName2, value2);
                 BirthdayType value3;
                     if (temp.checkGuestList(firstName2, lastName2, value3)){
                         if (value3 != value2){
                         temp.dropFromGuestList(firstName2, lastName2);
                         flag = false;
                             continue;
                         }
                         else if (value3 == value2){
                             continue;
                         }
                     }
                 temp.addInvitee(firstName2, lastName2, value2);
                 
                     
             }
         }
    temp.changeGuestList(bpJoined);
    return flag;
}

/*
 Psuedocode
 
 create a temp BirthdayParty object
 create a string firstSearch equal to fsearch, lastSearch equal to lsearch
 create an integer bpOneSize and set it equal to bpOne's size
 if firstSearch is equal to * and lastSearch is equal to *
    for int i = 0; i < bpOneSize; i++
            create a string firstName1, lastName1
            create Birthdaytype variable value1
            call bpOne's selectInvitee function with parameters i, firstName1, lastName1, value1
            call temp's addinvitee function with parameters firstName1, lastName1, value1
    end for loop
    call temp's changeGuestList function
    return
 
 if firstSearch is equal to *
    for int i = 0; i less than bpOneSize; i++
        create a string firstName1, lastName1
        create Birthdaytype variable value1
        call bpOne's selectInvitee function
        if lastName is equal to lastSearch
            call temp's addInvitee function
        else continue
    end for loop
 call temp's changeGuestList function
 return
 
 if LastSearch is equal to *
    for int i = 0; i less than bpOneSize; i++
        create a string firstName1, lastName1
        create Birthdaytype variable value1
        call bpOne's selectInvitee function
        if firstName is equal to firstSearch
            call temp's addInvitee function
        else continue
    end for loop
 call temp's changeGuestList function
 return
 */
void verifyGuestList (const std::string& fsearch,const std::string& lsearch,const BirthdayParty& bpOne, BirthdayParty& bpResult){
    
    BirthdayParty temp;
    std::string firstSearch = fsearch;
    std::string lastSearch = lsearch;
    
    int bpOneSize = bpOne.whosOnTheGuestList();
    if (firstSearch == "*" && lastSearch == "*"){
        for (int i = 0; i < bpOneSize; i++){
            std::string firstName1;
            std::string lastName1;
            BirthdayType value1;
            bpOne.selectInvitee(i, firstName1, lastName1, value1); //get the values of first name, last name, and value at position i
            temp.addInvitee(firstName1, lastName1, value1);
        }
        temp.changeGuestList(bpResult);
        return;
    }
    
    if (firstSearch == "*"){
        for (int i = 0; i < bpOneSize; i++){
            std::string firstName1;
            std::string lastName1;
            BirthdayType value1;
            bpOne.selectInvitee(i, firstName1, lastName1, value1); //get the values of first name, last name, and value at position i
            if (lastName1 == lastSearch){
                temp.addInvitee(firstName1, lastName1, value1);
            }
            else
                continue;
        }
        temp.changeGuestList(bpResult);
        return;
    }
    
    if (lastSearch == "*"){
        for (int i = 0; i < bpOneSize; i++){
            std::string firstName1;
            std::string lastName1;
            BirthdayType value1;
            bpOne.selectInvitee(i, firstName1, lastName1, value1); //get the values of first name, last name, and value at position i
            if (firstName1 == firstSearch){
                temp.addInvitee(firstName1, lastName1, value1);
            }
            else
                continue;
        }
        temp.changeGuestList(bpResult);
        return;
    }
}
