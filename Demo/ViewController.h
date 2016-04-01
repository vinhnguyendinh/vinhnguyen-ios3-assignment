//
//  ViewController.h
//  Demo
//
//  Created by Vinh Nguyen Dinh on 4/1/16.
//  Copyright © 2016 VinhNguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;
@property (weak, nonatomic) IBOutlet UITableView *ViewTableCell;

@end

