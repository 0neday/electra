//
//  fun_objc.h
//  async_wake_ios
//
//  Created by George on 16/12/17.
//  Copyright © 2017 Ian Beer. All rights reserved.
//

#ifndef fun_objc_h
#define fun_objc_h

const char* progname(const char*);
void extractTarBinary(void);
void update_springboard_plist(void);
void write_jailbreakd_plist(uint64_t kbase);

#endif /* fun_objc_h */
