/** @file   ASNode.h
 *  @brief  Node used to construct a tree representation of the contents of a device. A node may
 *          be used directly as a data source for an NSOutlineView
 *
 *
 *  Copyright (c) 2008-2013, tSoniq. http://tsoniq.com
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 *  	*	Redistributions of source code must retain the above copyright notice, this list of
 *  	    conditions and the following disclaimer.
 *  	*	Redistributions in binary form must reproduce the above copyright notice, this list
 *  	    of conditions and the following disclaimer in the documentation and/or other materials
 *  	    provided with the distribution.
 *  	*	Neither the name of tSoniq nor the names of its contributors may be used to endorse
 *  	    or promote products derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#import <Cocoa/Cocoa.h>
#import "AQTreeNode.h"
#import "ASLoadSaveProtocol.h"

#define kASNodeSortKeyName   (0)
#define kASNodeSortKeyKind   (1)
#define kASNodeSortKeySize   (2)


@interface ASNode : AQTreeNode <ASSaveProtocol>
{
    id delegate;
    NSImage* smallIcon;
    NSImage* largeIcon;
    NSString* displayName;
    NSString* displayKind;
    NSString* displaySize;
    int fileSpace;
    int fileSize;
    int sortKey;
}

- (id)delegate;
- (void)setDelegate:(id)newDelegate;

- (void)refresh;
- (void)reload;

- (NSImage*)smallIcon;
- (NSImage*)largeIcon;
- (NSString*)displayName;
- (NSString*)displayKind;
- (NSString*)displaySize;
- (NSString*)displayFileSpace;
- (int)fileSpace;
- (int)fileSize;

- (void)setIcon:(NSImage*)value;
- (void)setDisplayName:(NSString*)value;
- (void)setDisplayKind:(NSString*)value;
- (void)setDisplaySize:(NSString*)value;
- (void)setFileSpace:(int)value;
- (void)setFileSize:(int)size;

- (void)setSortKey:(int)key;
- (void)sortChildren;

- (ASNode*)parent;

@end
