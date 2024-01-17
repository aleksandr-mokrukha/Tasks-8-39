﻿#include <iostream>

void program8()
{
    int n, d1, d2, d3;
    std::cout << "\nProgram for counting amount of same numbers in 3-digital number.\n";
    std::cout << "Type 3-digital number: ";
    std::cin >> n;
    
    n = abs(n);
    if (n > 999 || n < 100)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    d1 = n / 100;
    d2 = n / 10 % 10;
    d3 = n % 10;

    if (d1 == d2 && d1 == d3)
    {
        std::cout << "3\n";
    }
    else if (d1 == d2 || d2 == d3 || d1 == d3)
    {
        std::cout << "2\n";
    }
    else
    {
        std::cout << "0\n";
    }
}

void program9()
{
    int n, d1, d2, d3, d4;
    std::cout << "\nProgram for checking if typed 4-digital number is palendrom.\n";
    std::cout << "Type 4-digital number: ";
    std::cin >> n;
    
    n = abs(n);
    if (n > 9999 || n < 1000)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    d1 = n / 1000;
    d2 = n / 100 % 10;
    d3 = n / 10 % 10;
    d4 = n % 10;

    if (d1 == d4 && d2 == d3)
    {
        std::cout << "Yes.\n";
    }
    else
    {
        std::cout << "No.\n";
    }
}

void program10()
{
    int n, d1, d2, d3, d4;
    std::cout << "\nProgram for checking if typed 4-digital number forms subsequence.\n";
    std::cout << "Type 4-digital number: ";
    std::cin >> n;

    n = abs(n);
    if (n > 9999 || n < 1000)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    d1 = n / 1000;
    d2 = n / 100 % 10;
    d3 = n / 10 % 10;
    d4 = n % 10;

    if (d1 == d2 && d1 == d3 && d1 == d4)
    {
        std::cout << "Yes, constant.\n";
    }
    else if (d1 >= d2 && d2 >= d3 && d3 >= d4)
    {
        if (d1 > d2 && d2 > d3 && d3 > d4)
        {
            std::cout << "Yes, decreasing.\n";
        }
        else
        {
            std::cout << "Yes, not increasing.\n";
        }
    }
    else if (d1 <= d2 && d2 <= d3 && d3 <= d4)
    {
        if (d1 < d2 && d2 < d3 && d3 < d4)
        {
            std::cout << "Yes, increasing.\n";
        }
        else
        {
            std::cout << "Yes, not decreasing.\n";
        }
    }
    else
    {
        std::cout << "No.\n";
    }
}

void program11()
{
    int a, b, c, x, y;
    std::cout << "\nProgram for checking if break will fit through a hole.\n";
    std::cout << "Type three sides of break in a row:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Type two sides of a hole in a row:\n";
    std::cin >> x;
    std::cin >> y;

    a = abs(a);
    b = abs(b);
    c = abs(c);
    x = abs(x);
    y = abs(y);

    if (a < x && b < y || b < x && a < y || b < x && c < y || c < x && b < y || a < x && c < y || c < x && a < y)
    {
        std::cout << "Yes.\n";
    }
    else
    {
        std::cout << "No.\n";
    }
}

void program12()
{
    int a, b, c;
    std::cout << "\nProgram for checking if three natural typed numbers could be sides of triangle.\n";
    std::cout << "Type three natural numbers in a row:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a < 1 || b < 1 || c < 1)
    {
        std::cout << "Typed number(s) incorrect!\n";
        return;
    }
    
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c && c == a)
        {
            std::cout << "Yes, equalateral.\n";
        }
        else if (a == b || b == c || c == a)
        {
            std::cout << "Yes, isosceles.\n";
        }
        else
        {
            std::cout << "Yes, scalene.\n";
        }

        if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
        {
            std::cout << "Triangle is right-angled.\n";
        }
        else
        {
            std::cout << "Trianle is not right-angled.\n";
        }
    }
    else
    {
        std::cout << "No.";
    }
}

void program13()
{
    int a, b, c, d;
    double x1, x2;
    std::cout << "\nProgram for quadratic equation solving like ax^2 + bx + c = 0.\n";
    std::cout << "Type three natural numbers in a row:\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a < 1 || b < 1 || c < 1)
    {
        std::cout << "Typed number(s) incorrect!\n";
        return;
    }

    d = b * b - 4 * a * c;
    if (d >= 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        std::cout << "x1 = " << x1;
        std::cout << "\n";
        std::cout << "x2 = " << x2;
        std::cout << "\n";
    }
    else
    {
        std::cout << "No roots.\n";
    }
}

void program14()
{
    int y;
    std::cout << "Program for checking if typed year is leap.\n";
    std::cout << "Type year between 1600 and 2100: ";
    std::cin >> y;

    if (y < 1600 || y > 2100)
    {
        std::cout << "Typed year incorrect!\n";
        return;
    }

    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        std::cout << "Yes, current year is leap.\n";
    }
    else
    {
        std::cout << "No.\n";
    }
}

void program15()
{
    double inch, mm;
    int cm, m;
    std::cout << "Metric conversion program.\n";
    std::cout << "Type natural number - length in inches: ";
    std::cin >> inch;

    if (inch < 1)
    {
        std::cout << "Typed number incorrect!";
        return;
    }

    mm = inch * 25.4;
    m = mm / 1000;
    mm -= m * 1000;
    cm = mm / 10;
    mm -= cm * 10;

    std::cout << inch << " inch = " << m << " m, " << cm << " cm, " << mm << " mm.";
}

void program16()
{
    int h, m, s;
    int x, y, z;
    double s1, m1, h1, d;
    std::cout << "Program shows time after typed hours, minutes and seconds.\n";
    std::cout << "Type current hours, minutes and seconds in a row:\n";
    std::cin >> h >> m >> s;

    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59)
    {
        std::cout << "Typed data incorrect!";
        return;
    }

    std::cout << "Type elapsed hours, minutes and seconds in a row:\n";
    std::cin >> x >> y >> z;

    if (x < 0 || y < 0 || z < 0)
    {
        std::cout << "Typed data incorrect!";
        return;
    }

    s1 = (s + z) % 60;
    m1 = (m + y + (s + z) / 60) % 60;
    h1 = (h + x + (m + y) / 60) % 24;
    d = (h + x + (m + y) / 60) / 24;

    std::cout << h1 << ":" << m1 << ":" << s1 << " day: " << d;
 }

void program17()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int hours, minutes, seconds;
    std::cout << "Program shows length between begin time and end time.\n";
    std::cout << "Type hours, minutes and seconds in a row for begin time:\n";
    std::cin >> h1 >> m1 >> s1;

    if (h1 < 0 || m1 < 0 || s1 < 0)
    {
        std::cout << "Typed data incorrect!";
        return;
    }

    int sec1 = h1 * 3600 + m1 * 60 + s1;

    std::cout << "Type hours, minutes and seconds in a row for end time:\n";
    std::cin >> h2 >> m2 >> s2;

    int sec2 = h2 * 3600 + m2 * 60 + s2;
    if (h2 < h1 || m2 < 0 || s2 < 0 || sec2 < sec1)
    {
        std::cout << "Typed data incorrect!\n";
        return;
    }

    seconds = (s2 - s1) + (m2 - m1) * 60 + (h2 - h1) * 3600;
    minutes = (s2 - s1) / 60 + (m2 - m1) + (h2 - h1) * 60;
    hours = (s2 - s1) / 3600 + (m2 - m1) / 60 + (h2 - h1);

    std::cout << "Length in seconds: " << seconds << "\n";
    std::cout << "Length in minutes: " << minutes << "\n";
    std::cout << "Length in hours: " << hours << "\n";
    if (hours / 60)
    {
        std::cout << "The day passed.\n";
    }
}

void program18()
{
    int m;
    double l, result;
    std::cout << "Program show typed measure in metres.\n";
    std::cout << "Type 1 - km, 2 - m, 3 - dm, 4 - cm or 5 - mm: ";
    std::cin >> m;

    if (m < 1 || m > 5)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    std::cout << "Type length in current measure: ";
    std::cin >> l;

    l = abs(l);
    if (m == 1)
    {
        result = l * 1000;
    }
    else if (m == 2)
    {
        result = l;
    }
    else if (m == 3)
    {
        result = l / 10;
    }
    else if (m == 4)
    {
        result = l / 100;
    }
    else
    {
        result = l / 1000;
    }

    std::cout << result << " meter(s).\n";
}

void program19()
{
    int n;
    std::string result;
    std::cout << "Program show one of phrases: god, goda, let.\n";
    std::cout << "Type number between [1; 200]: ";
    std::cin >> n;

    if (n < 1 || n > 200)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    if (n % 100 >= 11 && n % 100 <= 14)
    {
        result = " let\n";
    }
    else if (n % 10 == 0 || n % 10 >= 5 && n % 10 <= 9)
    {
        result = " let\n";
    }
    else if (n % 10 >= 2 && n % 10 <= 4)
    {
        result = " goda\n";
    }
    else if (n % 10 == 1)
    {
        result = " god\n";
    }
    std::cout << n << result;
}

void program20()
{
    double x, y, result;
    std::string oper;
    std::cout << "Program ask for 2 number and operation sign.\n";
    std::cout << "Type 2 numbers in a row:\n";
    std::cin >> x >> y;
    std::cout << "Type operation sign (+, -, * or /): ";
    std::cin >> oper;
    
    if (oper != "+" && oper != "-" && oper != "*" && oper != "/")
    {
        std::cout << "Typed operation sign incorrect!\n";
        return;
    }

    if (oper == "+")
    {
        result = x + y;
    }
    else if (oper == "-")
    {
        result = x - y;
    }
    else if (oper == "*")
    {
        result = x * y;
    }
    else
    {
        result = x / y;
    }
    std::cout << result;
}

int main()
{
    //program8();
    //program9();
    //program10();
    //program11();
    //program12();
    //program13();
    //program14();
    //program15();
    //program16();
    //program17();
    //program18();
    //program19();
    //program20();

    int result;
    std::cout << "\nAnother one? 1 - yes, 0 - no: ";
    std::cin >> result;
    if (result)
    {
        return main();
    }
}