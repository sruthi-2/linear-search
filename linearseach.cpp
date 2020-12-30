#include <iostream>

int main() {
    // Write C++ code here
    //linear /sequential search
    int n,ar[20],find ,flag=0,no_of_searches=0;
    std::cout<<"enter the number of elements  :";
    std::cin>>n;
    std::cout<<"enter the "<<n<< " elements  : ";
    for(int i=0;i<n;i++)
    {
        std::cin>>ar[i];
    }
    std::cout<<"enter value to be searched  :";
    std::cin>>find;
    for(int i=0;i<n;i++)
    {
        ++no_of_searches;
        if(ar[i]==find) 
              {   
                  flag=1;
                 
                  std::cout<<"the item "<<ar[i]<<" is found at the "<<i+1<<"th location "<<std::endl;
                  ++flag;
                
              }
    }
    if(flag=0)
    {
        std::cout<<"item not found in array";
    }
    else if(flag>1)
    {
        std::cout<<"item is found at multiple locations"<<std::endl;
    }
    std::cout<<"we had "<<no_of_searches<<" number of searches"<<std::endl;
    return 0;
}
