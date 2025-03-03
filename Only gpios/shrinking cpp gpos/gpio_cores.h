#ifndef _GPIO_H_INCLUDED
#define _GPIO_H_INCLUDED

#include "io_rw.h"
#include "io_map.h"

// header file for gpio class defenition

// first GpoCore

class GpoCore 
{


    
    public:
    // Constructor and Destructure
    GpoCore(uint32_t core_base_addr);

    uint32_t base_addr;
    uint32_t wr_data;


    // function overloading
    void write(uint32_t data);

};


#endif
