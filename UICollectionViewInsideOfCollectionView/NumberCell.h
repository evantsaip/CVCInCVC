//
//  NumberCell.h
//  UICollectionViewInsideOfCollectionView
//
//  Created by Evan on 2015/10/6.
//  Copyright (c) 2015年 Evan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NumberCell : UICollectionViewCell
{
    IBOutlet UILabel *txtNumber;
}
- (void)LoadCell:(NSString*)Number;

@end
