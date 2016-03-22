//
//  HCTestDBModel.h
//  HCKitProject
//
//  Created by 花晨 on 15/12/11.
//  Copyright © 2015年 花晨. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCDBModel.h"


@interface HCTestDBModel : HCDBModel

@property(nonatomic,assign) NSInteger HC_PRIMARY_KEY_AUTOINCREMENT(aindex);
@property(nonatomic,strong) NSString* astring;
@property(nonatomic,assign) BOOL abool;
@property(nonatomic,assign) char achar;
@property(nonatomic,assign) int aint;
@property(nonatomic,assign) short ashort;
@property(nonatomic,assign) long along;
@property(nonatomic,assign) float afloat;
@property(nonatomic,assign) double adouble;
@property(nonatomic,strong) NSData *adata;
@property(nonatomic,strong) HCDBTableField *HC_IGNORE(field);
-(void)creatTestData;

@end
