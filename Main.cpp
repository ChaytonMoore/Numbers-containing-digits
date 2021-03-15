#include <iostream>
#include <string>


bool inlist(char a,char l[4])
{
    return (a==l[0] || a==l[1] || a==l[2] || a==l[3]);
}

int main()
{
    char need[] = {'0','2','5','7'};
    std::string temp;
    bool valid;
    int total = 0;
    for (int i = 1000; i < 6000; i++)
    {
        temp = std::to_string(i);
        valid = true;
        for (int j = 0; j < temp.length(); j++) 
        {
            valid = valid * inlist(temp[j],need);
            
        }
        
        total += valid * i;
    }

    std::cout << total;
    
    return 0;
}
