#import "CategoryPickerViewController.h"
@class Location;

@interface LocationDetailsViewController : UITableViewController <UITextViewDelegate, 
                                                CategoryPickerViewControllerDelegate,
                                                UIImagePickerControllerDelegate, 
                                                UINavigationControllerDelegate,
                                                UIActionSheetDelegate>

@property(nonatomic, strong) IBOutlet UITextView *descriptionTextView;
@property (nonatomic, strong) IBOutlet UILabel *categoryLabel;
@property (nonatomic, strong) IBOutlet UILabel *latitudeLabel;
@property (nonatomic, strong) IBOutlet UILabel *longitudeLabel;
@property (nonatomic, strong) IBOutlet UILabel *addressLabel;
@property (nonatomic, strong) IBOutlet UILabel *dateLabel;
@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) IBOutlet UILabel *photoLabel;

@property (nonatomic, strong) Location *locationToEdit;
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, strong) CLPlacemark *placemark;

@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

@end
