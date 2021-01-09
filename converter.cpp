using namespace std;

string output;

void convert()
{
    string data;
    int count = 0;
    ifstream input("Bangla_Classic.txt");

    cout << "Converting...";
    clock_t tStart = clock();
    while (getline(input, data))
    {
        count++;
        data = placement_fix(data);
        for (int i = 0; i < data.length(); i++)
        {
            int position = -1;

            //printf("%d\n", data[i]);

            if (data[i] < 0) // যুক্তাক্ষর ও অন্যান্য
            {
                if (data[i] == -62)
                {
                    position = data[i + 1] + 168;
                    i++;
                }
                else if (data[i] == -61)
                {
                    position = data[i + 1] + 232;
                    i++;
                }
                else if (data[i] == -59)
                {
                    if (data[i + 1] == -110 || data[i + 1] == -109)
                        position = data[i + 1] + 278;
                    else if (data[i + 1] == -96 || data[i + 1] == -95)
                        position = data[i + 1] + 266;
                    else if (data[i + 1] == -72)
                        position = data[i + 1] + 244;
                    i++;
                }
                else if (data[i] == -58 && data[i + 1] == -110)
                {
                    position = data[i + 1] + 283;
                    i++;
                }
                else if (data[i] == -53)
                {
                    if (data[i + 1] == -122)
                        position = data[i + 1] + 296;
                    else if (data[i + 1] == -100)
                        position = data[i + 1] + 275;
                    i++;
                }
                else if (data[i] == -30)
                {
                    if (data[i + 1] == -128)
                    {
                        if (!((data[i + 2] == -96 || data[i + 2] == -95) && (data[i + 3] == -59 && data[i + 4] == -96)))
                            position = data[i + 2] + 285;
                    }

                    else if (data[i + 1] == -124)
                        output.append("\u09A6"); // দ

                    i += 2;
                }
                else
                    output += data[i];
            }
            else if (48 <= data[i] && data[i] <= 57) // অঙ্ক
                position = data[i] - 48;

            else if (data[i] == 65) // অ
            {
                if (data[i + 1] == 'v') // আ-কার
                {
                    position = data[i] - 54;
                    i++;
                }
                else
                    position = data[i] - 55;
            }

            else if (66 <= data[i] && data[i] <= 126) // ই থেকে চন্দ্রবিন্দু পর্যন্ত
                position = data[i] - 54;

            else if ((32 <= data[i] && data[i] <= 47) || (58 <= data[i] && data[i] <= 64))
            {
                if (data[i] == 36)
                    output.append("\u09F3"); // ৳
                else if (data[i] == 38)
                    output.append("\u09CD"); // ্‌ - হসন্ত
                else
                    output += data[i];
            }

            //cout << position << endl;
            if (position != -1)
                output.append(banglaCharacters[position]);
        }
        output.append("\n");
    }
    printf("\n%d characters are converted in %.2fs\n", count, (double)(clock() - tStart) / CLOCKS_PER_SEC);
    input.close();

    ofstream unicode("output.txt");
    unicode << output;
    unicode.close();
}
