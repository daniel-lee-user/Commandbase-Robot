/*
 * NetworkTableInterfaces.h
 *
 *  Created on: Oct 6, 2018
 *      Author: Admin
 */

#ifndef SRC_UTILITIES_NETWORKTABLEINTERFACES_H_
#define SRC_UTILITIES_NETWORKTABLEINTERFACES_H_
#include <NetworkTables/NetworkTableInstance.h>

class NetworkTableInterfaces {
public:
	NetworkTableInterfaces();
	virtual ~NetworkTableInterfaces();
	static double getNumberCV();
	static bool getBoolCV();
	static int getIntCV();
};

#endif /* SRC_UTILITIES_NETWORKTABLEINTERFACES_H_ */
