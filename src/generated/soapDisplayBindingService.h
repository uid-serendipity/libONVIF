/* soapDisplayBindingService.h
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

#ifndef soapDisplayBindingService_H
#define soapDisplayBindingService_H
#include "soapH.h"

    class SOAP_CMAC DisplayBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this service and should be deleted by the destructor
        bool soap_own;
        /// Variables globally declared in generated.h, if any
        /// Construct a service with new managing context
        DisplayBindingService();
        /// Copy constructor
        DisplayBindingService(const DisplayBindingService&);
        /// Construct service given a shared managing context
        DisplayBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        DisplayBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        DisplayBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the contructor
        virtual ~DisplayBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void DisplayBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual DisplayBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        DisplayBindingService& operator=(const DisplayBindingService&);
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
        /// Web service operation 'GetServiceCapabilities' implementation, should return SOAP_OK or error code
        virtual int GetServiceCapabilities(_tls__GetServiceCapabilities *tls__GetServiceCapabilities, _tls__GetServiceCapabilitiesResponse &tls__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetLayout' implementation, should return SOAP_OK or error code
        virtual int GetLayout(_tls__GetLayout *tls__GetLayout, _tls__GetLayoutResponse &tls__GetLayoutResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetLayout' implementation, should return SOAP_OK or error code
        virtual int SetLayout(_tls__SetLayout *tls__SetLayout, _tls__SetLayoutResponse &tls__SetLayoutResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDisplayOptions' implementation, should return SOAP_OK or error code
        virtual int GetDisplayOptions(_tls__GetDisplayOptions *tls__GetDisplayOptions, _tls__GetDisplayOptionsResponse &tls__GetDisplayOptionsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPaneConfigurations' implementation, should return SOAP_OK or error code
        virtual int GetPaneConfigurations(_tls__GetPaneConfigurations *tls__GetPaneConfigurations, _tls__GetPaneConfigurationsResponse &tls__GetPaneConfigurationsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPaneConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetPaneConfiguration(_tls__GetPaneConfiguration *tls__GetPaneConfiguration, _tls__GetPaneConfigurationResponse &tls__GetPaneConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetPaneConfigurations' implementation, should return SOAP_OK or error code
        virtual int SetPaneConfigurations(_tls__SetPaneConfigurations *tls__SetPaneConfigurations, _tls__SetPaneConfigurationsResponse &tls__SetPaneConfigurationsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetPaneConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetPaneConfiguration(_tls__SetPaneConfiguration *tls__SetPaneConfiguration, _tls__SetPaneConfigurationResponse &tls__SetPaneConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreatePaneConfiguration' implementation, should return SOAP_OK or error code
        virtual int CreatePaneConfiguration(_tls__CreatePaneConfiguration *tls__CreatePaneConfiguration, _tls__CreatePaneConfigurationResponse &tls__CreatePaneConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeletePaneConfiguration' implementation, should return SOAP_OK or error code
        virtual int DeletePaneConfiguration(_tls__DeletePaneConfiguration *tls__DeletePaneConfiguration, _tls__DeletePaneConfigurationResponse &tls__DeletePaneConfigurationResponse) SOAP_PURE_VIRTUAL;
    };
#endif
