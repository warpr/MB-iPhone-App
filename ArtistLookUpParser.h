//
//  ArtistLookUpParser.h
//  Musicbrainz
//
//  Created by Jens Lukas on 6/4/10.
//  Copyright 2010 Jens Lukas <contact@jenslukas.com>
//
//  This program is made available under the terms of the MIT License.
//
// Abstract: Concrete implementation of the XML parser for artist

#import <Foundation/Foundation.h>
#import "AbstractXMLParser.h"
#import "Artist.h"
#import "ReleaseGroup.h"

@interface ArtistLookUpParser : AbstractXMLParser {
	Artist *currentArtist;
	ReleaseGroup *currentReleaseGroup;
	bool parsingArtist;
	bool parsingTag;
}

@property (nonatomic, retain) Artist *currentArtist;
@property (nonatomic, retain) ReleaseGroup *currentReleaseGroup;
@end
