// File is generated by Source/WebCore/inspector/CodeGeneratorInspector.py

// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#ifndef InspectorFrontend_h
#define InspectorFrontend_h

#include "InspectorTypeBuilder.h"
#include "InspectorValues.h"
#include <wtf/PassRefPtr.h>
#include <wtf/text/WTFString.h>

namespace WebCore {

class InspectorFrontendChannel;

// Both InspectorObject and InspectorArray may or may not be declared at this point as defined by ENABLED_INSPECTOR.
// Double-check we have them at least as forward declaration.
class InspectorArray;
class InspectorObject;

typedef String ErrorString;

#if ENABLE(INSPECTOR)

class InspectorFrontend {
public:
    InspectorFrontend(InspectorFrontendChannel*);


    class Inspector {
    public:
        Inspector(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void evaluateForTestInFrontend(int testCallId, const String& script);
        void inspect(PassRefPtr<TypeBuilder::Runtime::RemoteObject> object, PassRefPtr<InspectorObject> hints);
        void detached(const String& reason);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Inspector* inspector() { return &m_inspector; }

    class Memory {
    public:
        Memory(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Memory* memory() { return &m_memory; }

    class Page {
    public:
        Page(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void domContentEventFired(double timestamp);
        void loadEventFired(double timestamp);
        void frameNavigated(PassRefPtr<TypeBuilder::Page::Frame> frame);
        void frameDetached(const TypeBuilder::Network::FrameId& frameId);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Page* page() { return &m_page; }

    class Runtime {
    public:
        Runtime(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void executionContextCreated(PassRefPtr<TypeBuilder::Runtime::ExecutionContextDescription> context);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Runtime* runtime() { return &m_runtime; }

    class Console {
    public:
        Console(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void messageAdded(PassRefPtr<TypeBuilder::Console::ConsoleMessage> message);
        void messageRepeatCountUpdated(int count);
        void messagesCleared();
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Console* console() { return &m_console; }

    class Network {
    public:
        Network(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void requestWillBeSent(const TypeBuilder::Network::RequestId& requestId, const TypeBuilder::Network::FrameId& frameId, const TypeBuilder::Network::LoaderId& loaderId, const String& documentURL, PassRefPtr<TypeBuilder::Network::Request> request, double timestamp, PassRefPtr<TypeBuilder::Network::Initiator> initiator, PassRefPtr<TypeBuilder::Network::Response> redirectResponse);
        void requestServedFromCache(const TypeBuilder::Network::RequestId& requestId);
        void responseReceived(const TypeBuilder::Network::RequestId& requestId, const TypeBuilder::Network::FrameId& frameId, const TypeBuilder::Network::LoaderId& loaderId, double timestamp, TypeBuilder::Page::ResourceType::Enum type, PassRefPtr<TypeBuilder::Network::Response> response);
        void dataReceived(const TypeBuilder::Network::RequestId& requestId, double timestamp, int dataLength, int encodedDataLength);
        void loadingFinished(const TypeBuilder::Network::RequestId& requestId, double timestamp);
        void loadingFailed(const TypeBuilder::Network::RequestId& requestId, double timestamp, const String& errorText, const bool* const canceled);
        void requestServedFromMemoryCache(const TypeBuilder::Network::RequestId& requestId, const TypeBuilder::Network::FrameId& frameId, const TypeBuilder::Network::LoaderId& loaderId, const String& documentURL, double timestamp, PassRefPtr<TypeBuilder::Network::Initiator> initiator, PassRefPtr<TypeBuilder::Network::CachedResource> resource);
        void webSocketWillSendHandshakeRequest(const TypeBuilder::Network::RequestId& requestId, double timestamp, PassRefPtr<TypeBuilder::Network::WebSocketRequest> request);
        void webSocketHandshakeResponseReceived(const TypeBuilder::Network::RequestId& requestId, double timestamp, PassRefPtr<TypeBuilder::Network::WebSocketResponse> response);
        void webSocketCreated(const TypeBuilder::Network::RequestId& requestId, const String& url);
        void webSocketClosed(const TypeBuilder::Network::RequestId& requestId, double timestamp);
        void webSocketFrameReceived(const TypeBuilder::Network::RequestId& requestId, double timestamp, PassRefPtr<TypeBuilder::Network::WebSocketFrame> response);
        void webSocketFrameError(const TypeBuilder::Network::RequestId& requestId, double timestamp, const String& errorMessage);
        void webSocketFrameSent(const TypeBuilder::Network::RequestId& requestId, double timestamp, PassRefPtr<TypeBuilder::Network::WebSocketFrame> response);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Network* network() { return &m_network; }

#if ENABLE(SQL_DATABASE)
    class Database {
    public:
        Database(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void addDatabase(PassRefPtr<TypeBuilder::Database::Database> database);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Database* database() { return &m_database; }

#endif // ENABLE(SQL_DATABASE)
#if ENABLE(INDEXED_DATABASE)
    class IndexedDB {
    public:
        IndexedDB(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    IndexedDB* indexeddb() { return &m_indexeddb; }

#endif // ENABLE(INDEXED_DATABASE)
    class DOMStorage {
    public:
        DOMStorage(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void addDOMStorage(PassRefPtr<TypeBuilder::DOMStorage::Entry> storage);
        void domStorageUpdated(const TypeBuilder::DOMStorage::StorageId& storageId);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    DOMStorage* domstorage() { return &m_domstorage; }

    class ApplicationCache {
    public:
        ApplicationCache(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void applicationCacheStatusUpdated(const TypeBuilder::Network::FrameId& frameId, const String& manifestURL, int status);
        void networkStateUpdated(bool isNowOnline);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    ApplicationCache* applicationcache() { return &m_applicationcache; }

#if ENABLE(FILE_SYSTEM)
    class FileSystem {
    public:
        FileSystem(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    FileSystem* filesystem() { return &m_filesystem; }

#endif // ENABLE(FILE_SYSTEM)
    class DOM {
    public:
        DOM(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void documentUpdated();
        void setChildNodes(int parentId, PassRefPtr<TypeBuilder::Array<TypeBuilder::DOM::Node> > nodes);
        void attributeModified(int nodeId, const String& name, const String& value);
        void attributeRemoved(int nodeId, const String& name);
        void inlineStyleInvalidated(PassRefPtr<TypeBuilder::Array<int> > nodeIds);
        void characterDataModified(int nodeId, const String& characterData);
        void childNodeCountUpdated(int nodeId, int childNodeCount);
        void childNodeInserted(int parentNodeId, int previousNodeId, PassRefPtr<TypeBuilder::DOM::Node> node);
        void childNodeRemoved(int parentNodeId, int nodeId);
        void shadowRootPushed(int hostId, PassRefPtr<TypeBuilder::DOM::Node> root);
        void shadowRootPopped(int hostId, int rootId);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    DOM* dom() { return &m_dom; }

    class CSS {
    public:
        CSS(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void mediaQueryResultChanged();
        void styleSheetChanged(const TypeBuilder::CSS::StyleSheetId& styleSheetId);
        void namedFlowCreated(PassRefPtr<TypeBuilder::CSS::NamedFlow> namedFlow);
        void namedFlowRemoved(int documentNodeId, const String& flowName);
        void regionLayoutUpdated(PassRefPtr<TypeBuilder::CSS::NamedFlow> namedFlow);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    CSS* css() { return &m_css; }

    class Timeline {
    public:
        Timeline(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void eventRecorded(PassRefPtr<TypeBuilder::Timeline::TimelineEvent> record);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Timeline* timeline() { return &m_timeline; }

#if ENABLE(JAVASCRIPT_DEBUGGER)
    class Debugger {
    public:
        Debugger(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void globalObjectCleared();
        void scriptParsed(const TypeBuilder::Debugger::ScriptId& scriptId, const String& url, int startLine, int startColumn, int endLine, int endColumn, const bool* const isContentScript, const String* const sourceMapURL, const bool* const hasSourceURL);
        void scriptFailedToParse(const String& url, const String& scriptSource, int startLine, int errorLine, const String& errorMessage);
        void breakpointResolved(const TypeBuilder::Debugger::BreakpointId& breakpointId, PassRefPtr<TypeBuilder::Debugger::Location> location);
        // Named after parameter 'reason' while generating command/event paused.
        struct Reason {
            enum Enum {
                XHR = 5,
                DOM = 69,
                EventListener = 70,
                Exception = 71,
                Assert = 38,
                CSPViolation = 72,
                Other = 25,
            };
        }; // struct Reason

        void paused(PassRefPtr<TypeBuilder::Array<TypeBuilder::Debugger::CallFrame> > callFrames, Reason::Enum reason, PassRefPtr<InspectorObject> data);
        void resumed();
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Debugger* debugger() { return &m_debugger; }

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(JAVASCRIPT_DEBUGGER)
    class DOMDebugger {
    public:
        DOMDebugger(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    DOMDebugger* domdebugger() { return &m_domdebugger; }

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(JAVASCRIPT_DEBUGGER)
    class Profiler {
    public:
        Profiler(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void addProfileHeader(PassRefPtr<TypeBuilder::Profiler::ProfileHeader> header);
        void addHeapSnapshotChunk(int uid, const String& chunk);
        void finishHeapSnapshot(int uid);
        void setRecordingProfile(bool isProfiling);
        void resetProfiles();
        void reportHeapSnapshotProgress(int done, int total);
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Profiler* profiler() { return &m_profiler; }

#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(WORKERS)
    class Worker {
    public:
        Worker(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void workerCreated(int workerId, const String& url, bool inspectorConnected);
        void workerTerminated(int workerId);
        void dispatchMessageFromWorker(int workerId, PassRefPtr<InspectorObject> message);
        void disconnectedFromWorker();
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Worker* worker() { return &m_worker; }

#endif // ENABLE(WORKERS)
    class Canvas {
    public:
        Canvas(InspectorFrontendChannel* inspectorFrontendChannel) : m_inspectorFrontendChannel(inspectorFrontendChannel) { }
        void setInspectorFrontendChannel(InspectorFrontendChannel* inspectorFrontendChannel) { m_inspectorFrontendChannel = inspectorFrontendChannel; }
        InspectorFrontendChannel* getInspectorFrontendChannel() { return m_inspectorFrontendChannel; }
    private:
        InspectorFrontendChannel* m_inspectorFrontendChannel;
    };

    Canvas* canvas() { return &m_canvas; }


private:
    Inspector m_inspector;
    Memory m_memory;
    Page m_page;
    Runtime m_runtime;
    Console m_console;
    Network m_network;
#if ENABLE(SQL_DATABASE)
    Database m_database;
#endif // ENABLE(SQL_DATABASE)
#if ENABLE(INDEXED_DATABASE)
    IndexedDB m_indexeddb;
#endif // ENABLE(INDEXED_DATABASE)
    DOMStorage m_domstorage;
    ApplicationCache m_applicationcache;
#if ENABLE(FILE_SYSTEM)
    FileSystem m_filesystem;
#endif // ENABLE(FILE_SYSTEM)
    DOM m_dom;
    CSS m_css;
    Timeline m_timeline;
#if ENABLE(JAVASCRIPT_DEBUGGER)
    Debugger m_debugger;
#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(JAVASCRIPT_DEBUGGER)
    DOMDebugger m_domdebugger;
#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(JAVASCRIPT_DEBUGGER)
    Profiler m_profiler;
#endif // ENABLE(JAVASCRIPT_DEBUGGER)
#if ENABLE(WORKERS)
    Worker m_worker;
#endif // ENABLE(WORKERS)
    Canvas m_canvas;
};

#endif // ENABLE(INSPECTOR)

} // namespace WebCore
#endif // !defined(InspectorFrontend_h)
