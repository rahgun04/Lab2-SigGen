#include "Vsinegen.h"
#include "verilated.h" 
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk; 
    
    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vsinegen* top = new Vsinegen;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;

    top->trace (tfp, 99); 
    tfp->open ("counter.vcd"); 

    if (vbdOpen()!=1) return (-1);
    vbdHeader("Lab 2:' SineGen");
    vbdSetMode(1);

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->incr = 1;
    top->en = 1;


// run simulation for many clock cycles thmisflmfonh

    for (int i = 0; i < 3000; i++){
        for (clk=0; clk<2; clk++) {
            tfp->dump (2*i+clk); // unit is in p5!!!
            top->clk = !top->clk;
            top->eval ();
        } 

        top->incr = vbdValue();
        vbdPlot((int) top->dout, 0, 255);
        

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);                // ... exit if finish OR 'q' pressed
    }

        
    vbdClose();
    tfp->close();
    exit(0);
}