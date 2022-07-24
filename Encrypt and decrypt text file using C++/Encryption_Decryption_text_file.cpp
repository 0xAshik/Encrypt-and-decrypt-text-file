//Encrypt and Decrypt text file
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

//encdec class with encrypt() and
//decrypt() member function

class encdec {
  int key;

  // file name to be encrypt
  string file = "ashik.txt";
  char c;
  public: 
  void encrypt();
  void decrypt();
};

// Defination of encryption function
void encdec::encrypt()
{
   // Key to be used for encryption
  cout << "key: ";
  cin >> key;

  // Input stream
  fstream fin, fout;

  //open input file
  //ios::binary-  reading file
  // character by character
  fin.open(file, fstream::in);
  fout.open("encrypt.txt", fstream::out);

  //Reading original file till
  // end of file

  while(fin >> noskipws >> c){
    int temp = (c+key);

    //write temp as char in
    //output file

    fout << (char)temp;
  }
  // closing both files
  fin.close();
  fout.close();
}

void encdec::decrypt()
{
  cout << "Key: ";
  cin >> key;

  fstream fin;
  fstream fout;
  fin.open("encrypt.txt", fstream::in);
  fout.open("decrypt.txt", fstream::out);

  while (fin >> noskipws >> c)
  {
    //Remove the key form character

    int temp = (c - key);
    fout << (char)temp;
  }

  fin.close();
  fout.close();
}

// Driver Code
int main()
{
  encdec enc;
  char c;
  cout <<"\n";
  cout << "Enter your choice: -> \n";
  cout << "1. Encrypt \n";
  cout << "2. Decrypt \n";
  cin >> c;
  cin.ignore();

  switch (c)
  {
    case '1':
    {
      enc.encrypt();
      break;
    }
    case '2':
    {
      enc.decrypt();
      break;
    }
  }
}