#include "ArrayList.h"

void InitList(List * plist)
{
    plist->curPosition=0;
    plist->numData=0;
}

int First(List * plist, Data * pdata)
{
    plist->curPosition = 0;
    *pdata = plist->arr[0];
    (plist->curPosition)++;
    return 1;
}

int Next(List * plist, Data * pdata)
{
    if (plist->curPosition>= (plist->numData))
        return 0;
    else {
        *pdata = plist->arr[plist->curPosition];
        (plist->curPosition)++;
        return 1;
    }
}

int AddData(List * plist, Data data)
{
    plist->arr[plist->curPosition] = data;
    (plist->curPosition)++;
    (plist->numData)++;
    return 1;
}