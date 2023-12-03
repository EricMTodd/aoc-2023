#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int lineCount;
int lineIntAlpha;
int lineIntBravo;
int sum;

int main() {
  fstream file;

  file.open("puzzle-input.txt", ios::in);
  if (file.is_open()) {
    string line;
    while(getline(file, line)) {
      cout << line << endl;
    }
  }
}