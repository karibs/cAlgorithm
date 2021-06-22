#include <stdio.h>

int binarysearch(int list[], int searchnum, int left, int right)
{
    int middle;
    while (left<=right)
    {
        middle=(left+right)/2;
        if(list[middle]<searchnum) left=middle+1;
        else if(list[middle]>searchnum) right=middle-1;
        else return middle;
    }
    return -1;
}

int main()
{
    int data[16] = {12,23,25,34,45,46,57,58,69,72,75,82,86,89,97,99};
    int found;
    found = binarysearch(data, 34, 0, 15);
    if(found == -1){printf("Not Found\n");}
    else{printf("*It's at %d!\n", found);}
}