#include "Algorithms.h"
#include <cassert>
#include <iostream>
#include <vector>
int main() {
 std::vector<Book> b={{103,"Introduction to Algorithms","Cormen",1,1},
 {101,"The C++ Programming Language","Stroustrup",3,3},{102,"Clean Code","Martin",2,1}};
 assert(linearSearchById(b,103)==0);             // normal
 assert(linearSearchById(b,999)==-1);            // invalid/missing
 std::vector<Book> empty;
 assert(linearSearchById(empty,1)==-1);           // empty boundary
 std::vector<Book> one={{7,"One Book","Author",1,1}};
 assert(linearSearchById(one,7)==0);              // single-item boundary
 assert(binarySearchById(one,7)==0);
 assert(binarySearchById(one,8)==-1);
 insertionSortById(b);
 assert(b[0].id==101 && b[1].id==102 && b[2].id==103);
 assert(binarySearchById(b,102)==1 && binarySearchById(b,999)==-1);
 bubbleSortByTitle(b); assert(b[0].title=="Clean Code");
 bubbleSortByTitle(empty); bubbleSortByTitle(one);
 assert(availabilityReport(b).find("Book titles: 3")!=std::string::npos);
 assert(availabilityReport(empty).find("Book titles: 0")!=std::string::npos);
 std::cout<<"All tests passed (normal, boundary, and invalid cases).\\n";
}
