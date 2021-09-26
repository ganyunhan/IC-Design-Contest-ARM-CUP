// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __processChunk_mell_H__
#define __processChunk_mell_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct processChunk_mell_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 27;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(processChunk_mell_ram) {
        ram[0] = "0b00010010";
        ram[1] = "0b00010110";
        ram[2] = "0b00011010";
        ram[3] = "0b00011110";
        ram[4] = "0b00100011";
        ram[5] = "0b00101000";
        ram[6] = "0b00101101";
        ram[7] = "0b00110011";
        ram[8] = "0b00111001";
        ram[9] = "0b00111111";
        ram[10] = "0b01000110";
        ram[11] = "0b01001101";
        ram[12] = "0b01010101";
        ram[13] = "0b01011101";
        ram[14] = "0b01100101";
        ram[15] = "0b01101110";
        ram[16] = "0b01111000";
        ram[17] = "0b10000010";
        ram[18] = "0b10001101";
        ram[19] = "0b10011001";
        ram[20] = "0b10100101";
        ram[21] = "0b10110010";
        ram[22] = "0b11000000";
        ram[23] = "0b11001110";
        ram[24] = "0b11011110";
        ram[25] = "0b11101110";
        ram[26] = "0b11111111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(processChunk_mell) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 27;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


processChunk_mell_ram* meminst;


SC_CTOR(processChunk_mell) {
meminst = new processChunk_mell_ram("processChunk_mell_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~processChunk_mell() {
    delete meminst;
}


};//endmodule
#endif