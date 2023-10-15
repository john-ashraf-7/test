#include <iostream>
using namespace std;


void DisplayPalindromes(string input)
{
  int size = input.size();
  int pivot = 0;
  for(int i=0;i<size;i++)
  {
    bool correct = true;
    int incrementer = 0;
    int decrementer = 0;
    cout << "test" << endl;
    while(correct)
    {
      if(input[pivot+decrementer] == input[pivot+incrementer])
      {
        //in here, we need to complete the code.
        cout << "hi guys" << endl;
        cout << "wassup ayy" << endl;
      }
      else
      {

      }
    }
    pivot++;
    incrementer++;
    decrementer--;

  }

}

int main()
{
  string input;
  cin >> input;
  DisplayPalindromes(input);

}
