bool solvePuzzle(vector<vector<char>>& board, int x, int y, string word, int index)
{
	bool search = false;
	char character = board[x][y];
	if (character != word[index])
	{
		return search;
	}
	if (word.size() == index + 1)
	{
		return true;
	}
	board[x][y] = '#';


	if (x > 0 && solvePuzzle(board, x - 1, y, word, index + 1))
	{
		search = true;
	}
	if (!search && x < board.size() - 1 && solvePuzzle(board, x + 1, y, word, index + 1))
	{
		search = true;
	}
	if (!search && y < board[0].size() - 1 && solvePuzzle(board, x, y + 1, word, index + 1))
	{
		search = true;
	}
	if (!search && y > 0 && solvePuzzle(board, x, y - 1, word, index + 1))
	{
		search = true;
	}
	board[x][y] = character;
	return search;
}
bool exist(vector<vector<char>>& board, string word)
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[0].size(); j++)
		{
			if (board[i][j] == word[0])
			{
				if (solvePuzzle(board, i, j, word, 0))
					return true;

			}
		}
	}
	return false;
}
