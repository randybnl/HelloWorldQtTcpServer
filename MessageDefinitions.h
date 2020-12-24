#ifndef MESSAGEDEFINITIONS_H
#define MESSAGEDEFINITIONS_H

#include <stdint.h>

#define SYNC_BYTE_CONSTANT 0x7E

enum MessageStructure : uint8_t {
	SYNC_BYTE_FIELD = 0,
	TYPE_FIELD,
	PAYLOAD_SIZE_BYTE_1_FIELD,
	PAYLOAD_SIZE_BYTE_2_FIELD,
	CRC_BYTE_1_FIELD,
	CRC_BYTE_2_FIELD,
	FIELD_COUNT
};

enum MessageType : uint8_t {
	NONE = 0,
	RAW_MESSAGE_TYPE,
	DISCOVER_MESSAGE_TYPE,
	RFID_READER_MESSAGE_TYPE,
	MESSAGE_TYPE_COUNT
};

#endif // MESSAGEDEFINITIONS_H
