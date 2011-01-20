//
//  DBAuthenticatedTableViewController.h
//  DiscussionBoard
//
//  Created by Jeremy Ellison on 1/10/11.
//  Copyright 2011 Two Toasters. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Three20/Three20.h>
#import "DBLoginOrSignUpViewController.h"

@interface DBAuthenticatedTableViewController : TTTableViewController <DBLoginOrSignupViewControllerDelegate> {
	BOOL _requiresLoggedInUser;
	NSNumber* _requiredUserID;
}

@end
