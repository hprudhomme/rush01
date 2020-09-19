void    boucle3(nb_comb, constant, tab, combi)
{   
    int nb_comb3;
    int c3;

    nb_comb3 = nb_comb[constant[2]][constant[6]] - 1;    
    while (nb_comb3 >= 0)
			{
				nb_comb4 = nb_comb4;
				c3 = 0;
				while (c3 != 4)
				{
					tab[c3][2] = combi[constant[2]][constant[6]][nb_comb3][c3];
					c3++;
				}
				nb_comb3--;
				boucle4(nb_comb, constant, tab, combi);
			}
}