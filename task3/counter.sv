module counter #(
parameter WIDTH = 8
)(
// interface signals
input logic clk, // clock
input logic rst, // reset
input logic en, // counter enable
input logic [WIDTH-1:0] incr,
input logic [WIDTH-1:0] offset,
output logic [WIDTH-1:0] count, // count output
output logic [WIDTH-1:0] countOffset // count output
);

initial begin
    countOffset <= count - (offset * incr);
end;


always_ff @ (posedge clk) begin
    if (rst) begin
        count <= {WIDTH{1'b0}};
        countOffset <= {WIDTH{1'b0}} - (offset * incr);
    end
    else   begin
        count <= count + (en ? incr : {WIDTH{1'b0}});
        countOffset <= countOffset + (en ? incr : {WIDTH{1'b0}});
    end
    
end    

endmodule
