/* soapSearchBindingProxy.h
   Generated by gSOAP 2.8.55 for rcx.h

gSOAP XML Web services tools
Copyright (C) 2000-2017, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapSearchBindingProxy_H
#define soapSearchBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC SearchBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        bool soap_own; ///< flag indicating that this context is owned by this proxy when context is shared
        /// Endpoint URL of service 'SearchBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in rcx.h, if any
        /// Construct a proxy with new managing context
        SearchBindingProxy();
        /// Copy constructor
        SearchBindingProxy(const SearchBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        SearchBindingProxy(struct soap*);
        /// Constructor taking an endpoint URL
        SearchBindingProxy(const char *endpoint);
        /// Constructor taking input and output mode flags for the new managing context
        SearchBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        SearchBindingProxy(const char *endpoint, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        SearchBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~SearchBindingProxy();
        /// Initializer used by constructors
        virtual void SearchBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual SearchBindingProxy *copy();
        /// Copy assignment
        SearchBindingProxy& operator=(const SearchBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault string (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail as string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_tse__GetServiceCapabilities *tse__GetServiceCapabilities, _tse__GetServiceCapabilitiesResponse &tse__GetServiceCapabilitiesResponse)
        { return this->GetServiceCapabilities(NULL, NULL, tse__GetServiceCapabilities, tse__GetServiceCapabilitiesResponse); }
        virtual int GetServiceCapabilities(const char *soap_endpoint, const char *soap_action, _tse__GetServiceCapabilities *tse__GetServiceCapabilities, _tse__GetServiceCapabilitiesResponse &tse__GetServiceCapabilitiesResponse);
        /// Web service operation 'GetRecordingSummary' (returns SOAP_OK or error code)
        virtual int GetRecordingSummary(_tse__GetRecordingSummary *tse__GetRecordingSummary, _tse__GetRecordingSummaryResponse &tse__GetRecordingSummaryResponse)
        { return this->GetRecordingSummary(NULL, NULL, tse__GetRecordingSummary, tse__GetRecordingSummaryResponse); }
        virtual int GetRecordingSummary(const char *soap_endpoint, const char *soap_action, _tse__GetRecordingSummary *tse__GetRecordingSummary, _tse__GetRecordingSummaryResponse &tse__GetRecordingSummaryResponse);
        /// Web service operation 'GetRecordingInformation' (returns SOAP_OK or error code)
        virtual int GetRecordingInformation(_tse__GetRecordingInformation *tse__GetRecordingInformation, _tse__GetRecordingInformationResponse &tse__GetRecordingInformationResponse)
        { return this->GetRecordingInformation(NULL, NULL, tse__GetRecordingInformation, tse__GetRecordingInformationResponse); }
        virtual int GetRecordingInformation(const char *soap_endpoint, const char *soap_action, _tse__GetRecordingInformation *tse__GetRecordingInformation, _tse__GetRecordingInformationResponse &tse__GetRecordingInformationResponse);
        /// Web service operation 'GetMediaAttributes' (returns SOAP_OK or error code)
        virtual int GetMediaAttributes(_tse__GetMediaAttributes *tse__GetMediaAttributes, _tse__GetMediaAttributesResponse &tse__GetMediaAttributesResponse)
        { return this->GetMediaAttributes(NULL, NULL, tse__GetMediaAttributes, tse__GetMediaAttributesResponse); }
        virtual int GetMediaAttributes(const char *soap_endpoint, const char *soap_action, _tse__GetMediaAttributes *tse__GetMediaAttributes, _tse__GetMediaAttributesResponse &tse__GetMediaAttributesResponse);
        /// Web service operation 'FindRecordings' (returns SOAP_OK or error code)
        virtual int FindRecordings(_tse__FindRecordings *tse__FindRecordings, _tse__FindRecordingsResponse &tse__FindRecordingsResponse)
        { return this->FindRecordings(NULL, NULL, tse__FindRecordings, tse__FindRecordingsResponse); }
        virtual int FindRecordings(const char *soap_endpoint, const char *soap_action, _tse__FindRecordings *tse__FindRecordings, _tse__FindRecordingsResponse &tse__FindRecordingsResponse);
        /// Web service operation 'GetRecordingSearchResults' (returns SOAP_OK or error code)
        virtual int GetRecordingSearchResults(_tse__GetRecordingSearchResults *tse__GetRecordingSearchResults, _tse__GetRecordingSearchResultsResponse &tse__GetRecordingSearchResultsResponse)
        { return this->GetRecordingSearchResults(NULL, NULL, tse__GetRecordingSearchResults, tse__GetRecordingSearchResultsResponse); }
        virtual int GetRecordingSearchResults(const char *soap_endpoint, const char *soap_action, _tse__GetRecordingSearchResults *tse__GetRecordingSearchResults, _tse__GetRecordingSearchResultsResponse &tse__GetRecordingSearchResultsResponse);
        /// Web service operation 'FindEvents' (returns SOAP_OK or error code)
        virtual int FindEvents(_tse__FindEvents *tse__FindEvents, _tse__FindEventsResponse &tse__FindEventsResponse)
        { return this->FindEvents(NULL, NULL, tse__FindEvents, tse__FindEventsResponse); }
        virtual int FindEvents(const char *soap_endpoint, const char *soap_action, _tse__FindEvents *tse__FindEvents, _tse__FindEventsResponse &tse__FindEventsResponse);
        /// Web service operation 'GetEventSearchResults' (returns SOAP_OK or error code)
        virtual int GetEventSearchResults(_tse__GetEventSearchResults *tse__GetEventSearchResults, _tse__GetEventSearchResultsResponse &tse__GetEventSearchResultsResponse)
        { return this->GetEventSearchResults(NULL, NULL, tse__GetEventSearchResults, tse__GetEventSearchResultsResponse); }
        virtual int GetEventSearchResults(const char *soap_endpoint, const char *soap_action, _tse__GetEventSearchResults *tse__GetEventSearchResults, _tse__GetEventSearchResultsResponse &tse__GetEventSearchResultsResponse);
        /// Web service operation 'FindPTZPosition' (returns SOAP_OK or error code)
        virtual int FindPTZPosition(_tse__FindPTZPosition *tse__FindPTZPosition, _tse__FindPTZPositionResponse &tse__FindPTZPositionResponse)
        { return this->FindPTZPosition(NULL, NULL, tse__FindPTZPosition, tse__FindPTZPositionResponse); }
        virtual int FindPTZPosition(const char *soap_endpoint, const char *soap_action, _tse__FindPTZPosition *tse__FindPTZPosition, _tse__FindPTZPositionResponse &tse__FindPTZPositionResponse);
        /// Web service operation 'GetPTZPositionSearchResults' (returns SOAP_OK or error code)
        virtual int GetPTZPositionSearchResults(_tse__GetPTZPositionSearchResults *tse__GetPTZPositionSearchResults, _tse__GetPTZPositionSearchResultsResponse &tse__GetPTZPositionSearchResultsResponse)
        { return this->GetPTZPositionSearchResults(NULL, NULL, tse__GetPTZPositionSearchResults, tse__GetPTZPositionSearchResultsResponse); }
        virtual int GetPTZPositionSearchResults(const char *soap_endpoint, const char *soap_action, _tse__GetPTZPositionSearchResults *tse__GetPTZPositionSearchResults, _tse__GetPTZPositionSearchResultsResponse &tse__GetPTZPositionSearchResultsResponse);
        /// Web service operation 'GetSearchState' (returns SOAP_OK or error code)
        virtual int GetSearchState(_tse__GetSearchState *tse__GetSearchState, _tse__GetSearchStateResponse &tse__GetSearchStateResponse)
        { return this->GetSearchState(NULL, NULL, tse__GetSearchState, tse__GetSearchStateResponse); }
        virtual int GetSearchState(const char *soap_endpoint, const char *soap_action, _tse__GetSearchState *tse__GetSearchState, _tse__GetSearchStateResponse &tse__GetSearchStateResponse);
        /// Web service operation 'EndSearch' (returns SOAP_OK or error code)
        virtual int EndSearch(_tse__EndSearch *tse__EndSearch, _tse__EndSearchResponse &tse__EndSearchResponse)
        { return this->EndSearch(NULL, NULL, tse__EndSearch, tse__EndSearchResponse); }
        virtual int EndSearch(const char *soap_endpoint, const char *soap_action, _tse__EndSearch *tse__EndSearch, _tse__EndSearchResponse &tse__EndSearchResponse);
        /// Web service operation 'FindMetadata' (returns SOAP_OK or error code)
        virtual int FindMetadata(_tse__FindMetadata *tse__FindMetadata, _tse__FindMetadataResponse &tse__FindMetadataResponse)
        { return this->FindMetadata(NULL, NULL, tse__FindMetadata, tse__FindMetadataResponse); }
        virtual int FindMetadata(const char *soap_endpoint, const char *soap_action, _tse__FindMetadata *tse__FindMetadata, _tse__FindMetadataResponse &tse__FindMetadataResponse);
        /// Web service operation 'GetMetadataSearchResults' (returns SOAP_OK or error code)
        virtual int GetMetadataSearchResults(_tse__GetMetadataSearchResults *tse__GetMetadataSearchResults, _tse__GetMetadataSearchResultsResponse &tse__GetMetadataSearchResultsResponse)
        { return this->GetMetadataSearchResults(NULL, NULL, tse__GetMetadataSearchResults, tse__GetMetadataSearchResultsResponse); }
        virtual int GetMetadataSearchResults(const char *soap_endpoint, const char *soap_action, _tse__GetMetadataSearchResults *tse__GetMetadataSearchResults, _tse__GetMetadataSearchResultsResponse &tse__GetMetadataSearchResultsResponse);
    };
#endif
