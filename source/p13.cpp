class Solution {
public:
    int romanToInt(string s) {
        int roman = 0;

        auto a = s.rbegin();
        while (a != s.rend()) {
            char c = *a;

            switch (c) {
                case 'I':
                    roman += 1;
                    ++a;
                    break;

                case 'V':
                    if (a + 1 != s.rend() && *(a + 1) == 'I') {
                        roman += 4;
                        a += 2;
                    } else {
                        roman += 5;
                        ++a;
                    }
                    break;

                case 'X':
                    if (a + 1 != s.rend() && *(a + 1) == 'I') {
                        roman += 9;
                        a += 2;
                    } else {
                        roman += 10;
                        ++a;
                    }
                    break;

                case 'L':
                    if (a + 1 != s.rend() && *(a + 1) == 'X') {
                        roman += 40;
                        a += 2;
                    } else {
                        roman += 50;
                        ++a;
                    }
                    break;

                case 'C':
                    if (a + 1 != s.rend() && *(a + 1) == 'X') {
                        roman += 90;
                        a += 2;
                    } else {
                        roman += 100;
                        ++a;
                    }
                    break;

                case 'D':
                    if (a + 1 != s.rend() && *(a + 1) == 'C') {
                        roman += 400;
                        a += 2;
                    } else {
                        roman += 500;
                        ++a;
                    }
                    break;

                case 'M':
                    if (a + 1 != s.rend() && *(a + 1) == 'C') {
                        roman += 900;
                        a += 2;
                    } else {
                        roman += 1000;
                        ++a;
                    }
                    break;

                default:
                    ++a;
                    break;
            }
        }

        return roman;
    }
};
