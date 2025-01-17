/*
 *  Copyright 2017 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <Cocoa/Cocoa.h>
#import "WebRTC/RTCVideoRenderer.h"

NS_AVAILABLE_MAC(10.11)
__attribute__((objc_runtime_name("WK_RTCMTLNSVideoView")))
@interface RTCMTLNSVideoView : NSView<RTCVideoRenderer>
+ (BOOL)isMetalAvailable;
@end
