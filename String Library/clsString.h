#pragma once

#include <iostream>
using namespace std;
class clsString
{
private:
    string _Value;
    
public:
    clsString(string Value) {
        _Value = Value;
    }
    void SetValue(string Value) {
        _Value = Value;
    }
    string GetValue() {
        return _Value;
    }
    __declspec(property(get = GetValue, put = SetValue)) string Value;

    short CountWords(string S)
    {

        string delim = " ";
        short Counter = 0;
        short pos = 0;
        string sWord;


        while ((pos = S.find(delim)) != string::npos)
        {

            sWord = S.substr(0, pos); // store the word 
            cout << "sword = " << sWord << "  sdjd" << endl;
            if (sWord != "")
            {
                Counter++;
            }

            S.erase(0, pos + delim.length());

        }

        if (S != "")
        {
            Counter++;
        }

        return Counter;



    }
    void CountWords() {
        CountWords(_Value);
    }

};

