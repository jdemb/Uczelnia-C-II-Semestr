//Jakie bêd¹ skutki rozwiniêcia nastêpuj¹cej makrodefinicji?
//Najpierw zgadn¹æ, a potem sprawdziæ komend¹
//gcc -E plik
//Na pewno wypisze ze W Polszy OBOWIAZUJE zloty podobnie z reszta krajow
#define INFO(kraj, waluta) W kraj OBOWIAZUJE waluta.
INFO(Polsce, zloty)
INFO(Rosji, rubel)
INFO(Slowacji, euro)
