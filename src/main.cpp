//Oliver Olsen s205443
//Nils Wulff   s223968

/* 13a The memory where the pointer is stored contains the address of where the pointer is "pointing"
*  13b It first prints address of the first element as a HEX value. Next it prints the value of the first element of the array.
*  13c Every cycle the memory address read increases by 2, even after the array is finished. 
*  This means the pointer is returning whatever data is in these unused memory addresses. 
*  
*/


#include <Arduino.h>


int pointer_a    = 0;
int pointer_b    = 1;
int cached_value = 0;


void swap(int *pointer_a, int *pointer_b, int cached_value);



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

Serial.println("Before Swap:");
Serial.print("a = ");
Serial.println(pointer_a);
Serial.print("b = ");
Serial.println(pointer_b);


swap(&pointer_a, &pointer_b, cached_value);

Serial.println("After Swap");
Serial.print("a = ");
Serial.println(pointer_a);
Serial.print("b = ");
Serial.println(pointer_b);


delay(3000);}



/**
 * @brief Swaps the vaiables
 * 
 * @param pointer_a int 0 the very first time
 * @param pointer_b int 1 the very first time
 * @param cached_value Stores the value of pointer_a, briefly
 */
void swap(int *pointer_a, int *pointer_b, int cached_value){
  cached_value = *pointer_a;
  *pointer_a = *pointer_b;
  *pointer_b = cached_value;

}