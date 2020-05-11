#include <iostream>
#include <fstream>

using namespace std;

int compareStr(string str1, string str2);
void displayDiff(string file1, string file2, string str1, string str2, int line, int step);
int getLineNumber(string fileName);

int main() {
  int lineCounter = 0, compStr, fileSize1, fileSize2;
  string fileName1, fileName2, line1, line2;
  ifstream file1, file2;
  cout << "Enter the name of the first file: ";
  cin >> fileName1;
  cout << "Enter the name of the second file: ";
  cin >> fileName2;
  file1.open(fileName1);
  file2.open(fileName2);
  fileSize1 = getLineNumber(fileName1);
  fileSize2 = getLineNumber(fileName2);
  if (file1.is_open() && file2.is_open()) {
    while (file1 && file2) {
      getline(file1, line1);
      getline(file2, line2);
      if ((line1 == "" || line2 == "") && (lineCounter == 0)) {
        cout << "\nEmpty file!\n";
        break;
      }
      lineCounter++;
      compStr = compareStr(line1, line2);
      if (compStr) {
        displayDiff(fileName1, fileName2, line1, line2, lineCounter, compStr);
        break;
      }
    }
    if (!compStr) {
      if (fileSize1 > fileSize2) {
        cout << "\nFirst " << fileSize2 - 1 << " lines are same but " << fileName1 << " has more lines\n";
      }
      else if (fileSize1 < fileSize2) {
        cout << "\nFirst " << fileSize1 - 1 << " lines are same but " << fileName2 << " has more lines\n";
      }
      else {
        cout << "\nThere is no difference!\n";
        cout << fileName1 << ": " << fileSize1 << endl;
        cout << fileName2 << ": " << fileSize2 << endl;
      }
    }
    file1.close();
    file2.close();
  }
  else {
    cout << "\nError opening files!\n";
  }
  return 0;
}

int compareStr(string str1, string str2) {
  for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
    if (str1[i] != str2[i]) {
      return i + 1;
    }
  }
  if (str1.size() > str2.size()) {
    return str2.size();
  }
  else if (str2.size() > str1.size()) {
    return str1.size();
  }
  return 0;
}

void displayDiff(string file1, string file2, string str1, string str2, int line, int step) {
  cout << "\n(In " << file1 << " line: " << line << ")" << endl << str1 << endl;
  for (int i = 0; i < step - 1; i++) {
    cout << "~";
  }
  cout << "^\n\n";
  cout << "(In " << file2 << " line: " << line << ")" << endl << str2 << endl;
  for (int i = 0; i < step - 1; i++) {
    cout << "~";
  }
  cout << "^\n\n";
}

int getLineNumber(string fileName) {
  int lineNumber = 0;
  char c;
  ifstream file;
  file.open(fileName);
  while (file) {
    file.get(c);
    if (c == '\n') {
      lineNumber++;
    }
  }
  file.close();
  return lineNumber;
}
