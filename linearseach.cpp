#include <iostream>

int main() {
 
    //linear /sequential search
    int n,ar[20],find;
    std::cout<<"enter the number of elements";
    std::cin>>n;
    std::cout<<"enter the"<<n<<"elements   ";
    for(int i=0;i<n;i++)
    {
        std::cin>>ar[i];
    }
    std::cout<<"enter value to be searched";
    std::cin>>find;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==find) 
              {
                  std::cout<<"the item"<<ar[i]<<" is found at the "<<i+1<<" lcation";
              }
    }
    return 0;
}
