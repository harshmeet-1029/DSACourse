#include <iostream>
#include <vector> // For using vectors

using namespace std;

int main()
{
  /*
  #Vectors
  It is a container which dynamic in nature and we can add as much elements
  we want it is used when we don't know the size of data
  we are going to add
  IT IS DYNAMIC IN NATURE

  #How to define it vector<<datatype>>  <var_name>;

  #how to push the data into the vector
  <var_name>.push_back(<data>);

  #we use this to push the data in the data in back too but this is more fastt
  <var_name>.emplace_back(<data>);


  ---------------------------------
  How to use pair as vector
  vector<pair<int,int>> vec;
  vec.push_back(<data>);
  vec.emplace_back(<data>);

  --------------------------------
  // Adding the data to vector predefined (NOTE EVEN AFTER THIS WE CAN INCREASE ITS SIZE)
  vector<<datatype>> <var_name>(<size>,<item>); over here it will automatically add the items of that particualr size
  fox example
  vector<int> v(5,100) {100,100,100,100}
  // if we write like
  vector<<datatype>> <var_name>(<size>) then it will take item of either 0 or any garbage value
  for example
  vector<int> v(5) {0,0,0,0}
  --------------------------------
  #How to copy the data from one vector to another
  vector <<datatype>> <var_name1>(<Size>,<item>)
  vector <<datatype>> <var_name2>(<var_name1>)
  if we want to copy the var1 to var2
   for example
  vector<int> v1(5,100)
  vector<int> v2(v1)
  --------------------------------
  <=============================================>

  HOW TO ACCESS THE VALUE OF VECTOR
  ---------------------------------------
  1st method
  using its index like
  v[index]
  or
  v.at(index)
  ---------------------------------------
  2nd method is using Iterator
  for iterator we have to write like
  vector<<datatypes>>::iterator <var_name> = <vector_n ame>.begin();

  iterator points at the memory address  more speificilly this <vector_n ame>.begin(); it poitns to memory not element

  with it++ it will move to next memory address

  with cout<<*(it); it will print the item of that location


    */
  vector<pair<int, int>> vec;
  vec.push_back({21, 23}); // OVER HERE I NEED TO ADD {}
  vec.emplace_back(1, 2);  // OVER HERE I DO NOT NEED TO ADD IT BECUASE IT WILL AUTOAMTICALLY TAKE IT AS PAIR and add {}

  vector<int> v;
  v.push_back(211);
  v.push_back(212);
  v.push_back(213);
  v.push_back(214);
  v.push_back(215);
  v.push_back(216);
  // Emplace Back
  v.emplace_back(217);
  v.emplace_back(218);
  v.emplace_back(219);
  cout << v[1] << endl;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << "  ";
  }

  // 2nd method
  vector<int>::iterator it = v.begin();
  cout << *(it) << endl;
  it++; // this or it = it+1 is same so we can do it= it+2 or we can do is it+=1 or it+=2
  cout << *(it) << endl;
  //  How to use pair as vector
  it += 2;
  cout << *(it) << endl;
  /*
  NOW WE HAVE 3 THINGS
  end() -> it will not point at end it will point after end like {10,20,30,40} it will point after 40
  if we do it-- then it will move to 40
  rend() (reverse end) -> rend points right before first element like before 10 in this {10,20,30,40}
  rbegin() (reserve begin) -> rbegin will points at last element {10,20,30,40} like 40 and when i do it++
  it will goes to 30 and all
   */

  /*

  v.back() -> it menas it will goes to the last element  {10,20,30} menas it will pick up the last elements
  */
  //  Method one
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << "   ";
  }
  cout << endl;
  // Method 2
  //  we can use auto which we defines the datattypes autoamtically based on the data stored
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << "  ";
  }
  cout << endl;
  // Mehtod 3
  //  using for each loop where we say auto <var_name> : over her vecotr <vector_varable_name>
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout
        << it << "  ";
  }

  /* -------------------------------------------

  HOW TO DELETE SOMETHING IN VECTOR
  we use erase function to delete somethign in vector

// IT IS USED TO ERASE A SINGLE ELEMNT
  <vector_var_name>.erase(<memory address>)

  for example
  v = {10,20,12,13}
  v.erase(v.begain()) -> remove the first element
  v.erase(v.begain()+1) -> remove the second element
   */
  v.erase(v.begin() + 1);
  cout << endl
       << v[1] << endl;

  /*

  HOW TO ERASE MUTLIPLE ELEMETS LIKE WE DO IN python (startindex :endindex)
    <vector_var_name>.erase(<start memory address (over here count from 0 )>,<end memeory address (but same like python count from 1)>)
   */
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout

        << it << "  ";
  }
  cout << "Erase ";
  cout << endl;
  v.erase(v.begin() + 1, v.begin() + 5);
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout

        << it << "  ";
  }
  cout << endl;

  // Insert Function
  //  it is used add the data any place
  /*
  v.insert(<meneory address>,<item>)
  or adding multiple items
  v.insert(<memory address>,<times>,<item>)
   */

  v.insert(v.begin() + 1, 212);
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout

        << it << "  ";
  }
  cout << endl;
  v.insert(v.begin() + 1, 2, 100);
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout

        << it << "  ";
  }
  cout << endl;

  /*
  --------------------------------
  copy
  how to copy data from one vector to another
  vector<<datatype>> <var_name_to_copy>(<data>);

  v.insert(v.begin(), <var_name_to_copy>.begin(), <var_name_to_copy>.end());
  it will copy the data from vector A to v at first poistion
   */
  vector<int> copy(3, 40);
  v.insert(v.begin() + 2, copy.begin(), copy.end());
  for (auto it : v) // over here it is the <var_name>: <vector_varable_name>
  {
    cout

        << it << "  ";
  }
  cout << endl;

  // HOW TO CHECK THE NUMBER OF ELEMENT IN VECTOR
  // <vector name>.size()
  cout << v.size();
  cout << endl;
  // remove the last elements like poping
  // <vector name>.pop()
  v.pop_back();

  // how to swap vectors
  // <vector 1>.swap(<vecotr 2>) it will change both the vectos

  // How to clear all the vector
  // <vector name>.clear()
  v.clear();

  cout << v.empty(); // check if the vector is empty or not
  cout << endl;
}