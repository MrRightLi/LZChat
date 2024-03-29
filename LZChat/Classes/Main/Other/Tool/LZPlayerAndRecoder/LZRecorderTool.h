//
//  LZRecorderTool.h
//  录音机
//
//  Created by Mr.Right on 16/3/28.
//  Copyright © 2016年 lizheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LZRecorderTool : NSObject
/** 录音时长短 */
@property(nonatomic,assign) int currentTime;
/** 录音文件地址 */
@property(nonatomic,strong) NSString *fileName;
/** 音频波动峰值 */
@property(nonatomic,assign)  CGFloat audioPower; //每 0.1f 更新一次

/**
 *  开始录音
 */
- (void)startRecorde;

/**
 *  暂停录音
 */
- (void)pauseRecorde;
/**
 *  停止录音
 */
- (void)stopRecorde;


@end
