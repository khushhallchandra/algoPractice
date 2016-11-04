#include<bits/stdc++.h>

using namespace std;

void computeLPSArray(string text,string  pattern){
    int len = 0;
    lps[0] = 0;

    int i = 1;
    while (i < M){
        if (pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if (len != 0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string text,string  pattern)
{
    int M = text.length();
    int N = pattern.length();

    int lps[M];

    computeLPSArray(pat, M, lps);

    int i = 0;
    int j  = 0;
    while (i < N){
        if (pat[j] == txt[i]){
            j++;
            i++;
        }

        if (j == M){
            printf("Found pattern at index %d \n", i-j);
            j = lps[j-1];
        }

        else if (i < N && pat[j] != txt[i]){
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}



int main(){
    string text = "khushhall";
    string patt = "hall";
    KMPSearch(text, pattern);
    return 0;
}
