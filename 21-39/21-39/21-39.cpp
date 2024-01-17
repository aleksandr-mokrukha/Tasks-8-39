#include <iostream>
#include <cmath>

void program21()
{
    int n, k = 0;
    std::cout << "Program show amount of numbers in typed one.\n";
    std::cout << "Type number: ";
    std::cin >> n;

    n = abs(n);
    do
    {
        k++;
        n /= 10;
    } while (n > 0);
    std::cout << "Result: " << k;
}

void program22()
{
    double k, p, s;
    int m = 0;
    std::cout << "Program show how much months need to get certain sum.\n";
    std::cout << "Type begin capital, monthly profit percentage and required amount in a row:\n";
    std::cin >> k >> p >> s;

    if (p == 0 || k == 0)
    {
        std::cout << "Percent/capital cannot be 0!";
        return;
    }

    k = abs(k);
    p = abs(p);
    s = abs(s);

    while (k < s)
    {
        k += k * (p / 100);
        m++;
    }
    std::cout << m;
}

void program23()
{
    int prev = 0, count = 0, cur;
    std::cout << "Program show amount of sign changes in subsequence of numbers.\n";
    std::cout << "Type integers to continue, type 0 to end:\n";
    do
    {
        std::cin >> cur;
        if (prev * cur < 0)
        {
            count++;
        }
        prev = cur;
    } while (cur != 0);
    std::cout << "Result: " << count;
}

void program24()
{
    std::cout << "Program show average for 3 random subsequences.\n";
    std::cout << "Result:\n";
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 10; j++)
        {
            int a = rand() % 10;
            sum += a;
            
        }
        std::cout << sum / 10 << "\n";
    }
}

void program25()
{
    int n;
    std::cout << "Program show all 3-digital numbers the sum of which is less than typed number.\n";
    std::cout << "Type integer: ";
    std::cin >> n;
    for (int i = 1; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (i + j + c < n)
                {
                    std::cout << i * 100 + j * 10 + c;
                    std::cout << "\n";
                }
            }
        }
    }
}

void program26()
{
    std::cout << "Program show all 3-digital numbers which have only 2 equal numbers.\n";
    std::cout << "Result:\n";
    int a1, a2, a3;
    for (int i = 100; i <= 999; i++)
    {
        a1 = i / 100;
        a2 = i / 10 % 10;
        a3 = i % 10;

        if ((a1 == a2 || a1 == a3 || a2 == a3) && !(a1 == a2 && a2 == a3))
        {
            std::cout << i << "\n";
        }
    }
}

void program27()
{
    std::cout << "Program show abbreviated fraction.\n";
    std::cout << "Type 2 natural numbers in a row:\n";
    int x, y, min;
    std::cin >> x;
    std::cin >> y;

    if (x < 1 || y < 1)
    {
        std::cout << "Typed number(s) not natural!\n";
        return;
    }

    if (x < y) {
        min = x;
    }
    else
    {
        min = y;
    }

    for (int i = min; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            if (y == 1)
            {
                std::cout << x;
                break;
            }
            else
            {
                std::cout << "x/y = " << x / i << "/" << y / i;
                break;
            }
        }
    }
}

void program28()
{
    int n;
    std::cout << "Program show every number not included in typed one.\n";
    std::cout << "Type natural number: ";
    std::cin >> n;

    if (n < 1)
    {
        std::cout << "Typed number not natural!\n";
        return;
    }

    std::cout << "Result: ";

    for (int i = 0; i <= 9; i++)
    {
        int copy = n;
        bool flag = false;
        while (copy > 0)
        {
            if (copy % 10 == i)
            {
                flag = true;
                break;
            }
            copy /= 10;
        }
        if (!flag)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\n";
}

void program29()
{
    std::cout << "Program show chessboard.\n";
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}

void program30()
{
    int n;
    std::cout << "Program show different figures based on typed size.\n";
    std::cout << "Type natural number not bigger than 50: ";
    std::cin >> n;

    if (n < 1)
    {
        std::cout << "Typed number not natural!\n";
        return;
    }
    if (n > 50)
    {
        std::cout << "Typed number too big!\n";
        return;
    }

    std::cout << "Results:\n";

    //1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //3
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //4
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //5
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //6
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\n";
    //7
    int secN = n * 2 - 1;
    for (int i = 0; i <= secN / 2; i++)
    {
        for (int j = 0; j < secN; j++)
        {
            if (j <= secN / 2 + i && j >= secN / 2 - i)
            {
                std::cout << " *";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
    for (int i = 0; i < secN / 2; i++)
    {
        for (int j = 0; j < secN; j++)
        {
            if (j > i && j < secN - i - 1)
            {
                std::cout << " *";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}

void program31()
{
    int educBegin, lesDur, breakDur, lesAmount;
    std::cout << "Program show bell schedule.\n";
    std::cout << "Type begin time of first lession, duration for every lession, break duration and amount of lessions in minutes in a row:\n";
    std::cin >> educBegin;
    std::cin >> lesDur;
    std::cin >> breakDur;
    std::cin >> lesAmount;

    if (educBegin < 0 || educBegin > 1439 || lesDur < 0 || lesDur > 1439 || breakDur < 0 || breakDur > 1439)
    {
        std::cout << "Typed time incorrect!";
        return;
    }

    for (int i = 1; lesAmount >= 0; i++, lesAmount--)
    {
        if (educBegin + lesDur > 1439)
        {
            break;
        }
        std::cout << i << ". " << educBegin / 60 << ":" << educBegin % 60 << " - " << (educBegin + lesDur) / 60 << ":" << (educBegin + lesDur) % 60 << "\n";
        educBegin += lesDur;
        educBegin += breakDur;
    }
}

void program32()
{
    int n;
    std::cout << "Program show all prime numbers until typed one.\n";
    std::cout << "Type natural number: ";
    std::cin >> n;

    if (n < 1)
    {
        std::cout << "Typed number isn't natural!\n";
        return;
    }

    for (int i = n - 1; i > 1; i--)
    {
        bool flag = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void program33()
{
    std::cout << "Program finds sum of the form x - x^3/3! + x^5/5! - ... + x^n/n!\n";
    std::cout << "Type n and x in a row for this sum:\n";
    int n;
    double x;
    std::cin >> n;
    std::cin >> x;

    if (n < 1)
    {
        std::cout << "Typed number isn't natural!\n";
        return;
    }

    std::cout << "Result:\n";
    double s = x;
    bool sign = true;
    int i = 3;
    while (true)
    {
        if (i > n)
        {
            break;
        }
        int curFac = 1;
        for (int j = 1; j <= i; j++)
        {
            curFac *= j;
        }
        if (sign)
        {
            s -= pow(x, i) / curFac;
            sign = false;
        }
        else
        {
            s += pow(x, i) / curFac;
            sign = true;
        }
        i += 2;
    }
    std::cout << s;
    std::cout << "\n";
}

void program34()
{
    int k;
    std::cout << "Program show first numbers of the Fibonacci series.\n";
    std::cout << "Type amount of numbers: ";
    std::cin >> k;

    if (k < 1)
    {
        std::cout << "Incorrect number!\n";
        return;
    }

    std::cout << "Result:\n";
    int n0 = 0;
    int n1 = 1;
    int curFib = 1;
    int count = 0;
    std::cout << 0 << " ";
    while (true)
    {
        if (count >= k - 1)
        {
            break;
        }
        std::cout << curFib << " ";
        curFib = n0 + n1;
        n0 = n1;
        n1 = curFib;
        count++;
    }
    std::cout << "\n";
}

void program35()
{
    int wished = rand() % 1000 + 1;
    std::cout << "Program wished a number. You have 10 attempts to guess.\n";
    std::cout << "Clue: ";
    std::cout << wished << "\n";
    bool flag = true;
    for (int i = 0; i < 10; i++)
    {
        int n;
        std::cout << "Type a number: ";
        std::cin >> n;
        
        if (n < 1 || n > 1000)
        {
            std::cout << "Incorrect number!\n";
            return;
        }

        if (n > wished)
        {
            std::cout << "Typed number is greater.\n";
        }
        else if (n < wished)
        {
            std::cout << "Typed number is less.\n";
        }
        else
        {
            std::cout << "Guessed number is right.\n";
            flag = false;
            break;
        }
    }

    if (flag)
    {
        std::cout << "Failrule.\n";
    }
}

void program36()
{
    int count = 0;
    std::cout << "Program compare typed number with wished one from multiplication table.\n";
    for (int i = 1; i <= 10; i++)
    {
        int n = rand() % 9 + 2;
        std::cout << "!!!" << n << "!!!";
        int n1 = rand() % 9 + 1;
        std::cout << "!!!" << n1 << "!!!";
        n *= n1;
        std::cout << "Clue: " << n << "\n";
        
        int tN;
        std::cout << "Type number " << i << ": ";
        std::cin >> tN;

        if (tN < 2 || tN > 90)
        {
            std::cout << "Typed number incorrect!\n";
            return;
        }

        if (tN == n)
        {
            count++;
        }
    }

    if (count == 10)
    {
        std::cout << "Excellent (10).\n";
    }
    else if (count == 9)
    {
        std::cout << "Good (9).\n";
    }
    else if (count == 7 || count == 8)
    {
        std::cout << "Satisfactory (7-8).\n";
    }
    else
    {
        std::cout << "Unsatisfactory (< 7).\n";
    }
}

void program37()
{
    int n;
    std::cout << "Program show the number converted to the Roman digit.\n";
    std::cout << "Type arabic digit from 1 to 3999: ";
    std::cin >> n;

    if (n < 1 || n > 3999)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    //count digit of n
    int p = 1;
    int p1 = 1;
    int nC = n;
    while (nC > 10)
    {
        p *= 10;
        nC /= 10;
    }
    p1 = p;

    //reverse n to n1
    int n1 = 0;
    while (n > 0)
    {
        int d = n % 10;
        n1 += d * p;
        n /= 10;
        p /= 10;
    }

    //calculating
    while (n1 > 0)
    {
        int d = n1 % 10;
        d *= p1;
        if (p1 == 1)
        {
            switch (d)
            {
            case 1: std::cout << "I"; break;
            case 2: std::cout << "II"; break;
            case 3: std::cout << "III"; break;
            case 4: std::cout << "IV"; break;
            case 5: std::cout << "V"; break;
            case 6: std::cout << "VI"; break;
            case 7: std::cout << "VII"; break;
            case 8: std::cout << "VIII"; break;
            case 9: std::cout << "IX"; break;
            default: std::cout << ""; break;
            }
        }
        if (p1 == 10)
        {
            switch (d)
            {
            case 10: std::cout << "X"; break;
            case 20: std::cout << "XX"; break;
            case 30: std::cout << "XXX"; break;
            case 40: std::cout << "XL"; break;
            case 50: std::cout << "L"; break;
            case 60: std::cout << "LX"; break;
            case 70: std::cout << "LXX"; break;
            case 80: std::cout << "LXXX"; break;
            case 90: std::cout << "XC"; break;
            default: std::cout << ""; break;
            }
        }
        if (p1 == 100)
        {
            switch (d)
            {
            case 100: std::cout << "C"; break;
            case 200: std::cout << "CC"; break;
            case 300: std::cout << "CCC"; break;
            case 400: std::cout << "CD"; break;
            case 500: std::cout << "D"; break;
            case 600: std::cout << "DC"; break;
            case 700: std::cout << "DCC"; break;
            case 800: std::cout << "DCCC"; break;
            case 900: std::cout << "CM"; break;
            default: std::cout << ""; break;
            }
        }
        if (p1 == 1000)
        {
            switch (d)
            {
            case 1000: std::cout << "M"; break;
            case 2000: std::cout << "MM"; break;
            case 3000: std::cout << "MMM"; break;
            default: std::cout << ""; break;
            }
        }
            p1 /= 10;
            n1 /= 10;
    }
}

void program38()
{
    std::cout << "Program show multiplication table in the form of a Pythagoream square.\n";
    std::cout << " ";
    
    for (int i = 1; i <= 9; i++)
    {
        std::cout.width(4);
        std::cout << i;
    }
    std::cout << "\n";
    std::cout << "\n";
    for (int i = 1; i <= 9; i++)
    {
        std::cout << i;
        for (int j = 1; j <= 9; j++)
        {
            std::cout.width(4);
            std::cout << j * i;
        }
        std::cout << "\n";
        std::cout << "\n";
    }
}

void program39()
{
    int k;
    std::cout << "Program calculate miles in kilometers and back.\n";
    std::cout << "Type amount of recalculations: ";
    std::cin >> k;

    if (k < 1)
    {
        std::cout << "Typed number incorrect!\n";
        return;
    }

    double m = 1;
    double km = 1;
    std::cout << "Miles   Km \n";
    for (int i = 1; i <= k; i++)
    {
        if (km * 1.6093 > m)
        {
            std::cout << m / 1.6093 << "\t" << km << "\n";
            m++;
        }
        else
        {
            std::cout << m << "\t" << km * 1.6093 << "\n";
            km++;
        }
    }
}

int main()
{
    //program21();
    //program22();
    //program23();
    //program24();
    //program25();
    //program26();
    //program27();
    //program28();
    //program29();
    //program30();
    //program31();
    //program32();
    //program33();
    //program34();
    //program35();
    //program36();
    //program37();
    //program38();
    //program39();

    int result;
    std::cout << "\nAnother one? 1 - yes, 0 - no: ";
    std::cin >> result;
    if (result)
    {
        return main();
    }
}