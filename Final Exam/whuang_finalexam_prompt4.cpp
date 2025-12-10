/**
 * @name William Huang
 * @assignment Final Exam
 * @prompt prompt 4
 * Prompt 4
Write a C++ program that converts a sentence input by the user backward, first by words
and then by individual letters. You can assume that the sentence contains no punctuation. When
the sentence is flipped, the capitalization should also be correct, for example:
The quick brown fox jumps over the lazy dog
should become the following outputs
Dog lazy the over jumps fox brown quick the
God yzal eht revo spmuj xof nworb kciuq eht
*/

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const int MAX_WORDS = 50;
    string words[MAX_WORDS];

    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count = 0;
    string temp = "";

    for (int i = 0; i <= sentence.length(); i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            if (temp != "")
            {
                words[count++] = temp;
                temp = "";
            }
        }
        else
        {
            temp += sentence[i];
        }
    }

    cout << "\nSentence reversed by words:\n";

    for (int i = count - 1; i >= 0; i--)
    {
        string word = words[i];

        for (int j = 0; j < word.length(); j++)
            word[j] = tolower(word[j]);
        word[0] = toupper(word[0]);

        if (i != count - 1)
            word[0] = tolower(word[0]);

        cout << word;
        if (i > 0)
            cout << " ";
    }

    cout << endl;

    cout << "\nSentence reversed by letters:\n";

    for (int i = count - 1; i >= 0; i--)
    {
        string word = words[i];

        string reversed = "";
        for (int j = word.length() - 1; j >= 0; j--)
            reversed += word[j];

        for (int j = 0; j < reversed.length(); j++)
            reversed[j] = tolower(reversed[j]);
        reversed[0] = toupper(reversed[0]);

        if (i != count - 1)
            reversed[0] = tolower(reversed[0]);

        cout << reversed;
        if (i > 0)
            cout << " ";
    }
}