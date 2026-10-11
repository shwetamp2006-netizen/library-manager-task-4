#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "Book.h"
#include <vector>
#include <string>
int linearSearchById(const std::vector<Book>& books, int id);
int binarySearchById(const std::vector<Book>& books, int id); // Input must be sorted by ID.
void insertionSortById(std::vector<Book>& books);
void bubbleSortByTitle(std::vector<Book>& books);
std::string availabilityReport(const std::vector<Book>& books);
#endif
