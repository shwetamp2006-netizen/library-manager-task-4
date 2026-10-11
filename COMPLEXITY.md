# Algorithm and Complexity Notes

Let n be the number of book records.

| Algorithm | Time complexity | Extra space |
|---|---|---|
| Linear search by ID | O(n) worst case | O(1) |
| Binary search by ID (sorted input) | O(log n) | O(1) |
| Insertion sort by ID | O(n^2) worst case; O(n) best case | O(1) |
| Bubble sort by title | O(n^2) worst case; O(n) best case with early exit | O(1) |
| Availability report | O(n) | O(1) auxiliary space |

Binary search requires ascending ID order. The app sorts by ID before using it.
Search returns the matching index or -1 if no match exists. Sorting changes order, not records.
The report counts titles, total copies, available copies, and issued copies.

## Build application
`g++ -std=c++11 -Wall -Wextra -pedantic main.cpp Algorithms.cpp -o library_manager`

## Build and run automated tests
`g++ -std=c++11 -Wall -Wextra -pedantic tests.cpp Algorithms.cpp -o library_tests`
`./library_tests`

Tests cover normal matches, missing IDs, empty and single-book vectors, sorting order, and report totals.
