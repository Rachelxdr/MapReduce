#ifndef MESSAGESTYPES_H
#define MESSAGESTYPES_H

enum MessageType {
	ACK,
	JOIN, 
	LEADERHEARTBEAT,
	LEADERPENDING,
	HEARTBEAT, 
	SWREQ, 
	SWRESP, 
	JOINRESPONSE, 
	JOINREJECT,
	ELECTION, 
	ELECTIONACK, 
	PUT,
	PUTACK,
	LEADERACK,
	DNS,
	DNSANS,
	DNSGET,
	DELETE,
	GETNULL,
	REREPLICATE,
	REREPLICATEGET};

enum PayloadType {
	REGULAR=97,
	FILEPAIR,
	FILENAME,
	FILEPOSITIONS};

enum LogType {
	JOINGROUP, 
	UPDATE, 
	FAIL, 
	LEAVE, 
	REMOVE, 
	GOSSIPTO, 
	GOSSIPFROM, 
	BANDWIDTH, 
	MEMBERS};

#endif //MESSAGESTYPES_H