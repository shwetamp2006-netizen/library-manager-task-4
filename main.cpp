#include "Algorithms.h"
#include <iostream>
#include <vector>
int main() {
 std::vector<Book> books={{103,"Introduction to Algorithms","Cormen",1,1},
 {101,"The C++ Programming Language","Bjarne Stroustrup",3,3},
 {102,"Clean Code","Robert C. Martin",2,1},{104,"Data Structures","Seymour Lipschutz",2,0}};
 int c;
 do {
  std::cout<<"\\n=== Library Algorithms and Reports ===\\n1. Linear search by ID\\n2. Sort by ID\\n3. Binary search by ID\\n4. Sort by title\\n5. Availability report\\n6. List books\\n0. Exit\\nChoice: ";
  if(!(std::cin>>c)) return 0;
  if(c==1||c==3) { int id; std::cout<<"Book ID: "; std::cin>>id;
   if(c==1) { int i=linearSearchById(books,id); if(i<0) std::cout<<"Book not found.\\n"; else std::cout<<books[i].id<<" | "<<books[i].title<<"\\n"; }
   else { insertionSortById(books); int i=binarySearchById(books,id); if(i<0) std::cout<<"Book not found.\\n"; else std::cout<<books[i].id<<" | "<<books[i].title<<"\\n"; }
  } else if(c==2) { insertionSortById(books); std::cout<<"Sorted by ID.\\n"; }
  else if(c==4) { bubbleSortByTitle(books); std::cout<<"Sorted by title.\\n"; }
  else if(c==5) std::cout<<availabilityReport(books);
  else if(c==6) for(const auto& b:books) std::cout<<b.id<<" | "<<b.title<<" | "<<b.availableCopies<<"/"<<b.totalCopies<<" available\\n";
  else if(c!=0) std::cout<<"Invalid choice.\\n";
 } while(c!=0);
 return 0;
}
