#pragma once
#include<iostream>
using namespace std;

class Ticket
        {
        public:
            int id;
            bool valid;

            Ticket();
            Ticket(int id,bool valid);
        };

