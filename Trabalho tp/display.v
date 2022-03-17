module display (entrada, a, b, c, d, e, f , g);
    input wire [4:0] entrada;
    output reg a, b, c, d, e, f, g;
    //output reg [6:0] sete_segmentos;
    always @(*) begin
        case (entrada)
            5'b00000:
                {a, b, c, d, e, f, g} = 7'b1111001;
            5'b00001:
                {a, b, c, d, e, f, g} = 7'b0111110;
            5'b00010:
                {a, b, c, d, e, f, g} = 7'b0110011;
            5'b00011:
                {a, b, c, d, e, f, g} = 7'b0000101;
            5'b00100:
                {a, b, c, d, e, f, g} = 7'b0001111;
            5'b00101:
                {a, b, c, d, e, f, g} = 7'b1101101;
            5'b00110:
                {a, b, c, d, e, f, g} = 7'b1111110;
            5'b00111:
                {a, b, c, d, e, f, g} = 7'b1001110;
            5'b01000:
                {a, b, c, d, e, f, g} = 7'b1111111;
            5'b01001:
                {a, b, c, d, e, f, g} = 7'b1111011;
            5'b01010:
                {a, b, c, d, e, f, g} = 7'b1110011;
            5'b01011:
                {a, b, c, d, e, f, g} = 7'b1101101;
            5'b01100:
                {a, b, c, d, e, f, g} = 7'b1100111;
            5'b01101:
                {a, b, c, d, e, f, g} = 7'b0010101;
            5'b01110:
                {a, b, c, d, e, f, g} = 7'b0110000;
            5'b01111:
                {a, b, c, d, e, f, g} = 7'b1110111;
            5'b10000:
                {a, b, c, d, e, f, g} = 7'b0001110;
            5'b10001:
                {a, b, c, d, e, f, g} = 7'b1011111;
            5'b10010:
                {a, b, c, d, e, f, g} = 7'b1111011;
            5'b10011:
                {a, b, c, d, e, f, g}  = 7'b1000111;
            default:
                {a, b, c, d, e, f, g} = 7'b0000000;
        endcase
    end

endmodule