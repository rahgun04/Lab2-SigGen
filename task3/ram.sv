module ram #(
    parameter ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8
)(
input logic clk,
input logic [ADDRESS_WIDTH-1:0] addrout,
output logic [DATA_WIDTH-1:0] dataout,
input logic [ADDRESS_WIDTH-1:0] addrin,
input logic [DATA_WIDTH-1:0] datain,
input logic wen
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    dataout <= ram_array[addrout];
    if (wen) ram_array[addrin] <= datain;
end 
endmodule
