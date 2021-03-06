///////////////////////////////////////
/// file: selectionsort.h
/// Selection sort
///////////////////////////////////////

#pragma once

#include <utility> // for std::swap
using std::swap;

///
/// 选择排序
///
template <typename T>
void SelectionSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        // 从 a[i..n-1] 中选出最小的 a[k] 与 a[i] 交换
        int k = i;
        int j = i + 1;
        for (; j < n; j++)
            if (a[j] < a[k])
                k = j;
        if (i != k)
            swap(a[k], a[i]);
    }
}