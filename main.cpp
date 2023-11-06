#include <stdio.h>
#include <Windows.h>
#include "Bird.h"
#include "Suzume.h"

int main() {

	Bird* bird;

	bird = new Suzume;

	bird->BirdSing();

	delete bird;

	return 0;

}