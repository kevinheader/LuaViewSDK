//
//
//  lv5.1.4
//
//  Created by dongxicheng on 11/27/14.
//  Copyright (c) 2014 dongxicheng. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "LuaView.h"
#pragma mark -LuaView 类加载脚本调用接口
@interface LView : LuaView

@property (nonatomic,assign) BOOL changeGrammar;// 是否需要语法转换（原先luaview语法和lua标准语法的区别是‘.’和':'互换了），默认是非标准语法，需要转换

@property (nonatomic,assign) BOOL checkDebugerServer; // 是否检查调试器

// 设置证书地址
- (void) setPublicKeyFilePath:(NSString*) filePath;

-(LVBlock*) getLuaBlock:(NSString*) name;

-(NSString*) callLua:(NSString*) functionName tag:(id) tag environment:(UIView*)environment args:(NSArray*) args;
-(NSString*) callLua:(NSString*) functionName environment:(UIView*) environment args:(NSArray*) args;
-(NSString*) callLua:(NSString*) functionName args:(NSArray*) args;

@end

