#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    List list;
    Data data;
    InitList(&list);
    AddData(&list, 11); AddData(&list, 11);
    AddData(&list, 22); AddData(&list, 22);
    AddData(&list, 33);

    if(First(&list, &data))
    {
        printf("%d ", data);
        while(Next(&list, &data)){
            printf("%d ", data);
        }
    }
}