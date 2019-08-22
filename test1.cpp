//C++实现单词倒排
//注意空的字符串一定要使用""
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str;;
    while(getline(cin,str))
    {
        vector<string> vstr;
        string temp;
        temp="";
        for(int i=0;i<str.size();++i)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
                temp+=str[i];
            else 
            {
                if(!temp.empty())
                {
                    vstr.push_back(temp);
                    temp="";
                }
            }
        }
        if(!temp.empty())
            vstr.push_back(temp);
        
        for(int i=vstr.size()-1;i>0;--i)
            cout<<vstr[i]<<" ";
        cout<<vstr[0]<<endl;
    }
    return 0;
}