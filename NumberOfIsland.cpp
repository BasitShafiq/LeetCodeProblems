bool isSafe(vector<vector<char>>island, int x, int y, int row, int col)
{
	if (x >= 0 && x < row && y < col && y >= 0)
	{
		return true;
	}
	return false;
}
void DFSonIsland(vector<vector<char>>& island, int x, int y, int row, int col)
{
	if (!isSafe(island, x, y, row, col) || island[x][y] == '2')
	{
		return;
	}
	island[x][y] = '2';
	DFSonIsland(island, x - 1, y, row, col);
	DFSonIsland(island, x + 1, y, row, col);
	DFSonIsland(island, x, y + 1, row, col);
	DFSonIsland(island, x, y - 1, row, col);
}

int numIslands(vector<vector<char>>& grid)
{
	int row = grid.size();
	int col = grid[0].size();

	int numberOfIsland = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (grid[i][j] == '1')
			{
				numberOfIsland++;
				DFSonIsland(grid, i, j, row, col);
			}
		}
	}
	return numberOfIsland;
}
