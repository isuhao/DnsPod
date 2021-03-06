//
//  DnsPodFile.h
//  dnspod
//
//  Created by midoks on 14/10/30.
//  Copyright (c) 2014年 midoks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
#import <sqlite3.h>
#import "GTMDefines.h"
#import "GTMBase64.h"

@interface DnsPodFile : NSObject
{
    sqlite3 *db;//数据库对象
}

#pragma mark 添加用户关键信息(一个)
-(Boolean)AddUser:(NSString *)username password:(NSString *)password isMain:(NSString *)isMain;

#pragma mark 添加多个用户信息(多个)
-(void)AddMUser:(NSString *)username password:(NSString *)password;

#pragma mark 获取主账号信息
-(id)GetMainUser;

#pragma mark 获取所有账户信息
-(id)GetUserList;

#pragma mark 获取用户数据
-(id)GetUser:(NSString *)UserName;

#pragma mark 切换为主账户
-(void)SwitchMainUser:(NSString *)mainUser;

#pragma mark 删除用户(指定用户)
-(void)DeleteUser:(NSString *)UserName;

#pragma mark 删除用户(通过ID)
-(void)DeleteUserById:(NSString *)userId;

#pragma mark 清空用户(所有用户)
-(void)ClearUser;

#pragma mark 返回用户总数
-(NSInteger)UserCount;


#pragma mark 测试
- (void)test;
@end
