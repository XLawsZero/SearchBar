//
//  SearchBarView.h
//  HaiJiSW
//
//  Created by XLaws on 2017/12/5.
//  Copyright © 2017年 TangSoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DQTextFild.h"

typedef enum : NSUInteger {
    SearchBarNone, //默认没有左右按钮
    SearchBarAll, //左右都有按钮
    SearchBarLeft, //只有左边有按钮
    SearchBarRight, //只有右边有按钮
} SearchBarType;

@class SearchBarView;
@protocol SearchBarViewDelegate <NSObject>

-(void)searchBarTextFieldClick:(NSString *)searchString;

@optional
-(void)searchBarLeftButtonClick;
-(void)searchBarRightButtonClick;

@end

@interface SearchBarView : UIView

/**
 控件都有默认样式，都是都可以进行修改
 */
@property (nonatomic,strong) DQTextFild * searchTextFild; //搜索框
@property (nonatomic,strong) UIView * nameView; //底部视图
@property (nonatomic,strong) UILabel * nameLabel; //没有搜索框显示的文字（居中）
@property (nonatomic,strong) UIButton * leftButton; //左边按钮
@property (nonatomic,strong) UIButton * rightButton; //右边按钮

@property (nonatomic,assign) CGRect rectFrame;
@property (nonatomic,copy) NSString * titleString; // 没有搜索框显示的文字
@property (nonatomic,copy) NSString * placeholderString; // 占位符
@property (nonatomic,copy) NSString * searchString; //输入框搜索内容
@property (nonatomic,copy) NSString * leftString; //左边按钮文字
@property (nonatomic,copy) NSString * rightString; //右边按钮文字
@property (nonatomic,copy) NSString * leftImage; //左边按钮图片
@property (nonatomic,copy) NSString * rightImage; //右边按钮图片
@property (nonatomic,assign) SearchBarType searchBarType; //搜索框样式

@property (nonatomic,weak) id<SearchBarViewDelegate> delegate;

-(instancetype)initWithFrame:(CGRect)frame andTitleString:(NSString *)titleString andSearchBarType:(SearchBarType)searchBarType andLeftString:(NSString *)leftString andLeftImage:(NSString *)leftImage andRightString:(NSString *)rightString andRightImage:(NSString *)rightImage; //没有搜索框用这个

-(instancetype)initWithFrame:(CGRect)frame andPlaceholderString:(NSString *)placeholderString andSearchString:(NSString *)searchString andSearchBarType:(SearchBarType)searchBarType andLeftString:(NSString *)leftString andLeftImage:(NSString *)leftImage andRightString:(NSString *)rightString andRightImage:(NSString *)rightImage; //有搜索框用这个

@end
