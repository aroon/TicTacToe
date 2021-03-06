//
//  Grid.h
//  TicTacToe
//
//  Created by Caryn Gerber-Duffy on 7/7/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TouchCells.h"


@interface Grid : UIView {
	
			
}

//-(void)cellContains:(UIView *) xoroView;



/*
@property	(readwrite, assign)		TouchCells	*tl;
@property	(readwrite, assign)		TouchCells	*tm;
@property	(readwrite, assign)		TouchCells	*tr;
@property	(readwrite, assign)		TouchCells	*ml;
@property	(readwrite, assign)		TouchCells	*mm;
@property	(readwrite, assign)		TouchCells	*mr;
@property	(readwrite, assign)		TouchCells	*bl;
@property	(readwrite, assign)		TouchCells	*bm;
@property	(readwrite, assign)		TouchCells	*br;
*/




@property (readwrite, assign)	UIView		*tapView;

@property (readwrite, assign)	TouchCells		*b00;
@property (readwrite, assign)	TouchCells		*b01;
@property (readwrite, assign)	TouchCells		*b02;
@property (readwrite, assign)	TouchCells		*b10;
@property (readwrite, assign)	TouchCells		*b11;
@property (readwrite, assign)	TouchCells		*b12;
@property (readwrite, assign)	TouchCells		*b20;
@property (readwrite, assign)	TouchCells		*b21;
@property (readwrite, assign)	TouchCells		*b22;

 
@end