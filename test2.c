void boucle2(nb_comb, constant, tab, combi)
{   
    int nb_comb2;
    int c2;

    nb_comb2 = nb_comb[constant[1]][constant[5]] - 1;
    while (nb_comb2 >= 0)
		{   
			nb_comb4 = nb_comb4;
			nb_comb3 = nb_comb3;
			c2 = 0;
			while (c2 != 4)
			{
				tab[c2][1] = combi[constant[1]][constant[5]][nb_comb2][c2];
				c2++;
			}
			nb_comb2--;
			boucle3();
		}
}