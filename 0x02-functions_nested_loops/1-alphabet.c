#include "holberton h"

void print_alphabet(void);

int main(void){
	print_alphabet();
	return (0);

}

void print_alphabet(void){
	char alphabet;

	for(alphabet = 'a'; alphabet < 'z'; alphabet++){
		_putchar(alphabet);
	}
	_putchar('\n');
	return;
}
