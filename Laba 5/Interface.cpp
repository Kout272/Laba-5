#pragma once
#include "Interface.h"

void Interface::start()
{
    do
    {
        cout << "�������� ��� ���������\n";
        YELLOW
        cout << "1. ���������������\n";
        BLUE
        cout << "2. ������\n";
        GREEN
        cout << "3. ���������\n";
        RED
        cout << "4. �����\n";
        RESET
        type = GetInt(1, 4);
        system("cls");
        switch (type)
        {
        case 1:
        {
            Ring<Predprem> RingList;
            OperatingRing(RingList);
        }
        break;
        case 2:
        {
            Ring<Tourist> RingList;
            OperatingRing(RingList);
        }
        break;
        case 3:
        {
            Ring<Business> RingList;
            OperatingRing(RingList);
        }
        break;
        }
    } while (type != 4);
}

template<typename T>
void Interface::OperatingRing(Ring<T>& list)
{
    T element;
    do
    {
        cout << "�������� � �������\n";
        GREEN
        cout << "1. ������� ��������\n";
        cout << "2. ���������� ������\n";
        cout << "3. ������� ������� ����\n";
        RED
        cout << "4. ������� ������� ����\n";
        cout << "5. ������� ��� ����\n";
        BLUE
        cout << "6. ����� �� ���������\n";
        cout << "7. ��������� ���� �� ����\n";
        cout << "8. ����� �������� � ������������ ���������\n";
        cout << "9. ����� �������� � ����������� ���������\n";
        YELLOW
        cout << "10. �����\n";
        RESET
        choise = GetInt(1, 10);
        system("cls");
        switch (choise)
        {
        case 1:
        {
            GREEN
                cout << "������� ���������� ���������:\n";
            RESET
            int number;
            number = GetInt(1, 99);
            for (int i = 0; i < number; i++)
            {
                GREEN
                cout << "������� �������:\n";
                RESET
                cin >> element;
                rewind(stdin);
                list.Push(element);
            }
            system("pause");
            system("cls");
        }
        break;
        case 2:
        {
            GREEN
                cout << "���������� ������:\n";
            RESET
            if(!list.Empty())element.shapka();
            list.Display();
            system("pause");
            system("cls");
        }
        break;
        case 3:
        {
            list.ShowCurrent();
            system("pause");
            system("cls");
        }
        break;
        case 4:
        {
            list.RemoveCurrent();
            system("pause");
            system("cls");
        }
        break;
        case 5:
        {
            list.RemoveAll();
            system("pause");
            system("cls");
        }
        break;
        case 6:
        {
            BLUE
            if (list.Search())
            {
                GREEN
                    cout << "������ ������� ���������� � ������" << endl;
                RESET
            }
            else
            {
                RED
                cout << "������ ������� �� ���������� � ������ ��� ��� ������" << endl;
                RESET
            }
            system("pause");
        }
        break;
        case 7:
        {

            if (list.Empty())
            {
                RED
                    cout << "������ ������!" << endl;
                RESET
            }
            else
            {
                BLUE
                cout << "� ������ ���������� ��������!" << endl;
                RESET
            }

            system("pause");
            system("cls");
        }
        break;
        case 8:
        {
            BLUE
            cout << "������� � ������������ ���������:\n";
            RESET
            list.FindMax();
            system("pause");
            system("cls");
        }
        break;
        case 9:
        {
            BLUE
            cout << "������� � ����������� ���������:\n";
            RESET
            list.FindMin();
            system("pause");
            system("cls");
        }
        break;
        case 10:break;
        default:
        {
            RED
                cout << "������ �������� �����!!!\n";
            RESET
            system("pause");
            system("cls");
        }
        }
        system("cls");
    } while (choise != 10);
}
