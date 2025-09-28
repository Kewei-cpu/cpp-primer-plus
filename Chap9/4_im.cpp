#pragma once
#include <iostream>
#include "4_ns.h"

namespace SALES
{
    void setSales(Sales& s, const double ar[], int n)
    {
        s.min = LONG_LONG_MAX;
        s.max = LONG_LONG_MIN;
        s.average = 0.0;

        for (int i = 0; i < std::min(QUARTERS, n); i++)
        {
            const double sales = ar[i];
            s.sales[i] = sales;
            if (sales > s.max) s.max = sales;
            if (sales < s.min) s.min = sales;
            s.average = (s.average * i + sales) / (i + 1);
        }
    }

    void setSales(Sales& s)
    {
        std::cout << "Enter your sales" << std::endl;

        int n;
        double ar[4];
        for (n = 0; n < QUARTERS; n++)
        {
            std::cout << "Q" << n + 1 << ": ";
            std::cin >> ar[n];
        }

        setSales(s, ar, n + 1);
    }

    void showSales(const Sales& s)
    {
        std::cout << "Sales: " << std::endl;
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Q" << i + 1 << ": ";
            std::cout << s.sales[i] << std::endl;
        }
        std::cout << "Min: " << s.min << " | ";
        std::cout << "Max: " << s.max << " | ";
        std::cout << "Avg: " << s.average << std::endl;
    }
}
