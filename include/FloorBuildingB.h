#ifndef FLOOR_BUILDING_B_H_
#define FLOOR_BUILDING_B_H_

#include "Textures.h"
#include "Vector.h"
#include "Mesh.h"
//#include "LotList.h"
//#include "Lot.h"


class FloorBuildingB
{
public:
	FloorBuildingB(const Vector&, const Vector&, float*);

	Mesh* toMesh();

	
private:
	Vector ul;
	Vector ur;
	Vector dr;
	Vector dl;
	//std::vector<Vector> 
};

#endif
