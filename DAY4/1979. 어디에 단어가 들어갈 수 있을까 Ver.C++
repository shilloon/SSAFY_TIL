#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int T;

	cin >> T;

	for (int t = 1; t <= T; t++)
	{

		int N, K;

		cin >> N >> K;

		vector<vector<int>> arr(N, vector<int>(N));

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		int answer = 0;

		for (int i = 0; i < N; i++)
		{
			int row = 0, col = 0;

			for (int j = 0; j < N; j++)
			{

				if (arr[i][j] == 1)
					row++;

				if (arr[j][i] == 1)
					col++;

				if (arr[i][j] == 0 || j == N-1)
				{

					if (row == K)
					{
						answer++;
						row = 0;
					}
					else
					{
						row = 0;
					}
				}

				if (arr[j][i] == 0 || j == N-1)
				{
					if (col == K)
					{
						answer++;
						col = 0;
					}
					else
					{
						col = 0;
					}
				}

			}

		}

		cout << "#" << t << " " << answer << endl;

	}

}
