#ifndef _MESH_UTILITY_H_
#define _MESH_UTILITY_H_

#include "dsl_grid3d/occupancy_grid.h"

#include <shape_msgs/Mesh.h>
#include <string>

namespace dsl_grid3d
{

class MeshUtility
{
public:
  
static bool meshToOccupancyGrid(const std::string& filename, double cells_per_meter, OccupancyGrid** ogrid);
static bool meshToOccupancyGrid(const shape_msgs::MeshConstPtr& mesh_msg, double cells_per_meter, OccupancyGrid** ogrid);


private:

static void samplePointInTriangle(double x1, double y1, double z1, double x2, double y2, double z2, double x3, double y3, double z3, double* xout, double* yout, double* zout);
};

} //namespace

#endif
