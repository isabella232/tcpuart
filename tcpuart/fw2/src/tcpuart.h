/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_PROJECTS_TCPUART_FW2_SRC_TCPUART_H_
#define CS_PROJECTS_TCPUART_FW2_SRC_TCPUART_H_

#include "mongoose/mongoose.h"

#include "mgos_app.h"
#include "mgos_uart.h"

/*
 * A hook to pre-process data in the UART buffer.
 * An app based on TCPUART can perform local processing of some data this way.
 * Default implementation does nothing and just forwards everything.
 */
typedef void (*tu_uart_processor_fn)(int uart_no, struct mg_connection *nc);
extern tu_uart_processor_fn tu_uart_processor;

enum mgos_app_init_result tu_processor_init(void);

#endif /* CS_PROJECTS_TCPUART_FW2_SRC_TCPUART_H_ */
