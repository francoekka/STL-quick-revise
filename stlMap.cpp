#include <iostream>
#include <vector>
#include <map>

int main(){
    std::map<int,std::string> m1 = {{5,"sony"},{2,"samsung"}};
    m1[3]="moto";
    m1.insert(std::make_pair(8,"redmi"));
    for(auto&e :m1)
        std::cout<<e.first<<" <- key    "<<e.second<<" <- item"<<std::endl;
    std::cout<<std::endl;

//using string as key
    std::cout<<"<<using strings as a key : "<<std::endl;
    std::map<std::string,int> m2 = {{"apple",50},{"orange",20},{"grapes",30}};
    m2["pineapple"]=25;
    for(auto&e :m2)
        std::cout<<e.first<<" <- key    "<<e.second<<" <- item"<<std::endl;
    std::cout<<std::endl;

//using container in map
    std::map<std::string,std::vector<int>> m3; //multimap can also be used which is a better option than uing container
    m3["one"].push_back(111);
    m3["two"].push_back(2222);
    m3["one"].push_back(3);
    for(auto&k : m3){
        std::cout<<k.first<<" ";
        for(auto&i : k.second)
            std::cout<<i<<" ";
        std::cout<<std::endl;
    }
    return 0;

}