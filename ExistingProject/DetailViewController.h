//
//  DetailViewController.h
//  ExistingProject
//
//  Created by Felipe on 8/10/13.
//  Copyright (c) 2013 Felipe Laso Marsetti. All rights reserved.
//

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
