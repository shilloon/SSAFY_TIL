#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	int T;

	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		int answer = 1;
		
		int arr[10] = {};

		vector<vector<int>> sdocu(9, vector<int>(9));

		for (int i = 0; i < 9; i++) {

			for (int j = 0; j < 9; j++)
				cin >> sdocu[i][j];

		}

		for (int i = 0; i < 9; i++)
		{
			fill(arr, arr + 10, 0);
			for (int j = 0; j < 9; j++)
			{
				
				if (arr[sdocu[i][j]] == 0)
					arr[sdocu[i][j]]++;
				else
				{
					answer = 0;
					break;
				}
			}
		}
		
		if (answer == 1)
		{
			for (int i = 0; i < 9; i++)
			{
				fill(arr, arr + 10, 0);
				for (int j = 0; j < 9; j++)
				{

					if (arr[sdocu[j][i]] == 0)
						arr[sdocu[j][i]]++;
					else
					{
						answer = 0;
						break;
					}
				}
			}
		}


		if (answer == 1)
		{
			for (int i = 0; i < 9; i += 3)
			{

				for (int j = 0; j < 9; j += 3)
				{
					fill(arr, arr + 10, 0);
					for (int z = i; z < i + 3; z++)
					{
						for (int k = j; k < j + 3; k++)
						{

							if (arr[sdocu[z][k]] == 0)
								arr[sdocu[z][k]]++;
							else
							{
								answer = 0;
								break;
							}
						}

					}


				}

			}
		}


		cout << "#" << t << " " << answer << endl;

	}

}
