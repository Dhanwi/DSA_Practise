class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);  // Create a stringstream to tokenize the string.
        //here tokenize means hm chote chote token me tod rhe hain string ko, that is jo bhi word h us sentence me use tod kr, ek vector array me store kr denge and then simply array ko reverse kr denge and usme se extra space remove kr denge.
        string word;
        vector<string> words;

        // Tokenize the input string and store words in a vector.
        while (ss >> word) {
            words.push_back(word);
        }

        int start = 0;
        int end = words.size() - 1;

        // Reverse the order of words in the vector.
        while (start < end) {
            swap(words[start], words[end]);
            start++;
            end--;
        }

        // Reconstruct the reversed string from the vector of words.
        string reversedString;
        for (const string& w : words) {
            reversedString += w + " ";
        }

        // Remove the trailing space.
        if (!reversedString.empty()) {
            reversedString.pop_back();
        }
/*
reversedString.empty() is a condition that checks if the reversedString is empty. If the string is empty, it means there is nothing to remove, and we don't want to perform any additional actions.

reversedString.pop_back() removes the last character from the string. In this case, it's removing the trailing space character.

The purpose of this code is to ensure that there is no space at the end of the resulting string after reversing the order of words. This makes the output more consistent and aesthetically pleasing, especially in cases where there is an extra space at the end. If there are no trailing spaces, the code has no effect, but if there is one or more trailing spaces, they will be removed.
*/
        return reversedString;
    }
};

/*explanation

The code you provided is a common way to tokenize a string by breaking it into words. It uses the `>>` operator with a stringstream to extract words separated by whitespace (spaces, tabs, newlines) and adds those words to a vector.

Here's an explanation with an example:

```cpp
string s = "Hello World, How are you?";
istringstream ss(s);  // Create a stringstream to tokenize the string.
string word;
vector<string> words;  // A vector to store the extracted words.

while (ss >> word) {
    words.push_back(word);
}
```

In this example, we start with the string `s`, which contains the sentence "Hello World, How are you?"

1. We create an `istringstream` named `ss` and initialize it with the string `s`. This stringstream allows us to read the contents of the string as if it were an input stream.

2. We declare a string variable `word` to temporarily store each extracted word.

3. We declare a vector of strings called `words` to store the words that are extracted from the string.

4. We enter a `while` loop. In each iteration, the `ss >> word` expression is used to read the next word from the stringstream `ss`. The `>>` operator extracts words separated by whitespace (space, tab, newline) and assigns them to the `word` variable.

5. If a word is successfully extracted, we use `words.push_back(word)` to add it to the `words` vector.

After the loop, the `words` vector contains all the individual words extracted from the string. In this example, `words` would contain: `{"Hello", "World,", "How", "are", "you?"}`.

The code allows you to split a string into words, which can be useful for various text processing tasks, like parsing sentences or analyzing text data.

*/


/*

The `>>` operator, in the context of C++ streams, is called the "extraction operator." It is used to extract values from input streams, such as cin (standard input), ifstream (file input), and stringstream (string input). When you use `>>` with a stream and a variable, it extracts data from the stream and assigns it to the variable.

An `istringstream`, on the other hand, is a class provided by the C++ Standard Library that allows you to treat a string as an input stream. It is particularly useful for parsing and tokenizing strings. Here are some key points about `istringstream`:

1. **Input Stream**: An `istringstream` is an input stream that can be used to read data from a string as if the string were an input source like cin or a file.

2. **Tokenization**: It is often used for tokenizing a string by breaking it into words or parts based on delimiters (e.g., whitespace, commas, or any character you choose).

3. **Syntax**: You create an `istringstream` by constructing it with a string as an argument. You can then use it with the extraction operator `>>` to read values from the string.

Here's a simple example of using an `istringstream` to tokenize a string:

```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    std::string input = "Hello, World, How, are, you?";
    std::istringstream iss(input); // Create an istringstream with the input string.

    std::vector<std::string> tokens;
    std::string token;

    while (std::getline(iss, token, ',')) {
        tokens.push_back(token);
    }

    for (const std::string& t : tokens) {
        std::cout << t << std::endl;
    }

    return 0;
}
```

In this example, `iss` is an `istringstream` that treats the `input` string as an input stream. It reads the input string and tokenizes it based on commas, storing the individual parts (words) in the `tokens` vector.

*/
