#include <iostream>

#include <string>

using namespace std;

int main()

{

    long int t, total, n;

    cin >> t;

    string str1, str2,str3;

    while (t--)

    {

        total = 1;

        cin >> n;

        if (n == 0)

        {

            cout << "Draw\n";

            continue;

        }

        cin >> str1;

        for (int i = 0; i < n - 1; i++)

        {

            cin >> str2;

            if (str1 == str2)

                total++;

            else    

            str3=str2;

        }

        //cout<<total<<endl;

        if (total == n - total)

            cout << "Draw\n";

        else if (total > n - total)

            cout << str1 << "\n";

        else

            cout << str3 << "\n";

    }

    return 0;

}

