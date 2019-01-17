#include<stdio.h>
#include"epanet2.h"
void main()
{
	ENopen("Jiaxing.inp", "1.rtp", "");  //open inp file
	ENinput("IAOD with std=5mp.obs"); //input  data of sensor and prior consumer demand
	ENfanyan();                        //calibration
	ENsaveinpfile("IAOD with std=5mp.inp");       //save the calibrated result as a new inp file
	ENclosefanyan();                   //free memory 
	ENclose();                         //close the epanet
}