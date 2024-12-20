// binary to decimmal and decimal to binary

#include <stdio.h>

int BtoD(int binary){
    int num = binary;
    int dec = 0;

    int base = 1;
    
    int temp = num;

    while (temp){
        int last = temp % 10;

        temp /= 10;
        dec += last * base;
        base *= 2;
    }

    return dec;
}

int DtoB(int decimal){
    int bin = 0;

    int rem, i = 1;

    // loop to convert to binary
    while (decimal != 0) {
        
        // get remainder of n divided by 2
        rem = decimal % 2;
        
        // divide n by 2
        decimal /= 2;
        
        // multiply remainder by i
        // add the product to bin
        bin += rem * i;
        
        // multiply i by 10
        i *= 10;
    }
    return bin;
}

int main(){
    long long binary = 0b1011001;
    int decimal = 83, contob, contod;

    contod = BtoD(binary);
    contob = DtoB(decimal);

    printf("%d in decimal is %d\n", binary, contod);
    printf("%d in binary is %d", decimal, contob);


    return 0;
}
