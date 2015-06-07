//
//  main.cpp
//  time
//
//  Created by Fahad Mustafa on 06/06/2015.
//  Copyright (c) 2015 Fahad Mustafa. All rights reserved.
//

#include <iostream>

class time
{
public:
    time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    
    int hr,min,sec;
    
    void read()
    {
        std::cout<<"Hours=";
        std::cin>>hr;
        std::cout<<"\nMinutes=";
        std::cin>>min;
        std::cout<<"\nSeconds=";
        std::cin>>sec;
    }
    time operator +(time t2)
    {
        time t3;
        t3.sec=sec+t2.sec;
        if(t3.sec>60)
        {
            t2.min+=1;
            t3.sec-=60;
        }
        t3.min=min+t2.min;
        if(t3.min>60)
        {
            t2.hr+=1;
            t3.min-=60;
        }
        t3.hr=hr+t2.hr;
        return t3;
    }
    void display()
    {
        if(hr>=24)
        {
            hr=hr%24;
        }
        if(hr<10)
        {
            std::cout<<"0"<<hr;
        }
        else
        {
            std::cout<<hr;
        }
        if(min<10)
        {
            std::cout<<":0"<<min;
        }
        else
        {
            
        std::cout<<":"<<min;
        }
        
        if(sec<10)
        {
            std::cout<<":0"<<sec;
        }
        else
        {
            std::cout<<":"<<sec;
        }
    }
};
int main()
{  
    
    class time c1,c2,c3;
    std::cout<<"\n\nEnter the First Time\n\n";
    c1.read();  
    std::cout<<"\n\nEnter the Second Time\n\n";
    c2.read();  
    c3=c1+c2;  
    std::cout<<"\n\nFirst Time  \t\t";
    c1.display();  
    std::cout<<"\n\nSecond Time  \t\t";
    c2.display();  
    std::cout<<"\n\nAfter addition,the time is ";
    c3.display();  
    getchar();
}  
