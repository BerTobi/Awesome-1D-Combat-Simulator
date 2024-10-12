#include <stdio.h>

//Version 0.1

int main()
{
	printf("Awesome 1D Battler!\n");
	printf("This time featuring Tanks vs Spearmen, a classic Civilization battle\n");

	int tankHealth = 2000;
	int tankDamage = 200;

	int spearmenHealth = 100;
	int spearmenDamage = 5;

	int spearmenAmount, tankAmount;

	printf("How many tanks are going to battle? ");
	scanf("%i", &tankAmount);
	printf("How many spearmen are going to face them? ");
	scanf("%i", &spearmenAmount);

	int currentSpearmanHealth = spearmenHealth;
	int currentTankHealth = tankHealth;

	while (tankAmount > 0 && spearmenAmount > 0)
	{
		currentTankHealth -= spearmenDamage;
		currentSpearmanHealth -= tankDamage;

		if (currentSpearmanHealth <= 0)
		{
			spearmenAmount--;
			currentSpearmanHealth = spearmenHealth;
		}

		if (currentTankHealth <= 0)
		{
			tankAmount--;
			currentTankHealth = tankHealth;
		}
	}

	if (tankAmount <= 0)
	{
		printf("Spearmen have successfully shown their superiority over modern technology!\n");
		printf("%i spearmen have survived", spearmenAmount);
	}

	if (spearmenAmount <= 0)
	{
		printf("Tanks have obliterated that outdated army!\n");
		printf("%i tanks have survived", tankAmount);
	}

	return 0;
}
