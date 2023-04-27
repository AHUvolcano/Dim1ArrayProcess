//
// Created by 木木火山 on 2023/4/25.
// //////////////////////////////////////////////////////////////////////////////////////
/*包含：冒泡排序（从小到大）BubbleRange(arr[])
       二分查找 HalfLookup(arr[],target)    (未查找到返回-1，查找到返回pos)
       插入新数 InsertNumber(arr[],new number)
       删除数字 DeleteNumber(arr[],deleting number0  (返回-1，删除失败；返回0删除成功)
       逆序重排 RevOrder(arr[])
       斐波那契 Fibonacci(Fibonacci[],max) 将斐波那契数列前max位存入数组Fibonacci[]
       判断质数 PrimeJudge(num)
       奇偶判断 ParityJudge(num) 奇1偶2
 ///////////////////////////////////////////////////////////////////////////////////////
*/

#ifndef Dim1ArrayProcess_DIM1ARRAYPROCESS_H
#define Dim1ArrayProcess_DIM1ARRAYPROCESS_H

#include<iostream>
#define elemType int
#define LEN 10
using namespace std;

//冒泡排序(从小到大)
void BubbleRange(elemType arr[])
{
    int i,j;
    for (i = 0; i < LEN - 1; i++) {
        for (j = 0; j < LEN - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}

//二分查找
int HalfLookup(elemType arr[],elemType target)
{
    int begin = 0, end = LEN - 1, mid, index = -1;
    while (begin <= end) {
        mid = (begin + end) / 2;
        if (arr[mid] > target)
            end = mid - 1;
        else if (arr[mid] < target)
            begin = mid + 1;
        else
        {
            index = mid + 1;
            break;
        }
    }
    return index;
}

//插入新数
void InsertNumber(elemType arr[],elemType newNum)
{
    int i;
    for(i=0;i<LEN-1;i++)
        if(arr[i]>arr[LEN-1])
            swap(arr[i],arr[LEN-1]);
}

//删除数字
int DeleteNumber(elemType arr[],elemType delNum)
{
    int i,j,n=LEN,flag=0;
    for(i=0;i<n;i++)
        if(delNum==arr[i])
        {
            for(j=i;j<n-1;j++)
                arr[j]=arr[j+1];
            flag=1;i--;n--;
        }
    if(flag)
        return 0;    //找到待删除数字后，删除后返回0
    else
        return -1;   //找不到待删除数字，返回-1
}

//逆序重排
void RevOrder(elemType arr[])
{
    int i=0,j=LEN-1;
    while(i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

//斐波那契
void Fibonacci(__int128 Fibonacci[],int max)
{
    if(max<2)
        cout<<"数组长度过小";
    else
        Fibonacci[0]=1;
        Fibonacci[1]=1;
        for(int i=2;i<max;i++)
            Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
}

//判断质数
int PrimeJudge(int num) {
    if (num == 2) return 1;
    if (num == 1) return 0;
    if (num <= 0)
    {
        cout << "error input";
        return 0;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

//奇偶判断
int ParityJudge(int num)
{
    if(num%2)
        return 1;
    else
        return 2;
}


#endif //Dim1ArrayProcess_DIM1ARRAYPROCESS_H
