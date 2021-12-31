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
    return 1;
}

int Next(List * plist, Data * pdata)
{
    (plist->curPosition)++;
    if (plist->curPosition>= (plist->numData))
        return 0;
    else {
        *pdata = plist->arr[plist->curPosition];
        (plist->curPosition)++;
        return 1;
    }
}

int Remove(List * plist, Data * pdata)
{
    plist->arr[plist->curPosition] = plist->arr[plist->curPosition+1];
    plist->curPosition++;
}

int AddData(List * plist, Data data)
{
    (plist->curPosition)++;
    (plist->numData)++;
    plist->arr[plist->curPosition] = data;
    return 1;
}