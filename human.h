#pragma once
#include<iostream>
using namespace std;

//abstract class
class human
        {
        public:
            string name; //user name
            int ID;  //password

            int get_ID(){
                return this->id;
            };

            string get_name(){
                return this->name;
            }

            void set_ID(int ID){
                this->ID = ID;
            }

            void set_name(string name){
                this->name = name;
            }


        };

