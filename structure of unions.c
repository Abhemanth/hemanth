#include <stdio.h>
#include <string.h>
union Data {
    int i;
    float f;
    char str[20];
};
//union inside the structure
struct Item {
    char type;
    union Data value;
};
void main() {
    struct Item item;
    item.type = 'i';//i for int
    item.value.i = 100;
    printf("Type: %c, Value: %d\n", item.type, item.value.i);
    item.type = 'f';//f for float
    item.value.f = 98.6;
    printf("Type: %c, Value: %.2f\n", item.type, item.value.f);
    item.type = 's';//s for string
    strcpy(item.value.str, "Hemanth");
    printf("Type: %c, Value: %s\n", item.type, item.value.str);
}
/*Type: i, Value: 100
Type: f, Value: 98.60
Type: s, Value: Hemanth*/