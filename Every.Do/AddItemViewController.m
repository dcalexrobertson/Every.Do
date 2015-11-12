//
//  AddItemViewController.m
//  Every.Do
//
//  Created by Alex on 2015-11-03.
//  Copyright © 2015 Alex. All rights reserved.
//

#import "AddItemViewController.h"

@interface AddItemViewController () <UITextFieldDelegate>

@property (nonatomic) NSString *categoryText;

@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UITextField *descriptionField;

@end

@implementation AddItemViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.titleField.delegate = self;
    self.descriptionField.delegate = self;
    
    self.titleField.text = [[NSUserDefaults standardUserDefaults] valueForKey:@"Default Task Title"];
    
    self.categoryText = @"mind";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(BOOL)textFieldShouldReturn:(UITextField *)textField {
    
    [self addNewItem];
    [textField resignFirstResponder];
    
    return YES;
}

- (IBAction)categorySelectorDidChange:(UISegmentedControl *)sender {
    
    switch (sender.selectedSegmentIndex) {
            
        case 0:
            self.categoryText = @"mind";
            break;
            
        case 1:
            self.categoryText = @"body";
            break;
            
        case 2:
            self.categoryText = @"spirit";
            break;
            
        default:
            self.categoryText = @"mind";
    }
    
}

- (IBAction)cancelButtonPressed:(id)sender {
    
    [self dismissViewControllerAnimated:YES completion:nil];
    
}

- (void)addNewItem {
    
    [self.delegate addItemWithTitle:self.titleField.text andDescript:self.descriptionField.text andCategory:self.categoryText];
    
    [self dismissViewControllerAnimated:YES completion:nil];
    
}


@end
