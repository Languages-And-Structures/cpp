// EG 1

// int countDigits(int 12345) {
//     if (12345 == 0) return 0;
//     return 1 +  |int countDigits(int 1234) {
//                 |if (1234 == 0) return 0;
//                 return 1 +  |int countDigits(int 123) {
//                             |if (123 == 0) return 0;
//                             return 1 +  |int countDigits(int 12) {
//                                         |if (12 == 0) return 0;   
//                                         return 1 +  |int countDigits(int 1) {
//                                                     |if (1 == 0) return 0;
//                                                     return 1 +  |int countDigits(int 0) {
//                                                                 |if (n == 0) return 0;
//                             |}
//                 |} 
    
// }


// countDigits(12345)
// → 1 + countDigits(1234)
//      → 1 + countDigits(123)
//           → 1 + countDigits(12)
//                → 1 + countDigits(1)
//                     → 1 + countDigits(0)
//                          → return 0 (base case hit)
//                     → return 1 + 0 = 1
//                → return 1 + 1 = 2
//           → return 1 + 2 = 3
//      → return 1 + 3 = 4
// → return 1 + 4 = 5


//EG 2

// bool isPowerOfTwo(int 16) {
//     if (16 == 1) return true;
//     if (16 == 0 || n % 2 != 0) return false;
//     return  |bool isPowerOfTwo(int 8) {
//             |if (8 == 1) return true;
//             |if (8 == 0 || n % 2 != 0) return false;
//             |return  |bool isPowerOfTwo(int 4) {
//                     |if (4 == 1) return true;
//                     |if (4 == 0 || n % 2 != 0) return false;
//                     |return  |bool isPowerOfTwo(int 2) {
//                             |if (2 == 1) return true;
//                             |if (2 == 0 || n % 2 != 0) return false;
//                             |return  |bool isPowerOfTwo(int 1) {
//                                     |if (1 == 1) return true;
//                                     |if (1 == 0 || n % 2 != 0) return false;
//                                     |return  isPowerOfTwo(0);
//     }
    
// }

// EG 3

//int fib(int 6) {
//     if (6 <= 1) return n;
//     return fib(5) + fib(4);
//         
//fib(6)
// → fib(5) + fib(4)
// → fib(4) + fib(3) + fib(3) + fib(2)
// → fib(3) + fib(2) + fib(2) + fib(1) + fib(2) + fib(1)
// → fib(3) + fib(2) + fib(2) + 1 + fib(2) + 1
// → fib(2) + fib(1) + fib(1) + fib(0) + fib(1) + fib(0) + 1 + 1
// → fib(1) + fib(0) + 1 + 1 + 1 + 1 + 1 + 1
// → 1 + 1 + 1 + 1 + 1 + 1 + 1 + 1


//EG 4 

//int findMax(int* arr, int size){
//  if (size == 1) return arr[0]; // base case: only one element
//  if (arr[size - 1] > arr[size - 2]) {arr[size - 2] = arr[size - 1]};
//  return findMax(arr, size - 1); // recursive call with reduced size


//
//
//
//
//

//EG 5

// void printReverse(int* arr, int size){
//     if (size == 0) return; // base case: no elements left to print
//     std::cout << arr[size - 1] << " "; // print last element 
//     printReverse(arr, size - 1); // recursive call with reduced size}

//EG 6

// int countOccurrences(int* arr, int size, int x);
//     if (size == 0) return 0; // base case: no elements left to check
//     if (arr[size - 1] == x) 
//      return 1 + countOccurrences(arr, size - 1, x); // found x, count it

//EG 7

// void printEvens(int* arr, int size);
//     if (size == 0) return; // base case: no elements left to check
//     if (arr[size - 1] % 2 == 0) std::cout << arr[size - 1] << " "; // print even number  
//     printEvens(arr, size - 1); // recursive call with reduced size

//EG 8
// void findIndices(int* arr, int size, int x, int index = 0){
//     if (size == 0) return; // base case: no elements left to check
//     if (arr[size - 1] == x) std::cout << index << " "; // found x, print index
//     findIndices(arr, size - 1, x, index + 1); // recursive call with reduced size and incremented index
// }
