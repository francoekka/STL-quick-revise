#include <iostream>
#include <string>
#include <set>
#include <functional>

/* *set stores unique value
   *default it store in ascending order
   *almost all functions can be used like we use in vector */

class Fruits{
    public:
        int cost;
        std::string name;
        bool operator<(const Fruits &rhs) const { return cost < rhs.cost; } // store in ascending order
        bool operator>(const Fruits &rhs) const { return cost < rhs.cost; } // store in decending order
};


int main(){


    //SET ----------------------------------------------------------------------------------------------------

    std::set<int> s1 = {1,2,3,4,5,5,4,3,2};
    std::cout<<"s1 : ";
    for(std::set<int>::iterator it = s1.begin();it !=s1.end();it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;

    //stores in descending order 
    std::cout<<"s2 (descending) : ";
    std::set<int,std::greater<>> s2 = {1,2,3,4,5,4,3,2};//["functional" is included for "greater<>"]
    for(std::set<int>::iterator it = s2.begin(); it !=s2.end();it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;


    //store user defined set
    std::cout<<"User defined set : "<<std::endl;
    std::set<Fruits,std::greater<Fruits>> s3 = {{30,"apple"},{20,"banana"},{25,"pineapple"}};
    for (const auto& e : s3)
        std::cout<<e.cost<<" "<<e.name<<std::endl;



    // MULTI-SET--------------------------------------------------------------------------------------------
    // similar as "set" but can store duplicate data
    std::multiset<int,std::greater<>> s4 = {1,2,3,4,5,4,3,2};
    std::cout<<"Multi-Set s4 : ";
    for(auto &e :s4)
        std::cout<<e<<" ";
    std::cout<<std::endl;

    return 0;

}