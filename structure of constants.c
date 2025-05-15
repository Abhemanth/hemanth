#include <stdio.h>
struct Book {
    const char *title;
    const int pages;
};
void main() {
    struct Book b = {"C Programming", 300};
    // b.pages = 400; // Error: pages is const
    printf("%s - %d pages\n", b.title, b.pages);
}
//C Programming - 300 pages