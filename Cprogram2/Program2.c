/*
 * Program2.c
 *
 *  Created on: Feb 11, 2023
 *      Author: Zachary Craig
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void scoreCombo(int score)
{
	printf("Possible combinations of scoring plays:\n---------------------------------------\n");
	for(int TD_2 = 0; TD_2 <= score/8; TD_2++)
	{
		for(int TD_1 = 0; TD_1 <= score/7; TD_1++)
		{
			for(int TD = 0; TD <= score/6; TD++)
			{
				for(int FG = 0; FG <= score/3; FG++)
				{
					for(int S = 0; S <= score/2; S++)
					{
						if((TD_2*8)+(TD_1*7)+(TD*6)+(FG*3)+(S*2) == score)
						{
							printf("%d TD + 2pt, ", TD_2);
							printf("%d TD + FG, ", TD_1);
							printf("%d TD, ", TD);
							printf("%d 3pt, ", FG);
							printf("%d Safety\n", S);
						}
					}
				}
			}
		}
	}
	printf("\n");
	return;
}

int main()
{
	int score = 0;
	do
	{
		printf("Enter the NFL score (or enter 0 or 1 to STOP): ");
		fflush(stdout);
		scanf("%d", &score);
		if(score > 1)
		{
			scoreCombo(score);
		}
	}while(score > 1);
	return 0;
}
