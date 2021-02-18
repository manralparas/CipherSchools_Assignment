#include<bits/stdc++.h>
using namespace std;
void printDecoding(string number,string output)
{
    if(number.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    string firstChar=number.substr(0,1);
    int firstNum = stoi(firstChar);
    if(firstNum!=0)
    {
        char character= (char)('a'+firstNum-1);
        printDecoding(number.substr(1),output+character);
    }
    if(number.length()<=1)
    {
        return;
    }
    string firstTwo=number.substr(0,2);
    int firstTwonumber=stoi(firstTwo);
    if(firstTwonumber<=26)
    {
        char character=(char)('a' + firstTwonumber-1);
        printDecoding(number.substr(2),output+character);

    }


}
int main()
{
    string s;
    cin>>s;
    printDecoding(s,"");
    
}
