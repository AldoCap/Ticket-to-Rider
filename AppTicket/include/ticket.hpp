#ifndef TICKET__
#define TICKET__
#include <string>
#include <iostream>
using namespace std;

class Ticket 
{
    public:
        Ticket(string ticketID,string representativeID,string clientID,string priority,string description);  
        void setCategory(string); 
        string getDescription(); 
        void closeTicket(string uuid);
        void viewStatusTicket(string uuid);  
        void setDescription(string); 
        string getID();
        ~Ticket(); 
        
    private: 
        string representativeID, nameClient, 
            surnameClient,clientID,priority, description,uuid; 

};

#endif