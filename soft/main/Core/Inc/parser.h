/*
 * parser.h
 *
 *  Created on: 15 sie 2022
 *      Author: grzes
 */

#ifndef INC_PARSER_H_
#define INC_PARSER_H_

#define ENDLINE ';'

void Parser_TakeLine(RingBuffer_t *Buf, uint8_t *Destination);
void Parser_Parse(uint8_t *DataToParse);

#endif /* INC_PARSER_H_ */
