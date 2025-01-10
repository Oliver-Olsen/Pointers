//Oliver Olsen s205443
//Nils Wulff   s223968

// 13a The memory where the pointer is stored contains the address of where the pointer is "pointing"
// 13b It first prints address of the first element as a HEX value. Next it prints the value of the first element of the array.


#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

int a[5] = {9,2,42,5,8};
int *pointer = &a[0];
void loop() {
Serial.print("Address of pointer is ");
Serial.print((unsigned int)pointer, HEX);
Serial.println();
Serial.print("Value of pointer is ");
Serial.print(*pointer);
Serial.println();
pointer++;;
delay(3000);}