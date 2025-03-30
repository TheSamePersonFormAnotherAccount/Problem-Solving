#include <iostream>
std::string createPhoneNumber(const int arr [10]){
  std::string Result = "(";
  for(int i=0;i<10;i++)
    Result += char(arr[i]+48), Result += i == 2 ? ") " : i==5 ? "-" : "" ;   
  return Result ;
}