#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

// CodeCamp.c -- EE 312 Project 1

/* Student information for project:
 *
 * Replace <NAME> with your name.
 *
 * On my honor, Zane Freeman, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Zane Freeman
 * email address: thezanefreeman@utexas.edu
 * UTEID: zcf222
 * Section 5 digit ID: 16195
 *
 */



/* Determine the hamming distance between two int arrays.
   pre: aList != null, bList != null, aList.length == bList.length == len
   post: return hamming distance between the two arrays of ints.
   Neither parameter should be altered by this function.
*/
int hammingDistance(int aList[], int bList[], int len) {
  int count = 0; //Initialization of Counter to count the number of differences
    for (int x = 0; x<len; x++) {
      if (aList[x] != bList[x]) {
          count++; //counter increments if the two positions are not equal
      }
    }
    return count;
}

/* Determine if two ints have the same last digit.
   Note that the last digit of 0 is 0 and the last digit of -12 is 2. 
   post: return true if x and y have the same last digit, false otherwise.
*/
bool lastDigit(int x, int y) {
    int difference = 0;
    int newX = abs(x);
    int newY = abs(y);
    difference = abs(newX - newY);

    if ((difference % 10) == 0) { //if you divide by ten and get NO remainder, the last digit is equal
        return true;
    }

    return false;

}

/* Determine the sum of the positive integers less than 1000 that are multiples of 3 or 5 (or both).
   post: return the sum of the integers from 1 to 1000 that are multiples of 3 or 5 or both.
*/
int sum3or5Multiples() {
    int startingValue = 1000;
    int sum = 0;

    while (startingValue > 0) {

        startingValue--;

        if ((startingValue % 5) == 0) {
            sum = sum + startingValue; // If it is a multiple of 5 add it to the sum
        }
        if ((startingValue % 3) == 0) { //If it is a multiple of 3, add it to the sum
            sum = sum + startingValue;
        }
        if ((startingValue % 15) == 0) {
            sum = sum - startingValue; //If it is a multiple of both it has already been accounted for.
        }

    }
    // EE 312 Students: put your code here
    return sum;
}

/* Reverse the digits of an integer. Return the reversed number if it is in the range of type int, 0 otherwise.
   post: return x with digits reversed if the reverse can be stored as an int, 0 otherwise. 143 3 14
*/
int reverseInt(int x) {

    int lastNumber = 0;
    int reversed = 0;
    int negative = 0;

    if (x<0){
        x = -x;
        negative = 1;
    }

    while (x>0) {
        lastNumber = (x % 10);
        reversed = (reversed * 10) + lastNumber;
        x = x / 10;
    }

    if (negative == 1){
        reversed = -reversed;
    }

    return reversed;


}

  

