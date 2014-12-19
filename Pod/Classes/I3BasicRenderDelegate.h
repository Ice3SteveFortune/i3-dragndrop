//
//  I3BasicRenderDelegate.h
//  Pods
//
//  Created by Stephen Fortune on 21/09/2014.
//
//

#import <Foundation/Foundation.h>
#import "I3DragRenderDelegate.h"
#import "I3GestureCoordinator.h"
#import "I3CloneView.h"


/**
 
 This class is the framework-provided drag render delegate. This renders a basic 'ghost'
 dragging view during a drag. Note the loose coupling between the coordinator and its rendering
 delegate ! Users of this framework will be able to provide their own rendering delegates if
 they wish, that implement the I3DragRenderDelegate protocol. For convenience, users of the
 framework can extend this class to apply 'extra' styling to the rendering.
 
 @todo Provide various examples of approaches to using custom render delegates
 @note This class (being its delegate) depends entirely on the coordinator to call its methods
 at the correct time and whilst being in the correct state. It does not provide any safeguarding
 against users calling its rendering methods in an undefined order or with parameters that don't
 represent the state of a drag correctly. In short, do _not_ call this class' methods unless you
 are the I3GestureCoordinator.
 
 */
@interface I3BasicRenderDelegate : NSObject <I3DragRenderDelegate>


/**
 
 The opacity that the dragging item in the collection will be set to on drag start. This is _not_ 
 the opacity of the cloned dragging, its the opacity of cell grounded in the collection whilst
 that cloned view is being dragged about in the superview.
 
 */
@property (nonatomic, assign) CGFloat draggingItemOpacity;


/**
 
 The opacity of the cloned draggingView whilst dragging occurs.
 
 */
@property (nonatomic, assign) CGFloat draggingViewOpacity;


/**
 
 The cloned view that is current being rendered according to the drag position.
 
 */
@property (nonatomic, strong) I3CloneView *draggingView;


@end
