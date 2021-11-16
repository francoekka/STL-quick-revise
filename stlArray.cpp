#include<iostream>
#include<array>
using std::string;
int main(){
    std::array<int,5> a1;
    a1={1,2,3,4,5};
    std::array<int,5> a2 = {1,2,3,4,5};
    std::array<int,5> a3 {1,2,3,4,5};
    std::array<string,5> a4 {"fra","nco","ek","k","a"};

    for(int i=0;i<5;i++){
        std::cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<" "<<a4[i]<<std::endl;
    }

//  using at(), front(), back()

    std::cout<<a3.at(3)<<std::endl; 
    //std::cout<<a3.at(10)<<std::endl; //throws an exception when out of bound
    std::cout<<a4.front()<<std::endl;
    std::cout<<a1.back()<<std::endl;
    return 0;
}