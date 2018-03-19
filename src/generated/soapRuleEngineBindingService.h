/* soapRuleEngineBindingService.h
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

#ifndef soapRuleEngineBindingService_H
#define soapRuleEngineBindingService_H
#include "soapH.h"

    class SOAP_CMAC RuleEngineBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        bool soap_own;  ///< flag indicating that this context is owned by this service when context is shared
        /// Variables globally declared in rcx.h, if any
        /// Construct a service with new managing context
        RuleEngineBindingService();
        /// Copy constructor
        RuleEngineBindingService(const RuleEngineBindingService&);
        /// Construct service given a shared managing context
        RuleEngineBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        RuleEngineBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        RuleEngineBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes non-shared managing context only (use destroy() to delete deserialized data)
        virtual ~RuleEngineBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void RuleEngineBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual RuleEngineBindingService *copy() SOAP_PURE_VIRTUAL;
        /// Copy assignment
        RuleEngineBindingService& operator=(const RuleEngineBindingService&);
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
        virtual int run(int port);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve this request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a request (returns SOAP_OK or error code)
        virtual int dispatch();
        virtual int dispatch(struct soap *soap);
        ///
        /// Service operations are listed below (you should define these)
        /// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
        ///
        /// Web service operation 'GetSupportedRules' (returns SOAP_OK or error code)
        virtual int GetSupportedRules(_tan__GetSupportedRules *tan__GetSupportedRules, _tan__GetSupportedRulesResponse &tan__GetSupportedRulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateRules' (returns SOAP_OK or error code)
        virtual int CreateRules(_tan__CreateRules *tan__CreateRules, _tan__CreateRulesResponse &tan__CreateRulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteRules' (returns SOAP_OK or error code)
        virtual int DeleteRules(_tan__DeleteRules *tan__DeleteRules, _tan__DeleteRulesResponse &tan__DeleteRulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetRules' (returns SOAP_OK or error code)
        virtual int GetRules(_tan__GetRules *tan__GetRules, _tan__GetRulesResponse &tan__GetRulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetRuleOptions' (returns SOAP_OK or error code)
        virtual int GetRuleOptions(_tan__GetRuleOptions *tan__GetRuleOptions, _tan__GetRuleOptionsResponse &tan__GetRuleOptionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ModifyRules' (returns SOAP_OK or error code)
        virtual int ModifyRules(_tan__ModifyRules *tan__ModifyRules, _tan__ModifyRulesResponse &tan__ModifyRulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetServiceCapabilities' (returns SOAP_OK or error code)
        virtual int GetServiceCapabilities(_tan__GetServiceCapabilities *tan__GetServiceCapabilities, _tan__GetServiceCapabilitiesResponse &tan__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetSupportedAnalyticsModules' (returns SOAP_OK or error code)
        virtual int GetSupportedAnalyticsModules(_tan__GetSupportedAnalyticsModules *tan__GetSupportedAnalyticsModules, _tan__GetSupportedAnalyticsModulesResponse &tan__GetSupportedAnalyticsModulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'CreateAnalyticsModules' (returns SOAP_OK or error code)
        virtual int CreateAnalyticsModules(_tan__CreateAnalyticsModules *tan__CreateAnalyticsModules, _tan__CreateAnalyticsModulesResponse &tan__CreateAnalyticsModulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'DeleteAnalyticsModules' (returns SOAP_OK or error code)
        virtual int DeleteAnalyticsModules(_tan__DeleteAnalyticsModules *tan__DeleteAnalyticsModules, _tan__DeleteAnalyticsModulesResponse &tan__DeleteAnalyticsModulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAnalyticsModules' (returns SOAP_OK or error code)
        virtual int GetAnalyticsModules(_tan__GetAnalyticsModules *tan__GetAnalyticsModules, _tan__GetAnalyticsModulesResponse &tan__GetAnalyticsModulesResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'GetAnalyticsModuleOptions' (returns SOAP_OK or error code)
        virtual int GetAnalyticsModuleOptions(_tan__GetAnalyticsModuleOptions *tan__GetAnalyticsModuleOptions, _tan__GetAnalyticsModuleOptionsResponse &tan__GetAnalyticsModuleOptionsResponse) SOAP_PURE_VIRTUAL;
        /// Web service operation 'ModifyAnalyticsModules' (returns SOAP_OK or error code)
        virtual int ModifyAnalyticsModules(_tan__ModifyAnalyticsModules *tan__ModifyAnalyticsModules, _tan__ModifyAnalyticsModulesResponse &tan__ModifyAnalyticsModulesResponse) SOAP_PURE_VIRTUAL;
    };
#endif
