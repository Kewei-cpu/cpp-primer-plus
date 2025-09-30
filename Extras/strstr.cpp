#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> get_next(const string &str) {
  vector<int> next(str.size());
  int i = 0, j = 1;
  next[0] = i;

  while (j < str.size()) {
    while (i > 0 && str[i] != str[j]) {
      i = next[i - 1];
    }

    if (str[i] == str[j]) {
      i++;
    }

    next[j] = i;
    j++;
  }

  return next;
}

int strStr(const string &haystack, const string &needle) {
  if (needle.empty())
    return 0;

  int i = 0;
  auto next = get_next(needle);

  for (int j = 0; j < haystack.size(); j++) {
    while (i > 0 && needle[i] != haystack[j]) {
      i = next[i - 1];
    }

    if (needle[i] == haystack[j]) {
      i++;

      if (i == needle.size())
        return j - needle.size() + 1;
    }
  }

  return -1;
}

int main() {
  // auto next = get_next(str);
  // for (int i = 0; i < str.size(); i++) {
  //   cout << str[i] << next[i] << endl;
  // }
  string str1 = "aabaabaaca";
  string str2 = "aabaac";

  cout << strStr(str1, str2);
}