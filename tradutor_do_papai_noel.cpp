#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    map<string, string>list;
    list["brasil"]                ="Feliz Natal!";
    list["alemanha"]              ="Frohliche Weihnachten!";
    list["austria"]               ="Frohe Weihnacht!";
    list["coreia"]                ="Chuk Sung Tan!";
    list["espanha"]               ="Feliz Navidad!";
    list["grecia"]                ="Kala Christougena!";
    list["estados-unidos"]        ="Merry Christmas!";
    list["inglaterra"]            ="Merry Christmas!";
    list["australia"]             ="Merry Christmas!";
    list["portugal"]              ="Feliz Natal!";
    list["suecia"]                ="God Jul!";
    list["turquia"]               ="Mutlu Noeller";
    list["argentina"]             ="Feliz Navidad!";
    list["chile"]                 ="Feliz Navidad!";
    list["mexico"]                ="Feliz Navidad!";
    list["antardida"]             ="Merry Christmas!";
    list["canada"]                ="Merry Christmas!";
    list["irlanda"]               ="Nollaig Shona Dhuit!";
    list["belgica"]               ="Zalig Kerstfeest!";
    list["italia"]                ="Buon Natale!";
    list["libia"]                 ="Buon Natale!";
    list["siria"]                 ="Milad Mubarak!";
    list["marrocos"]               ="Milad Mubarak!";
    list["japao"]                 ="Merii Kurisumasu!";

    while(cin>>name)
    {
        if(list.count(name))
        {
            cout<<list[name]<<endl;
        }
        else cout<<"--- NOT FOUND ---"<<endl;
    }
    return 0;
}
