#pragma once
class Seed
{
	int gameId;
	float growthModifier;

public:
	Seed();
	~Seed();
	void plantSeed();
	int harvest();
};
//	Function used for planting seeds
void Seed::plantSeed()
{

}


//  Function for harvesting the seeds.
//	Function input player's farming level as well as the seed's ID.
int Seed::harvest()
{


	//Should return an array with the ID and quantity of item harvested.
	return 0;
}
Seed::Seed()
{
}
Seed::~Seed()
{
}