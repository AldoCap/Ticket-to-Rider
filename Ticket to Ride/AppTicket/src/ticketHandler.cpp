#include "../include/ticketHandler.hpp"

TicketHandler::TicketHandler()
{
    ticketStorage = new string [maxLength];
}

void TicketHandler::createTicket( TelephoneRepresentativeHandler* telephoneRepresentativeHandler,
                            Client* client, string, string)
{

} 
string TicketHandler::updateStatus(string uuid)
{
    return this->idClient = uuid; 
}

void TicketHandler::sendNotification(string uuid)
{

}

void TicketHandler::closeTicket(string uuid)
{

} 

void TicketHandler::viewTicket(string uuid)
{

}

void TicketHandler::addIncident(Client* client)
{

}

TicketHandler::~TicketHandler()
{

}
