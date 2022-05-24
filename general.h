#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "identity.h"
#include "ticket.h"

//inheritance from identity
class General :public Identity
        {
        public:
            static int ticket;
            bool has_ticket = false;
            General();


            General(string name, string password);

            virtual void operation_menu();

            //Application for reservation
            void apply_order();

            //check reservation
            void show_order();

            //cancel reservation
            void cancel_order();


        };