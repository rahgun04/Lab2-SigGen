module sigdelay #(
    parameter A_WIDTH = 8,
                D_WIDTH = 8
)(
    input   logic   clk,
    input   logic   rst,
    input   logic   en,
    input   logic   wen,
    input   logic   [D_WIDTH-1:0] incr,
    input   logic   [D_WIDTH-1:0] offset,
    input   logic   [D_WIDTH-1:0] sig,
    output logic [D_WIDTH-1:0] dout
);

    logic [A_WIDTH-1:0] address;
    logic [A_WIDTH-1:0] addressOffset;
    

counter addrCounter(
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count (address),
    .offset (offset),
    .countOffset (addressOffset)
);


ram ram (
    .clk (clk),
    .addrout (address),
    .dataout (dout),
    .addrin (addressOffset),
    .datain (sig),
    .wen(wen)
);

endmodule
