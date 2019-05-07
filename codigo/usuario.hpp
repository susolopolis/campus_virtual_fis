#pragma once

#include <iostream>
#include <string>

typedef struct {   
    std::string title;
    double mark;
    std::string date;
    std::string description;
}tarea;


class usuario {
    private:
        std::string full_name_;
        int code_;
        bool teacher_;
        
    public:
        usuario(std::string full_name, int code, bool teacher) :
            full_name_(full_name),
            code_(code),
            teacher_(teacher)        
        { /*code*/}


        std::string get_name(void){
            return full_name_;
        }
        
        void set_name(std::string full_name){
            full_name_ = full_name;
        }


        int get_code() {
            return code_;
        }
        void set_name(int code){
            code_ = code;
        }


        bool isProfesor(){
            return true;
        }

        ~usuario(){}
};


