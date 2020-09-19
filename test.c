char 	**grid_construct(char *constant, int nb_comb[4][4],char combi[4][4][6][4])
{
	int nb_comb1;
	int nb_comb4;
	char tab[4][4];	
	int c1;

    nb_comb1 = nb_comb[constant[0]][constant[4]] - 1;
	while (nb_comb1 >= 0)
	{
		c1 = 0;
		while (c1 != 4)
		{
			tab[c1][0] = combi[constant[0]][constant[4]][nb_comb1][c1];
			c1++;
		}
		nb_comb1--;
		boucle2(nb_comb, constant, tab, combi);
	}
	return (0);
}