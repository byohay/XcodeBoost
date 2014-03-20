//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTReplacementViewDelegate.h"
#import "IDEBotSupportingEditorHostedViewController.h"

@class DVTBindingToken, DVTLozengeTextField, DVTReplacementView, IDEBotSupportingEditor, IDESourceControlWorkingTree, NSArray, NSMutableArray, NSView;

@interface IDEBotExecutionSCMLogViewController : IDEViewController <DVTReplacementViewDelegate, IDEBotSupportingEditorHostedViewController>
{
    IDEBotSupportingEditor *_botSupportingEditor;
    NSView *_lozengeView;
    DVTLozengeTextField *_lozengeTextField;
    DVTReplacementView *_replacementView;
    NSArray *_selectedWorkingTrees;
    IDESourceControlWorkingTree *_selectedWorkingTree;
    DVTBindingToken *_logSourceTreeItemsBindingToken;
    NSMutableArray *_ourGeneratedSourceControlRepositories;
    NSArray *_sourceControlLogEvents;
    NSArray *_remoteRepositories;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingBotExecution;
@property(retain, nonatomic) NSArray *remoteRepositories; // @synthesize remoteRepositories=_remoteRepositories;
@property(retain, nonatomic) NSArray *sourceControlLogEvents; // @synthesize sourceControlLogEvents=_sourceControlLogEvents;
@property(retain, nonatomic) NSMutableArray *ourGeneratedSourceControlRepositories; // @synthesize ourGeneratedSourceControlRepositories=_ourGeneratedSourceControlRepositories;
@property(retain, nonatomic) DVTBindingToken *logSourceTreeItemsBindingToken; // @synthesize logSourceTreeItemsBindingToken=_logSourceTreeItemsBindingToken;
@property(retain) IDESourceControlWorkingTree *selectedWorkingTree; // @synthesize selectedWorkingTree=_selectedWorkingTree;
@property(retain) NSArray *selectedWorkingTrees; // @synthesize selectedWorkingTrees=_selectedWorkingTrees;
@property(retain, nonatomic) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) DVTLozengeTextField *lozengeTextField; // @synthesize lozengeTextField=_lozengeTextField;
@property(retain, nonatomic) NSView *lozengeView; // @synthesize lozengeView=_lozengeView;
@property(retain, nonatomic) IDEBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly) NSArray *currentSelectedItems;
@property(readonly) NSArray *currentSelectedDocumentLocations;
- (void)setLozengeMessageAndRedrawUI:(id)arg1;
- (void)setupSourceControlLogWithViewController:(id)arg1;
- (void)fetchAndSetupSourceControlLogWithViewController:(id)arg1;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)botExecution;

@end
