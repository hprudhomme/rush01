char 	**grid_construct(char *constant, int nb_comb[4][4],char combi[4][4][6][4])
{
	printf("je suis la");
	int nb_comb1;
	int nb_comb2;
	int nb_comb3;
	int nb_comb4;
	char tab[4][4];
	nb_comb1 = nb_comb[constant[0]][constant[4]] - 1;
	nb_comb2 = nb_comb[constant[1]][constant[5]] - 1;
	nb_comb3 = nb_comb[constant[2]][constant[6]] - 1;
	nb_comb4 = nb_comb[constant[3]][constant[7]] - 1;
	int nb_comb1_2 = nb_comb1;
	int nb_comb2_2 = nb_comb2;
	int nb_comb3_2 = nb_comb3;
	int nb_comb4_2 = nb_comb4;
	int c1;
	int c2;
	int c3;
	int c4;
	while (nb_comb1_2 >= 0)
	{
		nb_comb4_2 = nb_comb4;
		nb_comb3_2 = nb_comb3;
		nb_comb2_2 = nb_comb2;
		c1 = 0;
		while (c1 != 4)
		{
			tab[c1][0] = combi[constant[0]][constant[4]][nb_comb1][c1];
			c1++;
		}
		nb_comb1_2--;
		while (nb_comb2_2 >= 0)
		{
			nb_comb4_2 = nb_comb4;
			nb_comb3_2 = nb_comb3;
			c2 = 0;
			while (c2 != 4)
			{
				tab[c2][1] = combi[constant[1]][constant[5]][nb_comb2][c2];
				c2++;
			}
			nb_comb2_2--;
			while (nb_comb3_2 >= 0)
			{
				nb_comb4_2 = nb_comb4;
				c3 = 0;
				while (c3 != 4)
				{
					tab[c3][2] = combi[constant[2]][constant[6]][nb_comb3][c3];
					c3++;
				}
				nb_comb3_2--;
				while (nb_comb4_2 >= 0)
				{
					c4 = 0;
					while (c4 != 4)
					{
						tab[c4][3] = combi[constant[3]][constant[7]][nb_comb4][c4];
						c4++;
					}
					affichage(tab);
					if (ft_check_grid(tab, constant))
					{
						affichage(tab);
						return (tab);
					}
					else
						nb_comb4_2--;
				}
			}
		}
	}
	return (0);
}