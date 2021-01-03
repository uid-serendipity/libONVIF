/* soapAnalyticsDeviceBindingService.h
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

#ifndef soapAnalyticsDeviceBindingService_H
#define soapAnalyticsDeviceBindingService_H
#include "soapH.h"

    class SOAP_CMAC AnalyticsDeviceBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this service and should be deleted by the destructor
        bool soap_own;
        /// Variables globally declared in generated.h, if any
        /// Construct a service with new managing context
        AnalyticsDeviceBindingService();
        /// Copy constructor
        AnalyticsDeviceBindingService(const AnalyticsDeviceBindingService&);
        /// Construct service given a shared managing context
        AnalyticsDeviceBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        AnalyticsDeviceBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        AnalyticsDeviceBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the contructor
        virtual ~AnalyticsDeviceBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void AnalyticsDeviceBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual AnalyticsDeviceBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        AnalyticsDeviceBindingService& operator=(const AnalyticsDeviceBindingService&);
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
        virtual int GetServiceCapabilities(_tad__GetServiceCapabilities *tad__GetServiceCapabilities, _tad__GetServiceCapabilitiesResponse &tad__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteAnalyticsEngineControl' implementation, should return SOAP_OK or error code
        virtual int DeleteAnalyticsEngineControl(_tad__DeleteAnalyticsEngineControl *tad__DeleteAnalyticsEngineControl, _tad__DeleteAnalyticsEngineControlResponse &tad__DeleteAnalyticsEngineControlResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateAnalyticsEngineControl' implementation, should return SOAP_OK or error code
        virtual int CreateAnalyticsEngineControl(_tad__CreateAnalyticsEngineControl *tad__CreateAnalyticsEngineControl, _tad__CreateAnalyticsEngineControlResponse &tad__CreateAnalyticsEngineControlResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetAnalyticsEngineControl' implementation, should return SOAP_OK or error code
        virtual int SetAnalyticsEngineControl(_tad__SetAnalyticsEngineControl *tad__SetAnalyticsEngineControl, _tad__SetAnalyticsEngineControlResponse &tad__SetAnalyticsEngineControlResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngineControl' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngineControl(_tad__GetAnalyticsEngineControl *tad__GetAnalyticsEngineControl, _tad__GetAnalyticsEngineControlResponse &tad__GetAnalyticsEngineControlResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngineControls' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngineControls(_tad__GetAnalyticsEngineControls *tad__GetAnalyticsEngineControls, _tad__GetAnalyticsEngineControlsResponse &tad__GetAnalyticsEngineControlsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngine' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngine(_tad__GetAnalyticsEngine *tad__GetAnalyticsEngine, _tad__GetAnalyticsEngineResponse &tad__GetAnalyticsEngineResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngines' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngines(_tad__GetAnalyticsEngines *tad__GetAnalyticsEngines, _tad__GetAnalyticsEnginesResponse &tad__GetAnalyticsEnginesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetVideoAnalyticsConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetVideoAnalyticsConfiguration(_tad__SetVideoAnalyticsConfiguration *tad__SetVideoAnalyticsConfiguration, _tad__SetVideoAnalyticsConfigurationResponse &tad__SetVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetAnalyticsEngineInput' implementation, should return SOAP_OK or error code
        virtual int SetAnalyticsEngineInput(_tad__SetAnalyticsEngineInput *tad__SetAnalyticsEngineInput, _tad__SetAnalyticsEngineInputResponse &tad__SetAnalyticsEngineInputResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngineInput' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngineInput(_tad__GetAnalyticsEngineInput *tad__GetAnalyticsEngineInput, _tad__GetAnalyticsEngineInputResponse &tad__GetAnalyticsEngineInputResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsEngineInputs' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsEngineInputs(_tad__GetAnalyticsEngineInputs *tad__GetAnalyticsEngineInputs, _tad__GetAnalyticsEngineInputsResponse &tad__GetAnalyticsEngineInputsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsDeviceStreamUri' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsDeviceStreamUri(_tad__GetAnalyticsDeviceStreamUri *tad__GetAnalyticsDeviceStreamUri, _tad__GetAnalyticsDeviceStreamUriResponse &tad__GetAnalyticsDeviceStreamUriResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetVideoAnalyticsConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetVideoAnalyticsConfiguration(_tad__GetVideoAnalyticsConfiguration *tad__GetVideoAnalyticsConfiguration, _tad__GetVideoAnalyticsConfigurationResponse &tad__GetVideoAnalyticsConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateAnalyticsEngineInputs' implementation, should return SOAP_OK or error code
        virtual int CreateAnalyticsEngineInputs(_tad__CreateAnalyticsEngineInputs *tad__CreateAnalyticsEngineInputs, _tad__CreateAnalyticsEngineInputsResponse &tad__CreateAnalyticsEngineInputsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteAnalyticsEngineInputs' implementation, should return SOAP_OK or error code
        virtual int DeleteAnalyticsEngineInputs(_tad__DeleteAnalyticsEngineInputs *tad__DeleteAnalyticsEngineInputs, _tad__DeleteAnalyticsEngineInputsResponse &tad__DeleteAnalyticsEngineInputsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAnalyticsState' implementation, should return SOAP_OK or error code
        virtual int GetAnalyticsState(_tad__GetAnalyticsState *tad__GetAnalyticsState, _tad__GetAnalyticsStateResponse &tad__GetAnalyticsStateResponse) SOAP_PURE_VIRTUAL;
    };
#endif
