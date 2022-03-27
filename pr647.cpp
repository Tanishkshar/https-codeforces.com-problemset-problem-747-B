// The process of mammoth's genome decoding in Berland comes to its end!

// One of the few remaining tasks is to restore unrecognized nucleotides in a found chain s. Each nucleotide is coded with a capital letter
// of English alphabet: 'A', 'C', 'G' or 'T'. Unrecognized nucleotides are coded by a question mark '?'. Thus, s is a string consisting of
// letters 'A', 'C', 'G', 'T' and characters '?'.

// It is known that the number of nucleotides of each of the four types in the decoded genome of mammoth in Berland should be equal.

// Your task is to decode the genome and replace each unrecognized nucleotide with one of the four types so that the number of nucleotides
// of each of the four types becomes equal.

// Input
// The first line contains the integer n (4 ≤ n ≤ 255) — the length of the genome.

// The second line contains the string s of length n — the coded genome. It consists of characters 'A', 'C', 'G', 'T' and '?'.

// Output
// If it is possible to decode the genome, print it. If there are multiple answer, print any of them. If it is not possible, print three
// equals signs in a row: "===" (without quotes).

// Examples
// inputCopy
// 8
// AG?C??CT
// outputCopy
// AGACGTCT
// inputCopy
// 4
// AGCT
// outputCopy
// AGCT
// inputCopy
// 6
// ????G?
// outputCopy
// ===
// inputCopy
// 4
// AA??
// outputCopy
// ===

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 4 == 0)
    {
        int fa = 0, fc = 0, fg = 0, ft = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                fa++;
            }
            else if (s[i] == 'C')
            {
                fc++;
            }
            else if (s[i] == 'G')
            {
                fg++;
            }
            else if (s[i] == 'T')
            {
                ft++;
            }
        }
        if (fa <= n / 4 && fc <= n / 4 && fg <= n / 4 && ft <= n / 4)
        {
            char c = 'A';
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '?')
                {
                    if (fa < n / 4)
                    {
                        s[i] = 'A';
                        fa++;
                    }
                    else if (fc < n / 4)
                    {
                        s[i] = 'C';
                        fc++;
                    }
                    else if (fg < n / 4)
                    {
                        s[i] = 'G';
                        fg++;
                    }
                    else if (ft < n / 4)
                    {
                        s[i] = 'T';
                        ft++;
                    }
                }
            }

            cout << s << "\n";
        }
        else
        {
            cout << "===\n";
        }
    }
    else
    {
        cout << "===\n";
    }

    return 0;
}