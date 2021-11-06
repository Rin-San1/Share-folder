#ifndef MEASTEMP_H
#define MEASTEMP_H

struct meas {
	unsigned short day;
	unsigned short month;
	unsigned short year;
	short temp;
};

/*запеолнет поле с датой */
void fill_date (struct meas *t, const unsigned short int D);

/* заполняет поле с температурой */
void fill_temp(struct meas *t, const unsigned short int D);

/* записывает массив t в файл */
int print_in_file (struct meas *t, const unsigned short int D, const char *filename);


#endif
