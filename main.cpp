#include <iostream>
#include <Windows.h>
#include "race.h"
#include "earthair.h"
#include "boots.h"
#include "camel.h"
#include "camel is fast.h"
#include "centaur.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int type_race;
    bool flag = true;

    cout << "����� ���������� � ��������� �����!" << endl;
    cout << "1. ����� ��� ��������� ����������" << endl;
    cout << "2. ����� ��� ���������� ����������" << endl;
    cout << "3. ����� ��� ��������� � ���������� ����������" << endl;
    cout << "�������� ��� �����: ";

    do {
        cin >> type_race;
        if (type_race == 1) {
            flag = false;
        }
        else if (type_race == 2) {
            flag = false;
        }
        else if (type_race == 3) {
            flag = false;
        }
        else {
            cout << "�������� ���������� ��� �����:";
        }
    } while (flag);

    int length;

    cout << "������� ����� ���������(����� ������ ���� �������������): ";
    cin >> length;

    Race race(type_race, length);

    int transport;


    cout << "������ ���� ���������������� ���� �� 2 ������������ ��������" << endl;
    cout << "1. ���������������� ���������" << endl;
    cout << "�������� ��������: ";
    do {
        cin >> transport;
        if (transport == 1) {
            flag = false;
        }
        else {
            cout << "������ ���������� ��������: ";
        }
    } while (flag);

    Boots boot;
    Camel camel;
    CamelFast fast;
    Centaur centaur;

    int choice;
    string all_name;
    flag = true;
    bool flag2 = true;

    do {
        do {
            cout << "����� ��� " << (type_race == 1 ? "���������" : (type_race == 2 ? "����������" : "��������� � ����������"))
                << " ����������. ����������: " << length << endl;
            all_name = race.get_all_name();
            if (all_name.length() != 0) {
                cout << "������������������ ������������ ��������: " << all_name << endl;
            }
            cout << "1. " + boot.get_name() << endl;
            cout << "2. �����" << endl;
            cout << "3. " + camel.get_name() << endl;
            cout << "4. " + centaur.get_name() << endl;
            cout << "5. ����" << endl;
            cout << "6. " + fast.get_name() << endl;
            cout << "7. �����-�������" << endl;
            cout << "0. ��������� �����������" << endl;
            cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: ";
            cin >> choice;

            if (choice == 1) {
                cout << race.add(&boot) << endl;
            }
            else if (choice == 3) {
                cout << race.add(&camel) << endl;
            }
            else if (choice == 0) {
                flag = false;
            }
        } while (flag);

        int a;
        cout << "1. ���������������� ���������" << endl;
        cout << "2. ������ �����" << endl;
        cout << "�������� ��������: ";
        cin >> a;

        if (a == 1) {
            flag = true;
        }
        else if (a == 2) {
            flag2 = false;
        }// ������� do {} while

    } while (flag2);

    race.start();
    return 0;
}