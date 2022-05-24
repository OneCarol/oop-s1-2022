#include <fstream>
#include"general.h"
#include "ticket.h"

General::General()
{
}

//constructor 
General::General(string name, string password)
{
    name = name;
    password = password;
}

//Application for reservation
void General::apply_order(){
    if(has_ticket==true){
        cout<<"you already has a general ticket!"<<endl;
        return;
    }
    if(ticket>0){
        ticket--;
        has_ticket = true;
        cout<<"Applied successfully!"<<endl;
    }else{
        cout<<"the ticket is sold out!"<<endl;
    }
};


//check the reservation
void General::show_order(){
    if(has_ticket){
        cout<<"This is a general ticket."<<endl;
    }else{
        cout<<"you don't have a general ticket!"<<endl;
    }
};

//cancel reservation
void General::cancel_order(){
    if(has_ticket){
        ticket++;
        has_ticket=false;
        cout<<"Cancelled successfully!"<<endl;
    }else{
        cout<<"You haven't order a ticket!"<<endl;
    }
};

//Show the menu of general
void General::operation_menu(){
    {
        cout << "Welcome "<< name << "to general menu!" << endl;
        cout << "__________________________________"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          1.apply order         |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          2.view order          |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          3.cancel order        |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          0.log out             |"<<endl;
        cout << "|                                |"<<endl;
        cout << "__________________________________"<<endl;
        cout << "your choice is: " << endl;
    }
};