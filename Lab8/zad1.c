//Jakie b�d� skutki rozwini�cia nast�puj�cej makrodefinicji?
//Najpierw zgadn��, a potem sprawdzi� komend�
//gcc -E plik
//Na pewno wypisze ze W Polszy OBOWIAZUJE zloty podobnie z reszta krajow
#define INFO(kraj, waluta) W kraj OBOWIAZUJE waluta.
INFO(Polsce, zloty)
INFO(Rosji, rubel)
INFO(Slowacji, euro)
