
#include "ticket.h"

Ticket::Ticket(){
    this-> id = 0;
    this-> valid = false;
}

Ticket::Ticket(int id, bool valid) {
    this->id = id;
    this->valid = id;
}