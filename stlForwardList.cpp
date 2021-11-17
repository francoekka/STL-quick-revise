#include<iostream>
#include<forward_list>

// *it is like the singly linked list

int main(){
    std::forward_list<int> f1 = {1,2,3,1,4,2};


// insert_after() , before_begin() , begin(),end()

    std::cout<<"using insert_after(), begin_before() :"<<std::endl;
    f1.insert_after(f1.before_begin(),10);
    auto it = f1.begin();
    f1.insert_after(it,{98,87,76});
    for(auto&e : f1)
        std::cout<<e<<" ";
     std::cout<<"\n"<<std::endl;


// max_size

    std::cout<<"max size of f1 : "<<f1.max_size();   /* max_size is used to check beforehand whether the 
                                                     requested size will be allowed by member resize */
    std::cout<<"\n"<<std::endl;

// front()
    std::cout<<"using front() to insert : "<<std::endl;
    f1.front()=11;
    for(auto&e : f1)
        std::cout<<e<<" ";
     std::cout<<"\n"<<std::endl;
    

//  reverse
    std::cout<<"reverse():"<<std::endl;
    f1.reverse();
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;

//  merge()


    std::forward_list<int> f2 = {65,54,32};
    std::cout<<"merge() : "<<std::endl;
    std::cout<<"f1 : ";
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<std::endl;
    std::cout<<"f2 : ";
    for(auto&e : f2)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;
    f1.merge(f2); //splice_after() can be used to merge according to given position
    std::cout<<"f1 merged with f2: "; //f2 gets empty
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;


// sort(), unique()

    f1.sort();
    f1.unique(); /*list need to be sorted or elements that are same should 
                    be next to each other else unique() wont work*/ 
    std::cout<<"after sort() and unique() f1 : "<<std::endl;
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;


// remove_if()
    std::cout<<"after remove_if f1 : "<<std::endl;
    f1.remove_if([] (int n){
        return n > 3;
    });
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;

// resize()

    f1.resize(2); //keep only 2 element and rest are removed
    std::cout<<"resize() : "<<std::endl;
    std::cout<<"f1 : ";
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<std::endl;

    f1.resize(5); //if elements are less then it will fill it with zeros
    std::cout<<"f1 : ";
    for(auto&e : f1)
        std::cout<<e<<" ";
    std::cout<<"\n"<<std::endl;

    return 0;
}