#include <stdio.h>                      
union FileData {
    FILE *fp;                           // Rule 9.2
};
void main(void)
{
    union FileData d;
    d.fp = fopen("test.txt", "w"); // opening the file     
    if (d.fp != NULL)
    {
        fprintf(d.fp, "hemanth\n");    
        fclose(d.fp);    // closing the file              
    }
}