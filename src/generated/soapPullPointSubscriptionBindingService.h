/* soapPullPointSubscriptionBindingService.h
   Generated by gSOAP 2.8.78 for generated.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPullPointSubscriptionBindingService_H
#define soapPullPointSubscriptionBindingService_H
#include "soapH.h"

    class SOAP_CMAC PullPointSubscriptionBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this service and should be deleted by the destructor
        bool soap_own;
        /// Variables globally declared in generated.h, if any
        /// Construct a service with new managing context
        PullPointSubscriptionBindingService();
        /// Copy constructor
        PullPointSubscriptionBindingService(const PullPointSubscriptionBindingService&);
        /// Construct service given a shared managing context
        PullPointSubscriptionBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        PullPointSubscriptionBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PullPointSubscriptionBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the contructor
        virtual ~PullPointSubscriptionBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void PullPointSubscriptionBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PullPointSubscriptionBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        PullPointSubscriptionBindingService& operator=(const PullPointSubscriptionBindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
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
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
    #ifndef WITH_NOIO
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port, int backlog = 1);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port, int backlog = 1);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET upon error)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET upon error)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve the pending request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a pending request (returns SOAP_OK or error code)
        virtual int dispatch();
        virtual int dispatch(struct soap *soap);
        //
        // Service operations are listed below: you should define these
        // Note: compile with -DWITH_PURE_VIRTUAL to declare pure virtual methods
        //
        /// Web service operation 'PullMessages' implementation, should return SOAP_OK or error code
        virtual int PullMessages(_tev__PullMessages *tev__PullMessages, _tev__PullMessagesResponse &tev__PullMessagesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Seek' implementation, should return SOAP_OK or error code
        virtual int Seek(_tev__Seek *tev__Seek, _tev__SeekResponse &tev__SeekResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetSynchronizationPoint' implementation, should return SOAP_OK or error code
        virtual int SetSynchronizationPoint(_tev__SetSynchronizationPoint *tev__SetSynchronizationPoint, _tev__SetSynchronizationPointResponse &tev__SetSynchronizationPointResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Unsubscribe' implementation, should return SOAP_OK or error code
        virtual int Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetServiceCapabilities' implementation, should return SOAP_OK or error code
        virtual int GetServiceCapabilities(_tev__GetServiceCapabilities *tev__GetServiceCapabilities, _tev__GetServiceCapabilitiesResponse &tev__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreatePullPointSubscription' implementation, should return SOAP_OK or error code
        virtual int CreatePullPointSubscription(_tev__CreatePullPointSubscription *tev__CreatePullPointSubscription, _tev__CreatePullPointSubscriptionResponse &tev__CreatePullPointSubscriptionResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetEventProperties' implementation, should return SOAP_OK or error code
        virtual int GetEventProperties(_tev__GetEventProperties *tev__GetEventProperties, _tev__GetEventPropertiesResponse &tev__GetEventPropertiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'AddEventBroker' implementation, should return SOAP_OK or error code
        virtual int AddEventBroker(_tev__AddEventBroker *tev__AddEventBroker, _tev__AddEventBrokerResponse &tev__AddEventBrokerResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteEventBroker' implementation, should return SOAP_OK or error code
        virtual int DeleteEventBroker(_tev__DeleteEventBroker *tev__DeleteEventBroker, _tev__DeleteEventBrokerResponse &tev__DeleteEventBrokerResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetEventBrokers' implementation, should return SOAP_OK or error code
        virtual int GetEventBrokers(_tev__GetEventBrokers *tev__GetEventBrokers, _tev__GetEventBrokersResponse &tev__GetEventBrokersResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Renew' implementation, should return SOAP_OK or error code
        virtual int Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Unsubscribe' implementation, should return SOAP_OK or error code
        virtual int Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Subscribe' implementation, should return SOAP_OK or error code
        virtual int Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCurrentMessage' implementation, should return SOAP_OK or error code
        virtual int GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service one-way operation 'Notify' implementation, should return value of send_Notify_empty_response() to send HTTP Accept acknowledgment, or return an error code, or return SOAP_OK to immediately return without sending an HTTP response message
        virtual int Notify(_wsnt__Notify *wsnt__Notify) SOAP_PURE_VIRTUAL;
        /// Web service asynchronous send of HTTP Accept acknowledgment to be called in 'Notify', returns SOAP_OK or error code
        virtual int send_Notify_empty_response(int soap_http_status = 202) { return soap_send_empty_response(this->soap, soap_http_status); }
        //
        /// Web service operation 'GetMessages' implementation, should return SOAP_OK or error code
        virtual int GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DestroyPullPoint' implementation, should return SOAP_OK or error code
        virtual int DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service one-way operation 'Notify' implementation, should return value of send_Notify_empty_response() to send HTTP Accept acknowledgment, or return an error code, or return SOAP_OK to immediately return without sending an HTTP response message
        virtual int Notify_(_wsnt__Notify *wsnt__Notify) SOAP_PURE_VIRTUAL;
        /// Web service asynchronous send of HTTP Accept acknowledgment to be called in 'Notify', returns SOAP_OK or error code
        virtual int send_Notify__empty_response(int soap_http_status = 202) { return soap_send_empty_response(this->soap, soap_http_status); }
        //
        /// Web service operation 'CreatePullPoint' implementation, should return SOAP_OK or error code
        virtual int CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Renew' implementation, should return SOAP_OK or error code
        virtual int Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Unsubscribe' implementation, should return SOAP_OK or error code
        virtual int Unsubscribe__(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'PauseSubscription' implementation, should return SOAP_OK or error code
        virtual int PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'ResumeSubscription' implementation, should return SOAP_OK or error code
        virtual int ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) SOAP_PURE_VIRTUAL;
    };
#endif
