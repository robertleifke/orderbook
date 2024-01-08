//////////////////////////////////////////////////////////////////////
// Name        : main.cpp                                           //
// Author      : Robert Leifke                                      //
// License     : Unlicensed, 2024                                   //
// Description : Order mactching engine                             //
//////////////////////////////////////////////////////////////////////

// #include "project/tmp.hpp"
#include <iostream>

using namespace OrderBook;

int main(int argc, char **argv) {
   if (argc == 1) {
      std::cout << "Usage: OrderBookProcessor <filename>" << std::endl;
      return -1;
   }

// int main() {

//     struct orders {
//         int order_id;
//         int order;
//         double 
//     }
// }

// int tmp::add(int a, int b) { return a + b; }
