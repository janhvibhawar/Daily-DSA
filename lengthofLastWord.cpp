int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}


int main(){
        string s;
        getline(cin, s);
        int output = lengthOfLastWord(s);
        cout << "Length of last word is:" << output << endl ;
        return 0;
}
