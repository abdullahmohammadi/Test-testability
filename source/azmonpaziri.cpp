// azmonpaziri.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include<fstream>
#include <iostream>
#include<vector>
#include<sstream>
#include<map>
#include<set>
#include <algorithm>
#include "azmonpaziri.h"

using namespace std;

template<typename T>
struct Wire {
    T data;
    int id;
    bool operator<(const Wire& w) const
    {
        return (this->id < w.id);
    }
};
template<typename T>
 struct Gate
{
    T andgate(T a, T b , T t, T t1) {
        if (t >= t1)
        {
            if ((a == 49) && (b == 49))
            {
                return 49;
            }
            else if ((a == 48) || (b == 48))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T and3gate(T a, T b, T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 49) && (b == 49) && (c == 49))
            {
                return 49;
            }
            else if ((a == 48) || (b == 48) || (c == 48))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T orgate(T a, T b, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (b == 48))
            {
                return 48;
            }
            else if ((a == 49) || (b == 49))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T or3gate(T a, T b,T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (b == 48) && (c == 48))
            {
                return 48;
            }
            else if ((a == 49) || (b == 49) || (c == 49))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T nandgate(T a, T b, T t, T t1) {
        if (t >= t1) {
            if ((a == 49) && (b == 49))
            {
                return 48;
            }
            else if ((a == 48) || (b == 48))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T nand3gate(T a, T b, T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 49) && (b == 49) && (c == 49))
            {
                return 48;
            }
            else if ((a == 48) || (b == 48) || (c == 48))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T norgate(T a, T b, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (b == 48))
            {
                return 49;
            }
            else if ((a == 49) || (b == 49))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T nor3gate(T a, T b, T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (b == 48) && (c == 48))
            {
                return 49;
            }
            else if ((a == 49) || (b == 49) || (c == 49))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }


    T xorgate(T a, T b, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (b == 48))
            {
                return 48;
            }
            else if ((a == 49) && (b == 49))
            {
                return 48;
            }
            else if ((a == 48) && (b == 49))
            {
                return 49;
            }
            else if ((a == 49) && (b == 48))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T xor3gate(T a, T b,T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (c == 48) && (b == 48))
            {
                return 48;
            }
            else  if ((a == 48) && (b == 49) && (c == 49))
            {
                return 48;
            }
            else  if ((b == 48) && (a == 49) && (c == 49))
            {
                return 48;
            }
            else  if ((c == 48) && (b == 49) && (a == 49))
            {
                return 48;
            }
            else if ((a == 49) && (c == 49) && (b == 49))
            {
                return 49;
            }
            else if ((a == 49) && (b == 48) && (c == 48))
            {
                return 49;
            }
            else if ((b == 49) && (a == 48) && (c == 48))
            {
                return 49;
            }
            else if ((c == 49) && (b == 48) && (a == 48))
            {
                return 49;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T xnorgate(T a, T b, T t, T t1) {
        if (t >= t1) {
            if ((a == 48 && b == 48) || (a == 48 && b == 49))
            {
                return 49;
            }
            else if ((a == 48 && b == 49) || (a == 49 && b == 48))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T xnor3gate(T a, T b, T c, T t, T t1) {
        if (t >= t1) {
            if ((a == 48) && (c == 48) && (b == 48))
            {
                return 49;
            }
            else  if ((a == 48) && (b == 49) && (c == 49))
            {
                return 49;
            }
            else  if ((b == 48) && (a == 49) && (c == 49))
            {
                return 49;
            }
            else  if ((c == 48) && (b == 49) && (a == 49))
            {
                return 49;
            }
            else if ((a == 49) && (c == 49) && (b == 49))
            {
                return 48;
            }
            else if ((a == 49) && (b == 48) && (c == 48))
            {
                return 48;
            }
            else if ((b == 49) && (a == 48) && (c == 48))
            {
                return 48;
            }
            else if ((c == 49) && (b == 48) && (a == 48))
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }

    T notgate(T a, T t, T t1) {
        if (t > t1) {
            if (a == 48)
            {
                return 49;
            }
            else if (a == 49)
            {
                return 48;
            }
            else
            {
                return 117;
            }
        }
        else
        {
            return 117;
        }
    }
    T bufgate(T a) {
        return a;
    }
};
int main()
{
    Gate<int> gate;
    map<string, int> wiremap;
    map<string, string> gatenamemap;
    map<string, string> stat0;
    map<string, string> stat1;
    set<string> set1;
    map<string, set<string>> fset;

    bool hel = true;
    while (hel)

    {
        int t = 0, i = 2;
        while (t <= i + 1) {
            // rabte ham arzi baraye fault ha.
            fstream log1;
            log1.open("c17.isc", ios::in);
            if (log1.is_open())
            {
                string str, line;
                string parse, parse2, expa, info[7];

                while (getline(log1, str))
                {
                    if (str.size() > 0) {
                        if (str.front() != '*')
                        {
                            int rb = 6;
                            while (rb > 0)
                            {
                                size_t found1 = str.find("     ");
                                if (found1 < str.size())
                                {
                                    str.replace(found1, 5, " ");
                                }
                                rb--;
                            }
                            rb = 6;
                            while (rb > 0)
                            {
                                size_t found2 = str.find("      ");
                                if (found2 < str.size()) {
                                    str.replace(found2, 6, " ");
                                }
                                rb--;
                            }
                            rb = 6;
                            while (rb > 0)
                            {
                                size_t found3 = str.find("    ");
                                if (found3 < str.size()) {
                                    str.replace(found3, 4, " ");
                                }
                                rb--;
                            }
                            rb = 6;
                            while (rb > 0)
                            {
                                size_t found4 = str.find("   ");
                                if (found4 < str.size()) {
                                    str.replace(found4, 3, " ");
                                }
                                rb--;
                            }
                            rb = 6;
                            while (rb > 0)
                            {
                                size_t found5 = str.find("  ");
                                if (found5 < str.size()) {
                                    str.replace(found5, 2, " ");
                                }
                                rb--;
                            }// baraye az bin bordane fasele haye  ezafi dar har line 
                            str.replace(0, 1, "");
                            stringstream ss(str);
                            // std::cout << "str bad az taghirat : " << str << endl;
                            int kalame = 0;
                            while (getline(ss, parse, ' '))
                            {
                                info[kalame] = parse;
                                kalame++;
                                // cout << parse << endl;
                            }
                            if (info[2] == "inpt")
                            {
                                string wirename = "wire" + info[0];
                                if (t == 0)
                                {
                                    stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                    stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));
                                }
                                else
                                {
                                    stat0[wirename] = wirename + "->sa0";
                                    stat1[wirename] = wirename + "->sa1";
                                }
                            }
                            else if (info[2] == "from")
                            {
                                string wirename = "wire" + info[0];
                                if (t == 0)
                                {
                                    stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                    stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));
                                }
                                else
                                {
                                    stat0[wirename] = wirename + "->sa0";
                                    stat1[wirename] = wirename + "->sa1";
                                }
                            }
                            else if (info[2] == "not")
                            {
                                string wire1, wire2, st, wirename = "wire" + info[0];
                                getline(log1, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 2;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                int bo = 2;
                                while (getline(ss2, parse2, ' '))
                                {
                                    if (bo == 2) {
                                        if (parse2 != " ")
                                        {
                                            wire1 = "wire" + parse2;
                                        }
                                        bo--;
                                    }
                                }
                                if (t == 0)
                                {
                                    stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                    stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));
                                }
                                else
                                {
                                    stat0[wirename] = wirename + "->sa0";
                                    stat1[wirename] = wirename + "->sa1";
                                }
                                stat0.find(wire1)->second = "";
                                stat1.find(wire1)->second = "";
                            }
                            else if (info[2] == "buff")
                            {
                                string wire1, wire2, st, wirename = "wire" + info[0];
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                int bo = 2;
                                while (getline(ss2, parse2, ' '))
                                {
                                    if (parse2 != " ")
                                    {
                                        wire1 = "wire" + parse2;
                                    }
                                }
                                // wiremap.insert(pair<string, int>(wirename, gate.bufgate(wiremap[wire1])));
                                gatenamemap.insert(pair<string, string>(info[1], wirename));
                            }
                            else if (info[2] == "and")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 2;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {
                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat0.find(wire1)->second = "";
                                    stat0.find(wire2)->second = "";
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat0.find(wire1)->second = "";
                                    stat0.find(wire2)->second = "";
                                    stat0.find(wire3)->second = "";
                                }
                            }
                            else if (info[2] == "nand")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 3, an = 3;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                while (an > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    an--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {
                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat0.find(wire1)->second = "";
                                    stat0.find(wire2)->second = "";
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat0.find(wire1)->second = "";
                                    stat0.find(wire2)->second = "";
                                    stat0.find(wire3)->second = "";
                                }
                            }
                            else if (info[2] == "or")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 3;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 3;
                                while (am > 0) {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }

                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                std::cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                std::cout << wire2 << endl;
                                            }
                                            bo--;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat1.find(wire1)->second = "";
                                    stat1.find(wire2)->second = "";
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat1.find(wire1)->second = "";
                                    stat1.find(wire2)->second = "";
                                    stat1.find(wire3)->second = "";
                                }
                            }
                            else if (info[2] == "nor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 2;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                std::cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                std::cout << wire2 << endl;
                                            }
                                            bo--;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat1.find(wire1)->second = "";
                                    stat1.find(wire2)->second = "";
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }

                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                    stat1.find(wire1)->second = "";
                                    stat1.find(wire2)->second = "";
                                    stat1.find(wire3)->second = "";
                                }
                            }
                            else if (info[2] == "xor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 3;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 3;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                if (info[4] == "2")
                                {


                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                }
                                else
                                {
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                            bo--;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }

                                }
                            }
                            else if (info[2] == "xnor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log1, line);
                                int am = 3;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 3;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                std::cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                std::cout << wire2 << endl;
                                            }
                                            bo--;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                    }
                                    if (t == 0)
                                    {
                                        stat0.insert(pair<string, string>(wirename, wirename + "->sa0"));
                                        stat1.insert(pair<string, string>(wirename, wirename + "->sa1"));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    }
                                    else
                                    {
                                        stat0[wirename] = wirename + "->sa0";
                                        stat1[wirename] = wirename + "->sa1";
                                    }
                                }
                            }
                        }
                    }

                }
                if (t == 0)
                {
                    wcout << "-----------------------EQUIVALENCE------------------------\n";
                    for (map<string, string>::iterator j = gatenamemap.begin(); j != gatenamemap.end(); j++)
                    {
                        std::cout << j->first << "==>" << j->second << "==>" << stat0[j->second] << "," << stat1[j->second] << endl;
                    }
                    cout << "--------------------------------------------------------------------------------------------------------------------\n";
                }
            }
            else
            {
                cout << "log1 wont open.";
            }
            // etmam rabete hamarzi baraye fault ha.
            string str, line;
            string parse, parse2, expa, info[7];
            fstream log;
            log.open("c17.isc", ios::in);
            if (log.is_open())
            {
                std::wcout << "------------------------------------input----------------------------------------\n";
                while (getline(log, str))
                {
                    if (str.size() > 0) {
                        if (str.front() != '*')
                        {
                            int rb = 3;
                            while (rb > 0)
                            {
                                size_t found1 = str.find("     ");
                                if (found1 < str.size())
                                {
                                    str.replace(found1, 5, " ");
                                }
                                size_t found2 = str.find("      ");
                                if (found2 < str.size()) {
                                    str.replace(found2, 6, " ");
                                }
                                size_t found3 = str.find("    ");
                                if (found3 < str.size()) {
                                    str.replace(found3, 4, " ");
                                }
                                size_t found4 = str.find("   ");
                                if (found4 < str.size()) {
                                    str.replace(found4, 3, " ");
                                }
                                size_t found5 = str.find("  ");
                                if (found5 < str.size()) {
                                    str.replace(found5, 2, " ");
                                }
                                rb--;
                            }// baraye az bin bordane fasele haye  ezafi dar har line 
                            str.replace(0, 1, "");
                            stringstream ss(str);
                            // std::cout << "str bad az taghirat : " << str << endl;
                            int kalame = 0;
                            while (getline(ss, parse, ' '))
                            {
                                info[kalame] = parse;
                                kalame++;
                                // cout << parse << endl;
                            }
                            if (info[2] == "inpt")
                            {
                                int input;
                                string wirename = "wire" + info[0];
                                char input1;
                                std::cout << "insert the input of " << wirename << " : ";
                                cin >> input1;
                                input = (int)input1;
                                if (t == 0)
                                {
                                    wiremap.insert(pair<string, int>(wirename, input));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));

                                    if (input == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        if (stat0[wirename] != "") {
                                            set1.insert(stat0[wirename]);
                                        }
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else if (input == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        if(stat1[wirename] != "")
                                            set1.insert(stat1[wirename]);
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else
                                    {
                                        if (stat1[wirename] != "")
                                            set1.insert(stat1[wirename]);
                                        if (stat0[wirename] != "") {
                                            set1.insert(stat0[wirename]);
                                        }
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                }
                                else
                                {
                                    wiremap.find(wirename)->second = input;

                                    if (input == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        if(stat0[wirename] != "")
                                            set1.insert(stat0[wirename]);
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else if (input == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        if(stat1[wirename] != "")
                                              set1.insert(stat1[wirename]);
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else
                                    {
                                        if (stat1[wirename] != "")
                                            set1.insert(stat1[wirename]);
                                        if (stat0[wirename] != "") {
                                            set1.insert(stat0[wirename]);
                                        }
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                }
                            }
                            else if (info[2] == "from")
                            {
                                string wirename = "wire" + info[0];
                                if (t == 0)
                                {
                                    wiremap.insert(pair<string, int>(wirename, wiremap[gatenamemap[info[3]]]));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));

                                    if (wiremap[gatenamemap[info[3]]] == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat0[wirename] != "")
                                        {
                                            set1.insert(stat0[wirename]);
                                        }
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else if (wiremap[gatenamemap[info[3]]] == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat1[wirename] != "")
                                        {
                                            set1.insert(stat1[wirename]);
                                        }
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else
                                    {
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat0[wirename] != "")
                                        {
                                            set1.insert(stat0[wirename]);
                                        }
                                        if (stat1[wirename] != "")
                                        {
                                            set1.insert(stat1[wirename]);
                                        }
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                }
                                else
                                {
                                    wiremap.find(wirename)->second = wiremap[gatenamemap[info[3]]];
                                    if (wiremap[gatenamemap[info[3]]] == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat0[wirename] != "")
                                        {
                                            set1.insert(stat0[wirename]);
                                        }
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else if (wiremap[gatenamemap[info[3]]] == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat1[wirename] != "")
                                        {
                                            set1.insert(stat1[wirename]);
                                        }
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else
                                    {
                                        set1 = fset[gatenamemap[info[3]]];
                                        if (stat0[wirename] != "")
                                        {
                                            set1.insert(stat0[wirename]);
                                        }
                                        if (stat1[wirename] != "")
                                        {
                                            set1.insert(stat1[wirename]);
                                        }
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                }
                            }
                            else if (info[2] == "not")
                            {
                                string wire1, wire2, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                int bo = 2;
                                while (getline(ss2, parse2, ' '))
                                {
                                    if (bo == 2) {
                                        if (parse2 != " ")
                                        {
                                            wire1 = "wire" + parse2;
                                        }
                                        bo--;
                                    }
                                    else
                                    {
                                        t1 = stoi(parse2);
                                    }
                                }
                                if (t1 > i)
                                {
                                    i = t1 + 1;
                                }
                                if (t == 0)
                                {
                                    int val = gate.notgate(wiremap[wire1], t, t1);
                                    wiremap.insert(pair<string, int>(wirename,val));
                                    gatenamemap.insert(pair<string, string>(info[1], wirename));
                                    if (val == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        set1 = fset[wire1];
                                        if(stat0[wirename] != "")
                                             set1.insert(stat0[wirename]);
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else if (val == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        set1 = fset[wire1];
                                        if (stat1[wirename] != "")
                                            set1.insert(stat1[wirename]);
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                    else
                                    {
                                        set1 = fset[wire1];
                                        if (stat1[wirename] != "")
                                             set1.insert(stat1[wirename]);
                                        if (stat0[wirename] != "")
                                             set1.insert(stat0[wirename]);
                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                        set1.clear();
                                    }
                                }
                                else
                                {
                                    int val = gate.notgate(wiremap[wire1], t, t1);
                                    wiremap.find(wirename)->second = val;
                                    if (val == 49)
                                    {
                                        stat1.find(wirename)->second = "";
                                        set1 = fset[wire1];
                                        if (stat0[wirename] != "")
                                              set1.insert(stat0[wirename]);
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else if (val == 48)
                                    {
                                        stat0.find(wirename)->second = "";
                                        set1 = fset[wire1];
                                        if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                    else
                                    {
                                        set1 = fset[wire1];
                                        if (stat1[wirename] != "")
                                              set1.insert(stat1[wirename]);
                                        if (stat0[wirename] != "")
                                              set1.insert(stat0[wirename]);
                                        fset.find(wirename)->second = set1;
                                        set1.clear();
                                    }
                                }
                            }
                            else if (info[2] == "buff")
                            {
                                string wire1, wire2, st, wirename = "wire" + info[0];
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                int bo = 2;
                                while (getline(ss2, parse2, ' '))
                                {
                                    if (parse2 != " ")
                                    {
                                        wire1 = "wire" + parse2;
                                    }
                                }
                                wiremap.insert(pair<string, int>(wirename, gate.bufgate(wiremap[wire1])));
                                gatenamemap.insert(pair<string, string>(info[1], wirename));
                            }
                            else if (info[2] == "and")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 4;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                am = 4;
                                while (am > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {
                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1;
                                    }
                                    if (t == 0)
                                    {
                                        int val = gate.andgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1;
                                        set<string> s2;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2])
                                            {
                                                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                            }
                                            else if (wiremap[wire1] == 48 && wiremap[wire2] == 49)
                                            {
                                                set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                            }
                                            else if (wiremap[wire2] == 48 && wiremap[wire1] == 49)
                                            {
                                                set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                    else
                                    {
                                        int val = gate.andgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap[wirename] = val;
                                        set<string> s1;
                                        set<string> s2;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2])
                                            {
                                                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                            else if (wiremap[wire1] == 48 && wiremap[wire2] == 49)
                                            {
                                                set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                            else if (wiremap[wire2] == 48 && wiremap[wire1] == 49)
                                            {
                                                set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                if (stat1[wirename] != "")
                                                {
                                                    set1.insert(stat1[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0)
                                    {
                                        int val = gate.and3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename,val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1;
                                        set<string> s2;
                                        set<string> s3;
                                        set<string> s4;
                                        s3 = fset[wire3];
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));
                                            set_union(begin(s3), end(s3),
                                                begin(s4), end(s4),
                                                inserter(set1, begin(set1)));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            s4.clear();
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 48)
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3), begin(s2), end(s2),inserter(s4, begin(s4)));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3), begin(s1), end(s1), inserter(s4, begin(s4)));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_union(begin(s1), end(s1), begin(s2), end(s2), inserter(s4, begin(s4)));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        int val = gate.and3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1;
                                        set<string> s2;
                                        set<string> s3;
                                        set<string> s4;
                                        s3 = fset[wire3];
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));
                                            set_union(begin(s3), end(s3),
                                                begin(s4), end(s4),
                                                inserter(set1, begin(set1)));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename]  = set1;
                                            s4.clear();
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 48)
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3), begin(s2), end(s2), inserter(s4, begin(s4)));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3), begin(s1), end(s1), inserter(s4, begin(s4)));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_union(begin(s1), end(s1), begin(s2), end(s2), inserter(s4, begin(s4)));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (info[2] == "nand")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 3, an = 3;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    am--;
                                }
                                while (an > 0)
                                {
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    an--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1;
                                    }
                                    if (t == 0)
                                    {
                                        int val = gate.nandgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1;
                                        set<string> s2;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 48)
                                        {
                                            stat0.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2])
                                            {
                                             set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                             if (stat0[wirename] != "")
                                             {
                                                 set1.insert(stat0[wirename]);
                                             }
                                             fset.insert(pair<string, set<string>>(wirename, set1));
                                             set1.clear();
                                            }
                                            else if (wiremap[wire1] == 48)
                                            {
                                                set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                            }
                                            else if (wiremap[wire2] == 48)
                                            {
                                                set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                    else {
                                        int val = gate.nandgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1;
                                        set<string> s2;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        if (val == 48)
                                        {
                                            stat0.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2])
                                            {
                                                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                            else if (wiremap[wire1] == 48)
                                            {
                                                set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                            else if (wiremap[wire2] == 48)
                                            {
                                                set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1;
                                    }
                                    if (t == 0)
                                    {
                                        int val = gate.nand3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1;
                                        set<string> s2;
                                        set<string> s3;
                                        set<string> s4;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        s3 = fset[wire3];
                                        if (val == 48)
                                        {
                                            stat0.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));

                                            set_union(begin(s4), end(s4),
                                                begin(s3), end(s3),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2] == wiremap[wire3])
                                            {
                                                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                set_intersection(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset.insert(pair<string, set<string>>(wirename, set1));
                                                set1.clear();
                                                s4.clear();
                                            }
                                            else if (wiremap[wire1] == 48)
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3),
                                                            begin(s2), end(s2),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s2.begin(), s2.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(begin(s3), end(s3),
                                                            begin(s1), end(s1),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_union(begin(s2), end(s2),
                                                            begin(s1), end(s1),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));
                                            set_union(begin(s4), end(s4),
                                                begin(s3), end(s3),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                    else
                                    {
                                    int val = gate.nand3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1;
                                        set<string> s2;
                                        set<string> s3;
                                        set<string> s4;
                                        s1 = fset[wire1];
                                        s2 = fset[wire2];
                                        s3 = fset[wire3];
                                        if (val == 48)
                                        {
                                            stat0.find(wirename)->second = "";
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));

                                            set_union(begin(s4), end(s4),
                                                begin(s3), end(s3),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == wiremap[wire2] == wiremap[wire3])
                                            {
                                                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                set_intersection(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                if (stat0[wirename] != "")
                                                {
                                                    set1.insert(stat0[wirename]);
                                                }
                                                fset[wirename] = set1;
                                                set1.clear();
                                                s4.clear();
                                            }
                                            else if (wiremap[wire1] == 48)
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(begin(s3), end(s3),
                                                            begin(s2), end(s2),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 48)
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_intersection(s2.begin(), s2.end(), s3.begin(), s3.end(), inserter(s4, begin(s4)));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(begin(s3), end(s3),
                                                            begin(s1), end(s1),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 48)
                                                    {
                                                        set_union(begin(s2), end(s2),
                                                            begin(s1), end(s1),
                                                            inserter(s4, begin(s4)));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, begin(set1)));
                                                        if (stat0[wirename] != "")
                                                        {
                                                            set1.insert(stat0[wirename]);
                                                        }
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            set_union(begin(s1), end(s1),
                                                begin(s2), end(s2),
                                                inserter(s4, begin(s4)));
                                            set_union(begin(s4), end(s4),
                                                begin(s3), end(s3),
                                                inserter(set1, begin(set1)));
                                            if (stat1[wirename] != "")
                                            {
                                                set1.insert(stat1[wirename]);
                                            }
                                            if (stat0[wirename] != "")
                                            {
                                                set1.insert(stat0[wirename]);
                                            }
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        s1.clear();
                                        s2.clear();
                                    }
                                }
                            }
                            else if (info[2] == "or")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }

                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                cout << wire2 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1;
                                    }
                                    if (t == 0)
                                    {
                                        int val = gate.orgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename,val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                                else
                                                {
                                                    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        int val = gate.orgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                                else
                                                {
                                                    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                    if (stat0[wirename] != "")
                                                        set1.insert(stat0[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.or3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename,val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4;
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                            set_union(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                    int val = gate.or3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4;
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                            set_union(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] =  set1;
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat0[wirename] != "")
                                                            set1.insert(stat0[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (info[2] == "nor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                cout << wire2 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.norgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                                else
                                                {
                                                    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset.insert(pair<string, set<string>>(wirename, set1));
                                                    set1.clear();
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        int val = gate.norgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;
                                            set1.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                                else
                                                {
                                                    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                    if (stat1[wirename] != "")
                                                        set1.insert(stat1[wirename]);
                                                    fset[wirename] = set1;
                                                    set1.clear();
                                                }
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.nor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4;
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                            set_union(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset.insert(pair<string, set<string>>(wirename, set1));
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        int val = gate.nor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4;
                                        if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                            set_union(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;
                                            set1.clear();
                                            s4.clear();
                                        }
                                        else if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (wiremap[wire1] == 49)
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s2.begin(), s2.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s1.begin(), s1.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (wiremap[wire2] == 49)
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_intersection(s3.begin(), s3.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s4.begin(), s4.end(), s1.begin(), s1.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                    else
                                                    {
                                                        set_union(s1.begin(), s1.end(), s3.begin(), s3.end(), inserter(s4, s4.begin()));
                                                        set_difference(s2.begin(), s2.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                                else
                                                {
                                                    if (wiremap[wire3] == 49)
                                                    {
                                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                                        if (stat1[wirename] != "")
                                                            set1.insert(stat1[wirename]);
                                                        fset[wirename] = set1;
                                                        set1.clear();
                                                        s4.clear();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if (info[2] == "xor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                stringstream ss2(line);
                                if (info[4] == "2")
                                {


                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }


                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.xorgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename,val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3, s4;
                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                    else
                                    {
                                        int val = gate.xorgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3, s4;
                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] = set1;
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                }
                                else
                                {
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                            bo--;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.xor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4,s5,s6,s7;
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(s5, s5.begin()));
                                        set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s6, s6.begin()));
                                        set_symmetric_difference(s6.begin(), s6.end(), s3.begin(), s3.end(), inserter(s7, s7.begin()));
                                        set_union(s5.begin(), s5.end(), s7.begin(), s7.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string,set<string>>(wirename,set1));
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                    else
                                    {
                                        int val = gate.xor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4, s5, s6, s7;
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(s5, s5.begin()));
                                        set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s6, s6.begin()));
                                        set_symmetric_difference(s6.begin(), s6.end(), s3.begin(), s3.end(), inserter(s7, s7.begin()));
                                        set_union(s5.begin(), s5.end(), s7.begin(), s7.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] = set1;
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }

                                }
                            }
                            else if (info[2] == "xnor")
                            {
                                string wire1, wire2, wire3, st, wirename = "wire" + info[0];
                                int t1;
                                // cout << "wirename in gate nand : " << wirename << endl;
                                getline(log, line);
                                int am = 2;
                                while (am > 0)
                                {
                                    if (line.find("     ") < line.size())
                                    {
                                        size_t found = line.find("     ");
                                        line.replace(found, 5, " ");
                                    }
                                    if (line.find("    ") < line.size())
                                    {
                                        size_t found = line.find("    ");
                                        line.replace(found, 4, " ");
                                    }
                                    am--;
                                }
                                line.replace(0, 1, "");
                                if (info[4] == "2")
                                {


                                    stringstream ss2(line);
                                    int bo = 3;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 3)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                                cout << wire1 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 2) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                                cout << wire2 << endl;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.xnorgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3, s4;
                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                    else
                                    {
                                        int val = gate.xnorgate(wiremap[wire1], wiremap[wire2], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3, s4;
                                        set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_difference(s3.begin(), s3.end(), s4.begin(), s4.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] = set1;
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                }
                                else
                                {
                                    stringstream ss2(line);
                                    int bo = 4;
                                    while (getline(ss2, parse2, ' '))
                                    {
                                        if (bo == 4)
                                        {
                                            if (parse2 != " ")
                                            {
                                                wire1 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 3) {
                                            if (parse2 != " ")
                                            {
                                                wire2 = "wire" + parse2;
                                            }
                                            bo--;
                                        }
                                        else if (bo == 1)
                                        {
                                            wire3 = "wire" + parse2;
                                        }
                                        else
                                        {
                                            t1 = stoi(parse2);
                                            bo--;
                                        }

                                    }
                                    if (t1 > i)
                                    {
                                        i = t1 + 1;
                                    }
                                    if (t == 0) {
                                        int val = gate.xnor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.insert(pair<string, int>(wirename, val));
                                        gatenamemap.insert(pair<string, string>(info[1], wirename));
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4, s5, s6, s7;
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(s5, s5.begin()));
                                        set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s6, s6.begin()));
                                        set_symmetric_difference(s6.begin(), s6.end(), s3.begin(), s3.end(), inserter(s7, s7.begin()));
                                        set_union(s5.begin(), s5.end(), s7.begin(), s7.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset.insert(pair<string, set<string>>(wirename, set1));

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                    else
                                    {
                                        int val = gate.xnor3gate(wiremap[wire1], wiremap[wire2], wiremap[wire3], t, t1);
                                        wiremap.find(wirename)->second = val;
                                        set<string> s1 = fset[wire1];
                                        set<string> s2 = fset[wire2];
                                        set<string> s3 = fset[wire3];
                                        set<string> s4, s5, s6, s7;
                                        set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s4, s4.begin()));
                                        set_intersection(s4.begin(), s4.end(), s3.begin(), s3.end(), inserter(s5, s5.begin()));
                                        set_symmetric_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s6, s6.begin()));
                                        set_symmetric_difference(s6.begin(), s6.end(), s3.begin(), s3.end(), inserter(s7, s7.begin()));
                                        set_union(s5.begin(), s5.end(), s7.begin(), s7.end(), inserter(set1, set1.begin()));
                                        if (val == 48)
                                        {
                                            stat0[wirename] = "";
                                            if (stat1[wirename] != "")
                                                set1.insert(stat1[wirename]);
                                            fset[wirename] = set1;
                                        }
                                        else if (val == 49)
                                        {
                                            stat1[wirename] = "";
                                            if (stat0[wirename] != "")
                                                set1.insert(stat0[wirename]);
                                            fset[wirename] = set1;

                                        }
                                        set1.clear();
                                        s3.clear();
                                        s4.clear();
                                    }
                                }
                            }
                        }
                    }

                }

                std::cout << "-----------------------output (t = " << t << ")------------------------\n";
                for (map<string, string>::iterator j = gatenamemap.begin(); j != gatenamemap.end(); j++)
                {
                    std::cout << j->first << "==>" << j->second << "==>" << (char)wiremap[j->second] << endl;
                }
                std::cout << "----------------------------deductive fault simulation----------------------------\n";
                for (map<string, set<string>>::iterator s = fset.begin(); s != fset.end(); s++) {
                    std::cout << s->first << "=set of fault=>";
                    set<string> s5(s->second.begin(), s->second.end());

                    set<string>::iterator itr = s5.begin();
                    for (;itr != s5.end(); ++itr)
                    {
                        std::cout << ',' << *itr;
                    }
                    std::cout << endl;
                }
            }
            else
            {
                std::cout << "file baz nashod";
            }
            t++;
        }
        std::cout << "\n\n do you want to continue?(y/n) ";
        char h;
        std::cin >> h;
        if (h == 'n') {
            hel = false;
        }
    }
    return 0; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
