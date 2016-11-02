/*
 * OBD_CAN_Lib.h
 *
 *  Created on: 01.11.2016
 *      Author: Alan
 */

#ifndef OBD_CAN_LIB_H_
#define OBD_CAN_LIB_H_

#include "mcp_can_dfs.h"
#define MAX_BYTES_IN_MESSAGE 8

class CAN_MCP
{
	private:
	INT8U mcp_mode;
	INT8U mcp_chip_select;						//notwendig??

	INT32U can_id;
	INT8U can_ext_flg;							//extended flag
	INT8U can_rtr;								//Remote Transmission Request
	INT8U can_dlc;								//data length code
	INT8U can_data[MAX_BYTES_IN_MESSAGE];		//CAN Nachricht
	INT8U can_filhit;							//notwendig??


	public:
	CAN_MCP();
	void resetMPC();

};




#endif /* OBD_CAN_LIB_H_ */
