#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int c = left - right;
    return c * c;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 ) { return false;}
    if ((mask & (1 << bit_pos)) == 0){return false;}

    return true;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left > right) left = left ;
    else  left = right ;
    if (left < middle) left = middle;


    return left;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr && right != nullptr){
    int c = *left;
    int d = *right;
    *left = d;
    *right = c; }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr == nullptr) return 0;
    if (length <= 0) return 0;
    int summa = 0;
    int i;
    for(i = 0; i < length; i++) arr[i];
    for(i = 0; i < length; i++) summa = summa + arr[i];
    return summa;

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr && length > 0){

    int i;
    for(i = 0; i < length; i++){ arr[i];}
    int maxi = arr[0];
    int maxi1 = 0;

    for(i = 0; i < length; i++){if (arr[i] > maxi) {maxi = arr[i]; maxi1 = i;}}
    return arr + maxi1;}




    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *arr = new int[length];
      std::fill
          (arr, arr +length, init_value);
      return arr;
    };



    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (length > 0 && arr_in != nullptr) {
      int *arr = new int[length];
      std::copy (arr_in, arr_in +length, arr);
      return arr;
    }

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    }
    else if (k <= 0){
      os << "Invalid argument: k\n";
    }
    else if (length<= 0){
      os << "Invalid argument: length\n";
    }
    else{
      for(int i = 0; i < length; i++){
        if (i % k == 0){
          os <<arr[i]<< "\t";
        }
      }
    }
  }

}  // namespace assignment
