/* soapDeviceBindingService.h
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

#ifndef soapDeviceBindingService_H
#define soapDeviceBindingService_H
#include "soapH.h"

    class SOAP_CMAC DeviceBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this service and should be deleted by the destructor
        bool soap_own;
        /// Variables globally declared in generated.h, if any
        /// Construct a service with new managing context
        DeviceBindingService();
        /// Copy constructor
        DeviceBindingService(const DeviceBindingService&);
        /// Construct service given a shared managing context
        DeviceBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        DeviceBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        DeviceBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the contructor
        virtual ~DeviceBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void DeviceBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual DeviceBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        DeviceBindingService& operator=(const DeviceBindingService&);
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
        /// Web service operation 'GetServices' implementation, should return SOAP_OK or error code
        virtual int GetServices(_tds__GetServices *tds__GetServices, _tds__GetServicesResponse &tds__GetServicesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetServiceCapabilities' implementation, should return SOAP_OK or error code
        virtual int GetServiceCapabilities(_tds__GetServiceCapabilities *tds__GetServiceCapabilities, _tds__GetServiceCapabilitiesResponse &tds__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDeviceInformation' implementation, should return SOAP_OK or error code
        virtual int GetDeviceInformation(_tds__GetDeviceInformation *tds__GetDeviceInformation, _tds__GetDeviceInformationResponse &tds__GetDeviceInformationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetSystemDateAndTime' implementation, should return SOAP_OK or error code
        virtual int SetSystemDateAndTime(_tds__SetSystemDateAndTime *tds__SetSystemDateAndTime, _tds__SetSystemDateAndTimeResponse &tds__SetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetSystemDateAndTime' implementation, should return SOAP_OK or error code
        virtual int GetSystemDateAndTime(_tds__GetSystemDateAndTime *tds__GetSystemDateAndTime, _tds__GetSystemDateAndTimeResponse &tds__GetSystemDateAndTimeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetSystemFactoryDefault' implementation, should return SOAP_OK or error code
        virtual int SetSystemFactoryDefault(_tds__SetSystemFactoryDefault *tds__SetSystemFactoryDefault, _tds__SetSystemFactoryDefaultResponse &tds__SetSystemFactoryDefaultResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'UpgradeSystemFirmware' implementation, should return SOAP_OK or error code
        virtual int UpgradeSystemFirmware(_tds__UpgradeSystemFirmware *tds__UpgradeSystemFirmware, _tds__UpgradeSystemFirmwareResponse &tds__UpgradeSystemFirmwareResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SystemReboot' implementation, should return SOAP_OK or error code
        virtual int SystemReboot(_tds__SystemReboot *tds__SystemReboot, _tds__SystemRebootResponse &tds__SystemRebootResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RestoreSystem' implementation, should return SOAP_OK or error code
        virtual int RestoreSystem(_tds__RestoreSystem *tds__RestoreSystem, _tds__RestoreSystemResponse &tds__RestoreSystemResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetSystemBackup' implementation, should return SOAP_OK or error code
        virtual int GetSystemBackup(_tds__GetSystemBackup *tds__GetSystemBackup, _tds__GetSystemBackupResponse &tds__GetSystemBackupResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetSystemLog' implementation, should return SOAP_OK or error code
        virtual int GetSystemLog(_tds__GetSystemLog *tds__GetSystemLog, _tds__GetSystemLogResponse &tds__GetSystemLogResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetSystemSupportInformation' implementation, should return SOAP_OK or error code
        virtual int GetSystemSupportInformation(_tds__GetSystemSupportInformation *tds__GetSystemSupportInformation, _tds__GetSystemSupportInformationResponse &tds__GetSystemSupportInformationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetScopes' implementation, should return SOAP_OK or error code
        virtual int GetScopes(_tds__GetScopes *tds__GetScopes, _tds__GetScopesResponse &tds__GetScopesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetScopes' implementation, should return SOAP_OK or error code
        virtual int SetScopes(_tds__SetScopes *tds__SetScopes, _tds__SetScopesResponse &tds__SetScopesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'AddScopes' implementation, should return SOAP_OK or error code
        virtual int AddScopes(_tds__AddScopes *tds__AddScopes, _tds__AddScopesResponse &tds__AddScopesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RemoveScopes' implementation, should return SOAP_OK or error code
        virtual int RemoveScopes(_tds__RemoveScopes *tds__RemoveScopes, _tds__RemoveScopesResponse &tds__RemoveScopesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDiscoveryMode' implementation, should return SOAP_OK or error code
        virtual int GetDiscoveryMode(_tds__GetDiscoveryMode *tds__GetDiscoveryMode, _tds__GetDiscoveryModeResponse &tds__GetDiscoveryModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetDiscoveryMode' implementation, should return SOAP_OK or error code
        virtual int SetDiscoveryMode(_tds__SetDiscoveryMode *tds__SetDiscoveryMode, _tds__SetDiscoveryModeResponse &tds__SetDiscoveryModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetRemoteDiscoveryMode' implementation, should return SOAP_OK or error code
        virtual int GetRemoteDiscoveryMode(_tds__GetRemoteDiscoveryMode *tds__GetRemoteDiscoveryMode, _tds__GetRemoteDiscoveryModeResponse &tds__GetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetRemoteDiscoveryMode' implementation, should return SOAP_OK or error code
        virtual int SetRemoteDiscoveryMode(_tds__SetRemoteDiscoveryMode *tds__SetRemoteDiscoveryMode, _tds__SetRemoteDiscoveryModeResponse &tds__SetRemoteDiscoveryModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDPAddresses' implementation, should return SOAP_OK or error code
        virtual int GetDPAddresses(_tds__GetDPAddresses *tds__GetDPAddresses, _tds__GetDPAddressesResponse &tds__GetDPAddressesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetEndpointReference' implementation, should return SOAP_OK or error code
        virtual int GetEndpointReference(_tds__GetEndpointReference *tds__GetEndpointReference, _tds__GetEndpointReferenceResponse &tds__GetEndpointReferenceResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetRemoteUser' implementation, should return SOAP_OK or error code
        virtual int GetRemoteUser(_tds__GetRemoteUser *tds__GetRemoteUser, _tds__GetRemoteUserResponse &tds__GetRemoteUserResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetRemoteUser' implementation, should return SOAP_OK or error code
        virtual int SetRemoteUser(_tds__SetRemoteUser *tds__SetRemoteUser, _tds__SetRemoteUserResponse &tds__SetRemoteUserResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetUsers' implementation, should return SOAP_OK or error code
        virtual int GetUsers(_tds__GetUsers *tds__GetUsers, _tds__GetUsersResponse &tds__GetUsersResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateUsers' implementation, should return SOAP_OK or error code
        virtual int CreateUsers(_tds__CreateUsers *tds__CreateUsers, _tds__CreateUsersResponse &tds__CreateUsersResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteUsers' implementation, should return SOAP_OK or error code
        virtual int DeleteUsers(_tds__DeleteUsers *tds__DeleteUsers, _tds__DeleteUsersResponse &tds__DeleteUsersResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetUser' implementation, should return SOAP_OK or error code
        virtual int SetUser(_tds__SetUser *tds__SetUser, _tds__SetUserResponse &tds__SetUserResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetWsdlUrl' implementation, should return SOAP_OK or error code
        virtual int GetWsdlUrl(_tds__GetWsdlUrl *tds__GetWsdlUrl, _tds__GetWsdlUrlResponse &tds__GetWsdlUrlResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCapabilities' implementation, should return SOAP_OK or error code
        virtual int GetCapabilities(_tds__GetCapabilities *tds__GetCapabilities, _tds__GetCapabilitiesResponse &tds__GetCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetDPAddresses' implementation, should return SOAP_OK or error code
        virtual int SetDPAddresses(_tds__SetDPAddresses *tds__SetDPAddresses, _tds__SetDPAddressesResponse &tds__SetDPAddressesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetHostname' implementation, should return SOAP_OK or error code
        virtual int GetHostname(_tds__GetHostname *tds__GetHostname, _tds__GetHostnameResponse &tds__GetHostnameResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetHostname' implementation, should return SOAP_OK or error code
        virtual int SetHostname(_tds__SetHostname *tds__SetHostname, _tds__SetHostnameResponse &tds__SetHostnameResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetHostnameFromDHCP' implementation, should return SOAP_OK or error code
        virtual int SetHostnameFromDHCP(_tds__SetHostnameFromDHCP *tds__SetHostnameFromDHCP, _tds__SetHostnameFromDHCPResponse &tds__SetHostnameFromDHCPResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDNS' implementation, should return SOAP_OK or error code
        virtual int GetDNS(_tds__GetDNS *tds__GetDNS, _tds__GetDNSResponse &tds__GetDNSResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetDNS' implementation, should return SOAP_OK or error code
        virtual int SetDNS(_tds__SetDNS *tds__SetDNS, _tds__SetDNSResponse &tds__SetDNSResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNTP' implementation, should return SOAP_OK or error code
        virtual int GetNTP(_tds__GetNTP *tds__GetNTP, _tds__GetNTPResponse &tds__GetNTPResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetNTP' implementation, should return SOAP_OK or error code
        virtual int SetNTP(_tds__SetNTP *tds__SetNTP, _tds__SetNTPResponse &tds__SetNTPResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDynamicDNS' implementation, should return SOAP_OK or error code
        virtual int GetDynamicDNS(_tds__GetDynamicDNS *tds__GetDynamicDNS, _tds__GetDynamicDNSResponse &tds__GetDynamicDNSResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetDynamicDNS' implementation, should return SOAP_OK or error code
        virtual int SetDynamicDNS(_tds__SetDynamicDNS *tds__SetDynamicDNS, _tds__SetDynamicDNSResponse &tds__SetDynamicDNSResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNetworkInterfaces' implementation, should return SOAP_OK or error code
        virtual int GetNetworkInterfaces(_tds__GetNetworkInterfaces *tds__GetNetworkInterfaces, _tds__GetNetworkInterfacesResponse &tds__GetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetNetworkInterfaces' implementation, should return SOAP_OK or error code
        virtual int SetNetworkInterfaces(_tds__SetNetworkInterfaces *tds__SetNetworkInterfaces, _tds__SetNetworkInterfacesResponse &tds__SetNetworkInterfacesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNetworkProtocols' implementation, should return SOAP_OK or error code
        virtual int GetNetworkProtocols(_tds__GetNetworkProtocols *tds__GetNetworkProtocols, _tds__GetNetworkProtocolsResponse &tds__GetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetNetworkProtocols' implementation, should return SOAP_OK or error code
        virtual int SetNetworkProtocols(_tds__SetNetworkProtocols *tds__SetNetworkProtocols, _tds__SetNetworkProtocolsResponse &tds__SetNetworkProtocolsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNetworkDefaultGateway' implementation, should return SOAP_OK or error code
        virtual int GetNetworkDefaultGateway(_tds__GetNetworkDefaultGateway *tds__GetNetworkDefaultGateway, _tds__GetNetworkDefaultGatewayResponse &tds__GetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetNetworkDefaultGateway' implementation, should return SOAP_OK or error code
        virtual int SetNetworkDefaultGateway(_tds__SetNetworkDefaultGateway *tds__SetNetworkDefaultGateway, _tds__SetNetworkDefaultGatewayResponse &tds__SetNetworkDefaultGatewayResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetZeroConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetZeroConfiguration(_tds__GetZeroConfiguration *tds__GetZeroConfiguration, _tds__GetZeroConfigurationResponse &tds__GetZeroConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetZeroConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetZeroConfiguration(_tds__SetZeroConfiguration *tds__SetZeroConfiguration, _tds__SetZeroConfigurationResponse &tds__SetZeroConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetIPAddressFilter' implementation, should return SOAP_OK or error code
        virtual int GetIPAddressFilter(_tds__GetIPAddressFilter *tds__GetIPAddressFilter, _tds__GetIPAddressFilterResponse &tds__GetIPAddressFilterResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetIPAddressFilter' implementation, should return SOAP_OK or error code
        virtual int SetIPAddressFilter(_tds__SetIPAddressFilter *tds__SetIPAddressFilter, _tds__SetIPAddressFilterResponse &tds__SetIPAddressFilterResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'AddIPAddressFilter' implementation, should return SOAP_OK or error code
        virtual int AddIPAddressFilter(_tds__AddIPAddressFilter *tds__AddIPAddressFilter, _tds__AddIPAddressFilterResponse &tds__AddIPAddressFilterResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RemoveIPAddressFilter' implementation, should return SOAP_OK or error code
        virtual int RemoveIPAddressFilter(_tds__RemoveIPAddressFilter *tds__RemoveIPAddressFilter, _tds__RemoveIPAddressFilterResponse &tds__RemoveIPAddressFilterResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetAccessPolicy' implementation, should return SOAP_OK or error code
        virtual int GetAccessPolicy(_tds__GetAccessPolicy *tds__GetAccessPolicy, _tds__GetAccessPolicyResponse &tds__GetAccessPolicyResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetAccessPolicy' implementation, should return SOAP_OK or error code
        virtual int SetAccessPolicy(_tds__SetAccessPolicy *tds__SetAccessPolicy, _tds__SetAccessPolicyResponse &tds__SetAccessPolicyResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateCertificate' implementation, should return SOAP_OK or error code
        virtual int CreateCertificate(_tds__CreateCertificate *tds__CreateCertificate, _tds__CreateCertificateResponse &tds__CreateCertificateResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCertificates' implementation, should return SOAP_OK or error code
        virtual int GetCertificates(_tds__GetCertificates *tds__GetCertificates, _tds__GetCertificatesResponse &tds__GetCertificatesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCertificatesStatus' implementation, should return SOAP_OK or error code
        virtual int GetCertificatesStatus(_tds__GetCertificatesStatus *tds__GetCertificatesStatus, _tds__GetCertificatesStatusResponse &tds__GetCertificatesStatusResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetCertificatesStatus' implementation, should return SOAP_OK or error code
        virtual int SetCertificatesStatus(_tds__SetCertificatesStatus *tds__SetCertificatesStatus, _tds__SetCertificatesStatusResponse &tds__SetCertificatesStatusResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteCertificates' implementation, should return SOAP_OK or error code
        virtual int DeleteCertificates(_tds__DeleteCertificates *tds__DeleteCertificates, _tds__DeleteCertificatesResponse &tds__DeleteCertificatesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPkcs10Request' implementation, should return SOAP_OK or error code
        virtual int GetPkcs10Request(_tds__GetPkcs10Request *tds__GetPkcs10Request, _tds__GetPkcs10RequestResponse &tds__GetPkcs10RequestResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'LoadCertificates' implementation, should return SOAP_OK or error code
        virtual int LoadCertificates(_tds__LoadCertificates *tds__LoadCertificates, _tds__LoadCertificatesResponse &tds__LoadCertificatesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetClientCertificateMode' implementation, should return SOAP_OK or error code
        virtual int GetClientCertificateMode(_tds__GetClientCertificateMode *tds__GetClientCertificateMode, _tds__GetClientCertificateModeResponse &tds__GetClientCertificateModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetClientCertificateMode' implementation, should return SOAP_OK or error code
        virtual int SetClientCertificateMode(_tds__SetClientCertificateMode *tds__SetClientCertificateMode, _tds__SetClientCertificateModeResponse &tds__SetClientCertificateModeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetRelayOutputs' implementation, should return SOAP_OK or error code
        virtual int GetRelayOutputs(_tds__GetRelayOutputs *tds__GetRelayOutputs, _tds__GetRelayOutputsResponse &tds__GetRelayOutputsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetRelayOutputSettings' implementation, should return SOAP_OK or error code
        virtual int SetRelayOutputSettings(_tds__SetRelayOutputSettings *tds__SetRelayOutputSettings, _tds__SetRelayOutputSettingsResponse &tds__SetRelayOutputSettingsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetRelayOutputState' implementation, should return SOAP_OK or error code
        virtual int SetRelayOutputState(_tds__SetRelayOutputState *tds__SetRelayOutputState, _tds__SetRelayOutputStateResponse &tds__SetRelayOutputStateResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SendAuxiliaryCommand' implementation, should return SOAP_OK or error code
        virtual int SendAuxiliaryCommand(_tds__SendAuxiliaryCommand *tds__SendAuxiliaryCommand, _tds__SendAuxiliaryCommandResponse &tds__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCACertificates' implementation, should return SOAP_OK or error code
        virtual int GetCACertificates(_tds__GetCACertificates *tds__GetCACertificates, _tds__GetCACertificatesResponse &tds__GetCACertificatesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'LoadCertificateWithPrivateKey' implementation, should return SOAP_OK or error code
        virtual int LoadCertificateWithPrivateKey(_tds__LoadCertificateWithPrivateKey *tds__LoadCertificateWithPrivateKey, _tds__LoadCertificateWithPrivateKeyResponse &tds__LoadCertificateWithPrivateKeyResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCertificateInformation' implementation, should return SOAP_OK or error code
        virtual int GetCertificateInformation(_tds__GetCertificateInformation *tds__GetCertificateInformation, _tds__GetCertificateInformationResponse &tds__GetCertificateInformationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'LoadCACertificates' implementation, should return SOAP_OK or error code
        virtual int LoadCACertificates(_tds__LoadCACertificates *tds__LoadCACertificates, _tds__LoadCACertificatesResponse &tds__LoadCACertificatesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateDot1XConfiguration' implementation, should return SOAP_OK or error code
        virtual int CreateDot1XConfiguration(_tds__CreateDot1XConfiguration *tds__CreateDot1XConfiguration, _tds__CreateDot1XConfigurationResponse &tds__CreateDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetDot1XConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetDot1XConfiguration(_tds__SetDot1XConfiguration *tds__SetDot1XConfiguration, _tds__SetDot1XConfigurationResponse &tds__SetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDot1XConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetDot1XConfiguration(_tds__GetDot1XConfiguration *tds__GetDot1XConfiguration, _tds__GetDot1XConfigurationResponse &tds__GetDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDot1XConfigurations' implementation, should return SOAP_OK or error code
        virtual int GetDot1XConfigurations(_tds__GetDot1XConfigurations *tds__GetDot1XConfigurations, _tds__GetDot1XConfigurationsResponse &tds__GetDot1XConfigurationsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteDot1XConfiguration' implementation, should return SOAP_OK or error code
        virtual int DeleteDot1XConfiguration(_tds__DeleteDot1XConfiguration *tds__DeleteDot1XConfiguration, _tds__DeleteDot1XConfigurationResponse &tds__DeleteDot1XConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDot11Capabilities' implementation, should return SOAP_OK or error code
        virtual int GetDot11Capabilities(_tds__GetDot11Capabilities *tds__GetDot11Capabilities, _tds__GetDot11CapabilitiesResponse &tds__GetDot11CapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetDot11Status' implementation, should return SOAP_OK or error code
        virtual int GetDot11Status(_tds__GetDot11Status *tds__GetDot11Status, _tds__GetDot11StatusResponse &tds__GetDot11StatusResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'ScanAvailableDot11Networks' implementation, should return SOAP_OK or error code
        virtual int ScanAvailableDot11Networks(_tds__ScanAvailableDot11Networks *tds__ScanAvailableDot11Networks, _tds__ScanAvailableDot11NetworksResponse &tds__ScanAvailableDot11NetworksResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetSystemUris' implementation, should return SOAP_OK or error code
        virtual int GetSystemUris(_tds__GetSystemUris *tds__GetSystemUris, _tds__GetSystemUrisResponse &tds__GetSystemUrisResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'StartFirmwareUpgrade' implementation, should return SOAP_OK or error code
        virtual int StartFirmwareUpgrade(_tds__StartFirmwareUpgrade *tds__StartFirmwareUpgrade, _tds__StartFirmwareUpgradeResponse &tds__StartFirmwareUpgradeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'StartSystemRestore' implementation, should return SOAP_OK or error code
        virtual int StartSystemRestore(_tds__StartSystemRestore *tds__StartSystemRestore, _tds__StartSystemRestoreResponse &tds__StartSystemRestoreResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetStorageConfigurations' implementation, should return SOAP_OK or error code
        virtual int GetStorageConfigurations(_tds__GetStorageConfigurations *tds__GetStorageConfigurations, _tds__GetStorageConfigurationsResponse &tds__GetStorageConfigurationsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreateStorageConfiguration' implementation, should return SOAP_OK or error code
        virtual int CreateStorageConfiguration(_tds__CreateStorageConfiguration *tds__CreateStorageConfiguration, _tds__CreateStorageConfigurationResponse &tds__CreateStorageConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetStorageConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetStorageConfiguration(_tds__GetStorageConfiguration *tds__GetStorageConfiguration, _tds__GetStorageConfigurationResponse &tds__GetStorageConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetStorageConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetStorageConfiguration(_tds__SetStorageConfiguration *tds__SetStorageConfiguration, _tds__SetStorageConfigurationResponse &tds__SetStorageConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteStorageConfiguration' implementation, should return SOAP_OK or error code
        virtual int DeleteStorageConfiguration(_tds__DeleteStorageConfiguration *tds__DeleteStorageConfiguration, _tds__DeleteStorageConfigurationResponse &tds__DeleteStorageConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetGeoLocation' implementation, should return SOAP_OK or error code
        virtual int GetGeoLocation(_tds__GetGeoLocation *tds__GetGeoLocation, _tds__GetGeoLocationResponse &tds__GetGeoLocationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetGeoLocation' implementation, should return SOAP_OK or error code
        virtual int SetGeoLocation(_tds__SetGeoLocation *tds__SetGeoLocation, _tds__SetGeoLocationResponse &tds__SetGeoLocationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'DeleteGeoLocation' implementation, should return SOAP_OK or error code
        virtual int DeleteGeoLocation(_tds__DeleteGeoLocation *tds__DeleteGeoLocation, _tds__DeleteGeoLocationResponse &tds__DeleteGeoLocationResponse) SOAP_PURE_VIRTUAL;
    };
#endif
