/*
 * yolo_lib.h
 *
 *  Created on: Mar 26, 2018
 *      Author: lucas
 */

#ifndef INC_YOLO_LIB_H_
#define INC_YOLO_LIB_H_

#ifdef __cplusplus
extern "C" {
#endif

void run_yolo_call(float thresh,  char *cfg_p,  char *weights_p,  char *file_p);
void foo_test_print(void);

#ifdef __cplusplus
}
#endif

#endif /* INC_YOLO_LIB_H_ */
