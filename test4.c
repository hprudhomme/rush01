void   *boucle4(nb_comb, constant, tab, combi)
{   
    int nb_comb4;
    int c4;

    nb_comb4 = nb_comb[constant[3]][constant[7]] - 1;
    while (nb_comb4 >= 0)
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
						nb_comb4--;
				}
}