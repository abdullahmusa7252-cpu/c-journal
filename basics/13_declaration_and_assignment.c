#include <stdio.h>

int declare(){
    int dec; // <---- declaration
    dec = 1; // <--  Assignment 
    printf("%d", dec);
    return 0;}
int main(){
    return declare(); // <-- Function Call
}
