/****************************************************************************
 * arch/arm/src/nrf91/hardware/nrf91_ipc.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_NRF91_HARDWARE_NRF91_IPC_H
#define __ARCH_ARM_SRC_NRF91_HARDWARE_NRF91_IPC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "nrf91_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define NRF91_IPC_CHANS 8

/* Register offsets *********************************************************/

#define NRF91_IPC_TASKS_SEND_OFFSET(n)      (0x000 + (0x4 * n))  /* Trigger events on IPC channel enabled in SEND_CNF[n] */
#define NRF91_IPC_SUBSCRIBE_SEND_OFFSET(n)  (0x080 + (0x4 * n))  /* Subscribe configuration for task SEND[n] */
#define NRF91_IPC_EVENTS_RECEIVE_OFFSET(n)  (0x100 + (0x4 * n))  /* Event received on one or more of the enabled IPC channels in RECEIVE_CNF[n] */
#define NRF91_IPC_PUBLISH_RECEIVE_OFFSET(n) (0x180 + (0x4 * n))  /* Publish configuration for event RECEIVE[n] */
#define NRF91_IPC_INTEN_OFFSET              (0x300)              /* Enable or disable interrupt */
#define NRF91_IPC_INTENSET_OFFSET           (0x304)              /* Enable interrupt */
#define NRF91_IPC_INTENCLR_OFFSET           (0x308)              /* Disable interrupt */
#define NRF91_IPC_INTPEND_OFFSET            (0x30C)              /* Pending interrupts */
#define NRF91_IPC_SEND_CNF_OFFSET(n)        (0x510 + (0x4 * n))  /* Send event configuration for TASKS_SEND[n] */
#define NRF91_IPC_RECEIVE_CNF_OFFSET(n)     (0x590 + (0x4 * n))  /* Receive event configuration for EVENTS_RECEIVE[n] */
#define NRF91_IPC_GPMEM_OFFSET(n)           (0x610 + (0x4 * n))  /* General purpose memory */

/* Register definitions *****************************************************/

#define NRF91_IPC_TASKS_SEND(n)             (NRF91_IPC_BASE + NRF91_IPC_TASKS_SEND_OFFSET(n))
#define NRF91_IPC_SUBSCRIBE_SEND(n)         (NRF91_IPC_BASE + NRF91_IPC_SUBSCRIBE_SEND_OFFSET(n))
#define NRF91_IPC_EVENTS_RECEIVE(n)         (NRF91_IPC_BASE + NRF91_IPC_EVENTS_RECEIVE_OFFSET(n))
#define NRF91_IPC_INTEN                     (NRF91_IPC_BASE + NRF91_IPC_INTEN_OFFSET)
#define NRF91_IPC_INTENSET                  (NRF91_IPC_BASE + NRF91_IPC_INTENSET_OFFSET)
#define NRF91_IPC_INTENCLR                  (NRF91_IPC_BASE + NRF91_IPC_INTENCLR_OFFSET)
#define NRF91_IPC_INTPEND                   (NRF91_IPC_BASE + NRF91_IPC_INTPEND_OFFSET)
#define NRF91_IPC_SEND_CNF(n)               (NRF91_IPC_BASE + NRF91_IPC_SEND_CNF_OFFSET(n))
#define NRF91_IPC_RECEIVE_CNF(n)            (NRF91_IPC_BASE + NRF91_IPC_RECEIVE_CNF_OFFSET(n))
#define NRF91_IPC_GPMEM(n)                  (NRF91_IPC_BASE + NRF91_IPC_GPMEM_OFFSET(n))

/* Register bit definitions *************************************************/

#define IPC_CHAN_ID(x)                       (1 << x)  /* Channel ID */

#endif /* __ARCH_ARM_SRC_NRF91_HARDWARE_NRF91_IPC_H */
