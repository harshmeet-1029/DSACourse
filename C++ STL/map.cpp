#include <iostream>
#include <map>

using namespace std;

int main()
{
  /*
  Map
  it is exactly like dict in python

  {key:value} it has key value pair

  it can have duplicate value but not key
  Key cab be of any datatype
  value can be anything too

  Sytnax of defining it is

  map<datatype of key,datatypes of value> <var_name>;

  map<int,int> mp;
  map<int,pair<int,int>> mp;
  map<pair<int,int>,int> mp;

 How to store the last one ->   map<pair<int,int>,int> mp;

     mp[{2,3}] = 10;

   */
  map<int, int> mp;

  /*
  Inserting the value in map

  mp[index] = <value>;

  or
  mp.emplace({key,value});
  or
  mp.insert({key,value});

   */
  mp[1] = 10;
  mp.emplace(2, 11);
  mp.insert({3, 12}); // {key:value}

  for (auto it : mp)
  {
    //        key                 value
    cout << it.first << ":" << it.second << endl;
  }

  // or
  // map_var[index]
  cout << mp[1] << endl; // 10
  cout << mp[5] << endl; // 0 it reutrnrs 0 if there is no key presert like that

  auto its = mp.find(1); // key
  cout << its->second << endl;

  // two methods of printing
  //  <iterator>.first
  // iterator->first

  auto ist = mp.find(10); // key
  cout << ist->second << endl;

  auto up = mp.lower_bound(2);
  cout << up->first << ":" << up->second << endl;
  auto lb = mp.upper_bound(3);
  cout << lb->first << ":" << lb->second << endl;
}