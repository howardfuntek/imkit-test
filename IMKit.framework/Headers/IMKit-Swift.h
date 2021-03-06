// Generated by Apple Swift version 4.0.3 (swift-4.0.3-RELEASE)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import RealmSwift;
@import ObjectiveC;
@import JSQMessagesViewController;
@import Foundation;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("IMKit")
@class RLMRealm;
@class RLMObjectSchema;
@class RLMSchema;

SWIFT_CLASS("_TtC5IMKit8IMClient")
@interface IMClient : RealmSwiftObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull nickname;
@property (nonatomic, readonly, copy) NSString * _Nonnull avatarURL;
@property (nonatomic, readonly, copy) NSString * _Nonnull rdescription;
+ (NSArray<NSString *> * _Nonnull)ignoredProperties SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit45IMDefaultMessageViewControllerAppearanceProxy")
@interface IMDefaultMessageViewControllerAppearanceProxy : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit41IMDefaultRoomTableViewCellAppearanceProxy")
@interface IMDefaultRoomTableViewCellAppearanceProxy : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit47IMDefaultRoomTableViewControllerAppearanceProxy")
@interface IMDefaultRoomTableViewControllerAppearanceProxy : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit55IMDefaultSystemMessageCollectionViewCellAppearanceProxy")
@interface IMDefaultSystemMessageCollectionViewCellAppearanceProxy : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit9IMMessage")
@interface IMMessage : RealmSwiftObject
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
@property (nonatomic, readonly, copy) NSString * _Nonnull messageType;
@property (nonatomic, readonly, copy) NSString * _Nonnull sticker;
@property (nonatomic, readonly, copy) NSString * _Nonnull originalUrl;
@property (nonatomic, readonly, copy) NSString * _Nonnull thumbnailUrl;
@property (nonatomic, readonly) NSInteger width;
@property (nonatomic, readonly) NSInteger height;
@property (nonatomic, readonly, strong) IMClient * _Nullable sender;
@property (nonatomic, readonly, strong) IMClient * _Nullable member;
@property (nonatomic, readonly) double messageTime;
@property (nonatomic, readonly, copy) NSString * _Nonnull roomId;
@property (nonatomic, readonly, copy) NSString * _Nonnull extra;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) BOOL isSent;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end

@protocol JSQMessageMediaData;

@interface IMMessage (SWIFT_EXTENSION(IMKit)) <JSQMessageData>
- (NSString * _Null_unspecified)senderId SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Null_unspecified)senderDisplayName SWIFT_WARN_UNUSED_RESULT;
- (NSDate * _Null_unspecified)date SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isMediaMessage SWIFT_WARN_UNUSED_RESULT;
- (NSUInteger)messageHash SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Null_unspecified)text SWIFT_WARN_UNUSED_RESULT;
- (id <JSQMessageMediaData> _Null_unspecified)media SWIFT_WARN_UNUSED_RESULT;
@end

@class UIButton;
@class UIScrollView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC5IMKit23IMMessageViewController")
@interface IMMessageViewController : JSQMessagesViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)didPressAccessoryButton:(UIButton * _Null_unspecified)sender;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface IMMessageViewController (SWIFT_EXTENSION(IMKit)) <UINavigationControllerDelegate>
@end



@class UIImagePickerController;

@interface IMMessageViewController (SWIFT_EXTENSION(IMKit)) <UIImagePickerControllerDelegate>
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
@end




@interface IMMessageViewController (SWIFT_EXTENSION(IMKit))
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidScrollToTop:(UIScrollView * _Nonnull)scrollView;
@end



@class UIGestureRecognizer;

@interface IMMessageViewController (SWIFT_EXTENSION(IMKit)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)_ shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)shouldRecognizeSimultaneouslyWithGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class JSQMessagesCollectionView;
@protocol JSQMessageBubbleImageDataSource;
@protocol JSQMessageAvatarImageDataSource;

@interface IMMessageViewController (SWIFT_EXTENSION(IMKit))
- (id <JSQMessageData> _Null_unspecified)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView messageDataForItemAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (id <JSQMessageBubbleImageDataSource> _Null_unspecified)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView messageBubbleImageDataForItemAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (id <JSQMessageAvatarImageDataSource> _Null_unspecified)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView avatarImageDataForItemAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView didTapMessageBubbleAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath;
@end



@class UICollectionView;
@class UICollectionViewCell;
@class NSAttributedString;
@class JSQMessagesCollectionViewFlowLayout;
@class UICollectionViewLayout;

@interface IMMessageViewController (SWIFT_EXTENSION(IMKit))
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSAttributedString * _Null_unspecified)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView attributedTextForCellTopLabelAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView layout:(JSQMessagesCollectionViewFlowLayout * _Null_unspecified)collectionViewLayout heightForCellTopLabelAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (NSAttributedString * _Null_unspecified)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView attributedTextForCellBottomLabelAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)collectionView:(JSQMessagesCollectionView * _Null_unspecified)collectionView layout:(JSQMessagesCollectionViewFlowLayout * _Null_unspecified)collectionViewLayout heightForCellBottomLabelAtIndexPath:(NSIndexPath * _Null_unspecified)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


@interface IMMessageViewController (SWIFT_EXTENSION(IMKit))
- (void)didPressSendButton:(UIButton * _Null_unspecified)button withMessageText:(NSString * _Null_unspecified)text senderId:(NSString * _Null_unspecified)senderId senderDisplayName:(NSString * _Null_unspecified)senderDisplayName date:(NSDate * _Null_unspecified)date;
@end


SWIFT_CLASS("_TtC5IMKit6IMRoom")
@interface IMRoom : RealmSwiftObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nonnull rdescription;
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull cover;
@property (nonatomic, readonly, strong) IMMessage * _Nullable lastMessage;
@property (nonatomic, readonly) NSInteger unread;
@property (nonatomic, readonly) BOOL muted;
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit20IMRoomMemberProperty")
@interface IMRoomMemberProperty : RealmSwiftObject
+ (NSString * _Nullable)primaryKey SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRealm:(RLMRealm * _Nonnull)realm schema:(RLMObjectSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithValue:(id _Nonnull)value schema:(RLMSchema * _Nonnull)schema OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5IMKit19IMRoomTableViewCell")
@interface IMRoomTableViewCell : UITableViewCell
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



@class UIStoryboardSegue;

SWIFT_CLASS("_TtC5IMKit25IMRoomTableViewController")
@interface IMRoomTableViewController : UITableViewController
- (void)viewDidLoad;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface IMRoomTableViewController (SWIFT_EXTENSION(IMKit))
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC5IMKit33IMSystemMessageCollectionViewCell")
@interface IMSystemMessageCollectionViewCell : UICollectionViewCell
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
