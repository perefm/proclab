//
//  TGPlainControl.m
//  proclab
//
//  Created by xphere on 19/04/08.
//  Copyright 2008 Zona Neutra / Spöntz. All rights reserved.
//

#import "TGPlainControl.h"
#import "../TGGUIControl.h"


@implementation TGPlainControl

- (id)init
{
	if (self = [super init])
	{
	}
	return self;
}

- (void)dealloc
{
	[super dealloc];
}

- (void)awakeFromNib
{
}

- (BOOL) isvisibleCtrl
{
	return [TGPlainPanel isVisible];
}

- (void) showCtrl
{
	[TGPlainPanel makeKeyAndOrderFront:nil];
}

- (void) hideCtrl
{
	[TGPlainPanel orderOut:nil];
}

- (IBAction)redraw:(id)sender
{
	[self getColor1];								// Get Color data
	[(TGGUIControl*)_parent GetPlainData:t_data];	// Send the data to the parent
	[(TGGUIControl*)_parent renderTemp:nil];		// Redraw
}

- (NSColor*) getColor1
{
	NSColor *myColor = [TGPColor1 color];
	t_data.c.R = 255*[myColor redComponent];
	t_data.c.G = 255*[myColor greenComponent];
	t_data.c.B = 255*[myColor blueComponent];
	return myColor;
}



@end
