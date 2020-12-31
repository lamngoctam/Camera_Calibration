#include "stdafx.h"

//################################
// Global variable                                  
//################################
short OctLevels(7);				//Octree level
short angel(0);					//LEGO rotate
Model UP(OctLevels);			//UP model
Model DOWN(OctLevels);			//DOWN model
Model Integ(OctLevels);			//model


int ImageNum(36);				//number of image
float scale(1.2f);			//Cube 1.0 : LEGO 1.2

double Width(120.0);          //newflog


double thresh(cos(60 / 180.0*M_PI));			//the threshold of the angle
double delThres(-1.5);						//the threshold of distance 

CMatrix* ART;								//ARTmatrixiA:inner@R:rotate@TF)
CMatrix* ARTRTinv;		//inverse matrix		
CVector3d* CameraPosUp;			//UP
CVector3d* CameraPosDown;		//DOWN

CVector3d centroid;			    //UP

CMatrix PCAMatrix(4);			//PCA‚DOWN to UP‚‚matrix
CMatrix ICPMatrix(4);			//ICP‚DOWN to UP‚matrix
CMatrix TMatrix(4);				//

string directory[2] = { "../../data/input/", "../../data/output/" };	//data directory
//string model("newzebra/");
//string model("newpanda/");
string model("newflog/");

string pose[3] = { "up/","down/","Zhang_Calib/" };					//Zhang method



//                                                                                  
//                   Zhang Camera Calibration                     
//                                                                                  
int ZhangCalibration(int argc, char* argv[]);

//                                                                                  
//                                Run OpenGL                              
//                                                                                  
void RunOpenGL(int argc, char *argv[]);		//Shape From Silhouette
