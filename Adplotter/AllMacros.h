//
//  AllMacros.h
//  Adplotter
//
//  Created by Csaba Toth on 28/04/15.
//  Copyright (c) 2015 Csaba Toth. All rights reserved.
//

#ifndef PayKickstart_AllMacros_h
#define PayKickstart_AllMacros_h

// MainScreen Height&Width
#define Main_Screen_Height      [[UIScreen mainScreen] bounds].size.height
#define Main_Screen_Width       [[UIScreen mainScreen] bounds].size.width

// View (x,y) (width,height)
#define X(v)                    (v).frame.origin.x
#define Y(v)                    (v).frame.origin.y
#define WIDTH(v)                (v).bounds.size.width
#define HEIGHT(v)               (v).bounds.size.height

#define MinX(v)                 CGRectGetMinX((v).frame)
#define MinY(v)                 CGRectGetMinY((v).frame)

#define MidX(v)                 CGRectGetMidX((v).frame)
#define MidY(v)                 CGRectGetMidY((v).frame)

#define MaxX(v)                 CGRectGetMaxX((v).frame)
#define MaxY(v)                 CGRectGetMaxY((v).frame)
#define RECT_CHANGE_x(v,x)          CGRectMake(x, Y(v), WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_y(v,y)          CGRectMake(X(v), y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_point(v,x,y)    CGRectMake(x, y, WIDTH(v), HEIGHT(v))
#define RECT_CHANGE_width(v,w)      CGRectMake(X(v), Y(v), w, HEIGHT(v))
#define RECT_CHANGE_height(v,h)     CGRectMake(X(v), Y(v), WIDTH(v), h)
#define RECT_CHANGE_size(v,w,h)     CGRectMake(X(v), Y(v), w, h)

#define SLIDE_MENU_STYLE 0

//Color
#define Color(r,g,b,a)  [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

#define API_URL @"http://api.adplotter.com/ProcessAPIRequest.ashx"
//#define Ad_Posting_URL @"https://www.adplotter.com/store/customers/mylistings.asp?via=ios&ListingStatus=Live&orderby=entrydate&dir2=DESC"
#define Ad_Posting_URL @"https://www.adplotter.com/store/customers/proclogin.asp?"
#define Website_URL @"https://www.adplotter.com"


#endif
