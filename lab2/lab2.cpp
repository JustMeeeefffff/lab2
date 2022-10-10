#include <iostream>

using namespace std;

void pyramid()
{
    cout << "Пирамида: \n";
    for (int i = 0; i < 20; i++)
    {
        for (int j = 19; j > i; j--)
        {
            cout << ' ';
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << 'X';
        }
        cout << endl;
    }
}

int factorial(int num)
{
    int factorialOfNum = 1;
    for (int i = 1; i < num + 1; i++)
    {
        factorialOfNum *= i;
    }
    return factorialOfNum;
}

// Калькулятор для расчета прибыли от вложений
float sumOfMonney(float money, int years, float stavka)
{
    float totalMoney = money;
    for (int i = 1; i < years + 1; i++)
    {
        totalMoney += (totalMoney * (stavka/100));
        cout << "В конце " << i << "-го года вы получите " << totalMoney << " долларов.";
        cout << endl;
    }
    return totalMoney;
}

// Калькулятор для расчета ипотеки
float pain(float price, float firstPayment, int years, float stavka)
{
    float finalPrice = 0;

    for (int i = 1; i < years + 1; i++)
    {
        float priceForYear = ((price - firstPayment) * (stavka / 100));
        if (i == 1)
        {
            cout << priceForYear + firstPayment;
        }
        else
        {
            cout << priceForYear;
        }
        finalPrice += priceForYear;
    }
    return finalPrice + firstPayment;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите номер задания (1-5): ";
    cin >> number;
    switch (number)
    {
    case 1:
        pyramid();
        break;
    case 2:
        int num;
        cout << "Введите число: ";
        cin >> num;
        while (num != 0)
        {            
            cout << "Факториал введенного числа: " << factorial(num) << endl << "Введите новое число, если вы хотите выйти из программы, введите 0: ";
            cin >> num;
        }
        break;
    case 3:
        float money;
        cout << "Введите начальный вклад: ";
        cin >> money;
        int years;
        cout << "Введите число лет: ";
        cin >> years;
        float stavka;
        cout << "Введите процентную ставку: ";
        cin >> stavka;
        cout << "Через " << years << " вы получите " << sumOfMonney(money, years, stavka) << " доллара.";
        break;
    case 4:
        float price, firstPayment, stavka;
        int years;
        cout << "Введите стоимость квартиры: ";
        cin >> price;
        cout << "Введите начальный взнос: ";
        cin >> firstPayment;
        cout << "Введите количество лет: ";
        cin >> years;
        cout << "Введите процентную ставку: ";
        cin >> stavka;
        pain(price, firstPayment, years, stavka);
        break;
    case 5:
        break;
    default:
        cout << "Введите число от 1 до 5";
        break;
    }
}
