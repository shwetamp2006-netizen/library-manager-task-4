#include "Algorithms.h"
#include <sstream>
#include <algorithm>
int linearSearchById(const std::vector<Book>& b, int id) {
 for (std::size_t i=0;i<b.size();++i) if (b[i].id==id) return (int)i;
 return -1;
}
int binarySearchById(const std::vector<Book>& b, int id) {
 int low=0, high=(int)b.size()-1;
 while(low<=high) { int mid=low+(high-low)/2;
  if(b[mid].id==id) return mid;
  if(b[mid].id<id) low=mid+1; else high=mid-1;
 }
 return -1;
}
void insertionSortById(std::vector<Book>& b) {
 for(std::size_t i=1;i<b.size();++i) { Book x=b[i]; int j=(int)i-1;
  while(j>=0 && b[j].id>x.id) { b[j+1]=b[j]; --j; } b[j+1]=x;
 }
}
void bubbleSortByTitle(std::vector<Book>& b) {
 if(b.size()<2) return;
 for(std::size_t end=b.size()-1;end>0;--end) { bool swapped=false;
  for(std::size_t i=0;i<end;++i) if(b[i].title>b[i+1].title) {
   std::swap(b[i],b[i+1]); swapped=true;
  }
  if(!swapped) break;
 }
}
std::string availabilityReport(const std::vector<Book>& b) {
 int total=0, available=0;
 for(const auto& x:b) { total+=x.totalCopies; available+=x.availableCopies; }
 std::ostringstream out;
 out<<"Book titles: "<<b.size()<<"\nTotal copies: "<<total
    <<"\nAvailable copies: "<<available<<"\nIssued copies: "<<total-available<<"\n";
 return out.str();
}
