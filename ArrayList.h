#ifndef __ARRAYLIST_H__
#define __ARRAYLIST_H__
#define NUMOFDATA 100
typedef int Data;

typedef struct __ArrayList
{
    Data data;
    int arr[NUMOFDATA];
    int curPosition;
    int numData;
} ArrayList;

typedef ArrayList List;

void InitList(List * plist);
int First(List * plist, Data * pdata);
int Next(List * plist, Data * pdata);
int Remove(List * plist, Data * pdata);
int NumData(List * plist);
int AddData(List * plist, Data data);

#endif