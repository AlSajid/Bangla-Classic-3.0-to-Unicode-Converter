using namespace std;

string placement_fix(string data)
{
    for (int i = 0; i < data.length(); i++)
    {
        if (data[i] == 119 && data[i + 1] != 0) // ই-কার
        {
            if (32 <= data[i + 1] && data[i + 1] <= 126)
                swap(data[i], data[i++]);

            else if (-62 <= data[i + 1] && data[i + 1] <= -53)
            {
                for (int j = 2; j > 0; j--)
                    swap(data[i], data[j]);
                i += 2;
            }

            else if (data[i + 1] == -30 && (data[i + 2] == -128 || data[i + 2] == -124))
            {
                for (int j = 3; j > 0; j--)
                    swap(data[i], data[j]);
                i += 3;
            }
        }

        else if (data[i] == -53 && data[i + 1] == -122 && data[i + 2] != 0) // ঐ-কার
        {
            if (32 <= data[i + 2] && data[i + 2] <= 126)
            {
                swap(data[i + 1], data[i + 2]);
                swap(data[i], data[i + 1]);
                i += 2;
            }

            else if (-62 <= data[i + 2] && data[i + 2] <= -53)
            {
                swap(data[i], data[i + 2]);
                swap(data[i + 1], data[i + 3]);
                i += 3;
            }

            else if (data[i + 2] == -30 && (data[i + 3] == -128 || data[i + 3] == -124))
            {
                swap(data[i], data[i + 2]);
                swap(data[i + 1], data[i + 3]);
                swap(data[i + 2], data[i + 4]);
                swap(data[i + 3], data[i + 4]);
                i += 4;
            }
        }

        else if (data[i] == -30 && data[i + 1] == -128 && (data[i + 2] == -96 || data[i + 2] == -95) && data[i + 3] != 0) // এ-কার
        {
            if (32 <= data[i + 3] && data[i + 3] <= 126)
            {
                swap(data[i], data[i + 3]);
                swap(data[i + 1], data[i + 3]);
                swap(data[i + 2], data[i + 3]);
                i += 3;
            }

            else if (-62 <= data[i + 3] && data[i + 3] <= -53)
            {

                swap(data[i + 2], data[i + 4]);
                swap(data[i + 1], data[i + 3]);
                swap(data[i], data[i + 2]);
                swap(data[i], data[i + 1]);
                i += 4;
            }

            else if (data[i + 3] == -30 && (data[i + 4] == -128 || data[i + 4] == -124))
            {
                swap(data[i], data[i + 3]);
                swap(data[i + 1], data[i + 4]);
                swap(data[i + 2], data[i + 5]);
                i += 5;
            }
        }

        else if ((data[i] == -62 && data[i + 1] == -87) && data[i - 1] != 0) // রেফ
        {
            if (32 <= data[i - 1] && data[i - 1] <= 126)
            {
                swap(data[i], data[i - 1]);
                swap(data[i], data[i + 1]);
            }

            else if (-62 <= data[i - 2] && data[i - 2] <= -53)
            {
                swap(data[i], data[i - 2]);
                swap(data[i + 1], data[i - 1]);
            }

            else if (data[i - 3] == -30 && (data[i - 2] == -128 || data[i - 2] == -124))
            {
                swap(data[i + 1], data[i - 1]);
                swap(data[i], data[i - 2]);
                swap(data[i - 1], data[i - 3]);
                swap(data[i - 2], data[i - 3]);
            }
        }
    }
    /*
    for (int i=0; i < data.length(); i++)
    {
        printf("%d ", data[i]);
    }
*/
    return data;
}