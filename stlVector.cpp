#include<iostream>
#include<vector>

int main(){

//  creating array vector   

    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    std::vector<int> v2 = {40,50,60};
    std::vector<int> v3 {70,80,90};

//  at(),front(),back() 

    std::cout<<">> examples of at(), front(),back()"<<std::endl;
    std::cout<<v1.at(2)<<" ";
    std::cout<<v1.front()<<" ";
    std::cout<<v1.back()<<" "<<std::endl;


//  iterator, reverse_iterator  

    std::cout<<">> example of iterator (vector v1 used)"<<std::endl;
    for(std::vector<int>::iterator i = v1.begin(); i!=v1.end();i++) //iterator
        std::cout<<*i<<" ";
    std::cout<<std::endl;
    
    std::cout<<">> example of reverse_iterator (vector v2 used)"<<std::endl;
    for(std::vector<int>::reverse_iterator i = v2.rbegin(); i !=v2.rend();i++) //reverse_iterator(confuses,use reverse_iterstor when rbegin() and rend())
        std::cout<<*i<<" ";
    std::cout<<std::endl;


//  auto filling array vector   

    std::cout<<">> example of filling array"<<std::endl;
    std::vector<int> v4(5,10); //create any array of size 5 elements havingg value 10
    for(std::vector<int>::iterator i = v4.begin();i != v4.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


//  pop_back()  

    std::cout<<">> example of pop_back() (vector v3 used"<<std::endl;
    v3.pop_back();
    for(std::vector<int>::iterator i = v3.begin(); i!=v3.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;



//  insert  

    std::cout<<">> insert example 1"<<std::endl;
    std::vector<int>::iterator it = v1.begin();
    v1.insert(it,3,10);
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    it = v1.begin();
    std::cout<<">> insert example 2"<<std::endl;
    std::vector<int> v_add (3,40);
    v1.insert(it+2,v_add.begin(),v_add.end());
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    std::cout<<">> insert example 3"<<std::endl;
    int arr[3] = {7,5,6};
    v1.insert(v1.begin(),arr,arr+3);
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


//  erase

    std::cout<<">> erase example 1"<<std::endl;
    v1.erase(v1.begin()+3); //deletes the third element
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    std::cout<<">> erase example 2"<<std::endl;
    v1.erase(v1.begin(),v1.begin()+3); //deletes the first 3 elements
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


//  swap

    std::cout<<">> example of swap "<<std::endl;
    std::cout<<">> before swapping "<<std::endl;
    std::cout<<"v1 : ";
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    std::cout<<"v2 : ";
    for(std::vector<int>::iterator i = v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    v1.swap(v2);

    std::cout<<">>  after swapping "<<std::endl;
    std::cout<<"v1 : ";
    for(std::vector<int>::iterator i = v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    std::cout<<"v2 : ";
    for(std::vector<int>::iterator i = v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


//  clear

    std::cout<<">> before clear() v3 : ";
    for(std::vector<int>::iterator i = v3.begin();i!=v3.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;
    v3.clear();
    std::cout<<">> after clear() v3 : ";
    for(std::vector<int>::iterator i = v3.begin();i!=v3.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


// size() and capacity()

    std::cout<<">> size() and capacity() comparision: "<<std::endl;
    for(int i=0;i<=32;i++){
        v3.push_back(i);
        std::cout<<v3.at(i)<<" input  "<<v3.size()<<" size    "<<v3.capacity()<<" capacity"<<std::endl;
    }

//  emplace, emplace_back (This effectively increases the container size by one)
    std::cout<<">> emplace() "<<std::endl;
    std::cout<<">> before emplace on v2 : ";
    for(std::vector<int>::iterator i = v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;
    it = v2.begin();
    v2.emplace(it,333);
    v2.emplace(v2.end(),444);
    std::cout<<">> after emplace on v2 : ";
    for(std::vector<int>::iterator i = v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;

    v2.emplace_back(1);
    std::cout<<">> after emplace_back on v2 : ";
    for(std::vector<int>::iterator i = v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;


    return 0;
}

