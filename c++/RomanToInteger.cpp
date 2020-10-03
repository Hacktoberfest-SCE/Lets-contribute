// This program changes the given Roman Numeral to the corresponding Integer Value


#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin>>input;
    int integer=0;
    for(int i=0;i<input.length();i++){
        if(input[i]=='I'){
            if(input[i+1] == 'V'){
                integer+=4;
                i+=1;
            }
            else if(input[i+1] == 'X'){
                integer+=9;
                i+=1;
            }
            else {
                integer+=1;
            }
        }
        else if(input[i]=='V'){
            integer+=5;
        }
        else if(input[i]=='X'){
            if(input[i+1] == 'L'){
                integer+=40;
                i+=1;
            }
            else if(input[i+1] == 'C'){
                integer+=90;
                i+=1;
            }
            else {
                integer+=10;
            }
        }
        else if(input[i]=='L'){
            integer+=50;
        }
        else if(input[i]=='C'){
            if(input[i+1] == 'D'){
                integer+=400;
                i+=1;
            }
            else if(input[i+1] == 'M'){
                integer+=900;
                i+=1;
            }
            else {
                integer+=100;
            }
        }
        else if(input[i]=='D'){
            integer+=500;
        }
        else if(input[i]=='M'){
            integer+=1000;
        }
    }
    cout<<integer<<endl;
    return 0;
}
