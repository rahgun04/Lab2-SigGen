module sinegen #(
    parameter A_WIDTH = 8,
                D_WIDTH = 8
)(
    input   logic   clk,
    input   logic   rst,
    input   logic   en,
    input   logic   [D_WIDTH-1:0] incr,
    input   logic   [D_WIDTH-1:0] offset,
    output logic [D_WIDTH-1:0] dout,
    output logic [D_WIDTH-1:0] dout1
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


rom sineRom (
    .clk (clk),
    .addr (address),
    .addr1 (addressOffset),
    .dout (dout),
    .dout1 (dout1)
);

endmodule
