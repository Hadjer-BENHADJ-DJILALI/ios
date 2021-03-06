//
//  SystemConstants.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 20/05/14.
//

/*
 Copyright (C) 2017, ownCloud GmbH.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

#import "AppDelegate.h"

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_IOS11 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_PORTRAIT (([[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortrait) || [[UIApplication sharedApplication] statusBarOrientation] == UIInterfaceOrientationPortraitUpsideDown)
#define APP_DELEGATE ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#define IS_IPHONE_PLUS (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
