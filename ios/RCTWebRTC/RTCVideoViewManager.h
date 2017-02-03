//
//  RTCVideoViewManager.h
//  TestReact
//
//  Created by one on 2015/9/25.
//  Copyright © 2015年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTViewManager.h>
#import <WebRTC/RTCEAGLVideoView.h>

@interface RTCVideoViewManager : RCTViewManager

@end


/**
 * Implements an equivalent of {@code HTMLVideoElement} i.e. Web's video
 * element.
 */
@interface RTCVideoView : UIView <RTCVideoRenderer, RTCEAGLVideoViewDelegate>

/**
 * In the fashion of
 * https://www.w3.org/TR/html5/embedded-content-0.html#dom-video-videowidth
 * and https://www.w3.org/TR/html5/rendering.html#video-object-fit, resembles
 * the CSS style {@code object-fit}.
 */
@property (nonatomic) RTCVideoViewObjectFit objectFit;

/**
 * The {@link RTCEAGLVideoView} which implements the actual
 * {@link RTCVideoRenderer} of this instance and which this instance fits within
 * itself so that the rendered video preserves the aspect ratio of
 * {@link #_videoSize}.
 */
@property (nonatomic, readonly) RTCEAGLVideoView *subview;

/**
 * The {@link RTCVideoTrack}, if any, which this instance renders.
 */
@property (nonatomic, strong) RTCVideoTrack *videoTrack;


@property (nonatomic, strong) NSNumber* index;

@end
