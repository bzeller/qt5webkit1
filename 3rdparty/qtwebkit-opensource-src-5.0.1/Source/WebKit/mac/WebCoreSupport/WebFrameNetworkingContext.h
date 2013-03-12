/*
    Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies)
    Copyright (C) 2012 Apple Inc. All rights reserved.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#import <WebCore/FrameNetworkingContext.h>

class WebFrameNetworkingContext : public WebCore::FrameNetworkingContext {
public:
    static PassRefPtr<WebFrameNetworkingContext> create(WebCore::Frame* frame)
    {
        return adoptRef(new WebFrameNetworkingContext(frame));
    }

    static void setPrivateBrowsingStorageSessionIdentifierBase(const String&);
    static void switchToNewTestingSession();
    static void ensurePrivateBrowsingSession();
    static void destroyPrivateBrowsingSession();
    static CFURLStorageSessionRef defaultStorageSession();

    static void setCookieAcceptPolicyForTestingContext(NSHTTPCookieAcceptPolicy);

private:
    WebFrameNetworkingContext(WebCore::Frame* frame)
        : WebCore::FrameNetworkingContext(frame)
    {
    }

    virtual bool needsSiteSpecificQuirks() const OVERRIDE;
    virtual bool localFileContentSniffingEnabled() const OVERRIDE;
    virtual CFURLStorageSessionRef storageSession() const OVERRIDE;
    virtual WebCore::SchedulePairHashSet* scheduledRunLoopPairs() const OVERRIDE;
    virtual WebCore::ResourceError blockedError(const WebCore::ResourceRequest&) const OVERRIDE;
};
