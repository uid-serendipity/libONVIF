/* soapDisplayBindingProxy.cpp
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

#include "soapDisplayBindingProxy.h"

DisplayBindingProxy::DisplayBindingProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DisplayBindingProxy::DisplayBindingProxy(const DisplayBindingProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

DisplayBindingProxy::DisplayBindingProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	DisplayBindingProxy_init(_soap->imode, _soap->omode);
}

DisplayBindingProxy::DisplayBindingProxy(const char *endpoint)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(iomode, iomode);
}

DisplayBindingProxy::DisplayBindingProxy(const char *endpoint, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

DisplayBindingProxy::DisplayBindingProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingProxy_init(imode, omode);
}

DisplayBindingProxy::~DisplayBindingProxy()
{	if (this->soap_own)
		soap_free(this->soap);
}

void DisplayBindingProxy::DisplayBindingProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL},
        {"ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL},
        {"saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL},
        {"saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL},
        {"wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL},
        {"xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL},
        {"wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", NULL, NULL},
        {"wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
        {"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
        {"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
        {"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
        {"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
        {"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
        {"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
        {"tad", "http://www.onvif.org/ver10/analyticsdevice/wsdl", NULL, NULL},
        {"tan", "http://www.onvif.org/ver20/analytics/wsdl", NULL, NULL},
        {"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
        {"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
        {"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
        {"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
        {"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
        {"tls", "http://www.onvif.org/ver10/display/wsdl", NULL, NULL},
        {"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
        {"trc", "http://www.onvif.org/ver10/recording/wsdl", NULL, NULL},
        {"trp", "http://www.onvif.org/ver10/replay/wsdl", NULL, NULL},
        {"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
        {"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
        {"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

DisplayBindingProxy *DisplayBindingProxy::copy()
{	DisplayBindingProxy *dup = SOAP_NEW_COPY(DisplayBindingProxy);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}

DisplayBindingProxy& DisplayBindingProxy::operator=(const DisplayBindingProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void DisplayBindingProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void DisplayBindingProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	DisplayBindingProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void DisplayBindingProxy::soap_noheader()
{	this->soap->header = NULL;
}

void DisplayBindingProxy::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
{	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
	this->soap->header->wsdd__AppSequence = wsdd__AppSequence;
}

::SOAP_ENV__Header *DisplayBindingProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *DisplayBindingProxy::soap_fault()
{	return this->soap->fault;
}

const char *DisplayBindingProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *DisplayBindingProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int DisplayBindingProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int DisplayBindingProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void DisplayBindingProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void DisplayBindingProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *DisplayBindingProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int DisplayBindingProxy::GetServiceCapabilities(const char *endpoint, const char *soap_action, _tls__GetServiceCapabilities *tls__GetServiceCapabilities, _tls__GetServiceCapabilitiesResponse &tls__GetServiceCapabilitiesResponse)
{	struct soap *soap = this->soap;
	struct __tls__GetServiceCapabilities soap_tmp___tls__GetServiceCapabilities;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetServiceCapabilities";
	soap_tmp___tls__GetServiceCapabilities.tls__GetServiceCapabilities = tls__GetServiceCapabilities;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities, "-tls:GetServiceCapabilities", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities, "-tls:GetServiceCapabilities", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__GetServiceCapabilitiesResponse*>(&tls__GetServiceCapabilitiesResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__GetServiceCapabilitiesResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetServiceCapabilitiesResponse.soap_get(soap, "tls:GetServiceCapabilitiesResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetLayout(const char *endpoint, const char *soap_action, _tls__GetLayout *tls__GetLayout, _tls__GetLayoutResponse &tls__GetLayoutResponse)
{	struct soap *soap = this->soap;
	struct __tls__GetLayout soap_tmp___tls__GetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetLayout";
	soap_tmp___tls__GetLayout.tls__GetLayout = tls__GetLayout;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__GetLayout(soap, &soap_tmp___tls__GetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetLayout(soap, &soap_tmp___tls__GetLayout, "-tls:GetLayout", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__GetLayout(soap, &soap_tmp___tls__GetLayout, "-tls:GetLayout", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__GetLayoutResponse*>(&tls__GetLayoutResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__GetLayoutResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetLayoutResponse.soap_get(soap, "tls:GetLayoutResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetLayout(const char *endpoint, const char *soap_action, _tls__SetLayout *tls__SetLayout, _tls__SetLayoutResponse &tls__SetLayoutResponse)
{	struct soap *soap = this->soap;
	struct __tls__SetLayout soap_tmp___tls__SetLayout;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetLayout";
	soap_tmp___tls__SetLayout.tls__SetLayout = tls__SetLayout;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__SetLayout(soap, &soap_tmp___tls__SetLayout);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetLayout(soap, &soap_tmp___tls__SetLayout, "-tls:SetLayout", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__SetLayout(soap, &soap_tmp___tls__SetLayout, "-tls:SetLayout", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__SetLayoutResponse*>(&tls__SetLayoutResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__SetLayoutResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetLayoutResponse.soap_get(soap, "tls:SetLayoutResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetDisplayOptions(const char *endpoint, const char *soap_action, _tls__GetDisplayOptions *tls__GetDisplayOptions, _tls__GetDisplayOptionsResponse &tls__GetDisplayOptionsResponse)
{	struct soap *soap = this->soap;
	struct __tls__GetDisplayOptions soap_tmp___tls__GetDisplayOptions;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetDisplayOptions";
	soap_tmp___tls__GetDisplayOptions.tls__GetDisplayOptions = tls__GetDisplayOptions;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions, "-tls:GetDisplayOptions", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions, "-tls:GetDisplayOptions", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__GetDisplayOptionsResponse*>(&tls__GetDisplayOptionsResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__GetDisplayOptionsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetDisplayOptionsResponse.soap_get(soap, "tls:GetDisplayOptionsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfigurations(const char *endpoint, const char *soap_action, _tls__GetPaneConfigurations *tls__GetPaneConfigurations, _tls__GetPaneConfigurationsResponse &tls__GetPaneConfigurationsResponse)
{	struct soap *soap = this->soap;
	struct __tls__GetPaneConfigurations soap_tmp___tls__GetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfigurations";
	soap_tmp___tls__GetPaneConfigurations.tls__GetPaneConfigurations = tls__GetPaneConfigurations;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations, "-tls:GetPaneConfigurations", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations, "-tls:GetPaneConfigurations", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__GetPaneConfigurationsResponse*>(&tls__GetPaneConfigurationsResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__GetPaneConfigurationsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetPaneConfigurationsResponse.soap_get(soap, "tls:GetPaneConfigurationsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::GetPaneConfiguration(const char *endpoint, const char *soap_action, _tls__GetPaneConfiguration *tls__GetPaneConfiguration, _tls__GetPaneConfigurationResponse &tls__GetPaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __tls__GetPaneConfiguration soap_tmp___tls__GetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/GetPaneConfiguration";
	soap_tmp___tls__GetPaneConfiguration.tls__GetPaneConfiguration = tls__GetPaneConfiguration;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration, "-tls:GetPaneConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration, "-tls:GetPaneConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__GetPaneConfigurationResponse*>(&tls__GetPaneConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__GetPaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__GetPaneConfigurationResponse.soap_get(soap, "tls:GetPaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfigurations(const char *endpoint, const char *soap_action, _tls__SetPaneConfigurations *tls__SetPaneConfigurations, _tls__SetPaneConfigurationsResponse &tls__SetPaneConfigurationsResponse)
{	struct soap *soap = this->soap;
	struct __tls__SetPaneConfigurations soap_tmp___tls__SetPaneConfigurations;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfigurations";
	soap_tmp___tls__SetPaneConfigurations.tls__SetPaneConfigurations = tls__SetPaneConfigurations;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations, "-tls:SetPaneConfigurations", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations, "-tls:SetPaneConfigurations", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__SetPaneConfigurationsResponse*>(&tls__SetPaneConfigurationsResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__SetPaneConfigurationsResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetPaneConfigurationsResponse.soap_get(soap, "tls:SetPaneConfigurationsResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::SetPaneConfiguration(const char *endpoint, const char *soap_action, _tls__SetPaneConfiguration *tls__SetPaneConfiguration, _tls__SetPaneConfigurationResponse &tls__SetPaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __tls__SetPaneConfiguration soap_tmp___tls__SetPaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/SetPaneConfiguration";
	soap_tmp___tls__SetPaneConfiguration.tls__SetPaneConfiguration = tls__SetPaneConfiguration;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration, "-tls:SetPaneConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration, "-tls:SetPaneConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__SetPaneConfigurationResponse*>(&tls__SetPaneConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__SetPaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__SetPaneConfigurationResponse.soap_get(soap, "tls:SetPaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::CreatePaneConfiguration(const char *endpoint, const char *soap_action, _tls__CreatePaneConfiguration *tls__CreatePaneConfiguration, _tls__CreatePaneConfigurationResponse &tls__CreatePaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __tls__CreatePaneConfiguration soap_tmp___tls__CreatePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/CreatePaneConfiguration";
	soap_tmp___tls__CreatePaneConfiguration.tls__CreatePaneConfiguration = tls__CreatePaneConfiguration;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration, "-tls:CreatePaneConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration, "-tls:CreatePaneConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__CreatePaneConfigurationResponse*>(&tls__CreatePaneConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__CreatePaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__CreatePaneConfigurationResponse.soap_get(soap, "tls:CreatePaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int DisplayBindingProxy::DeletePaneConfiguration(const char *endpoint, const char *soap_action, _tls__DeletePaneConfiguration *tls__DeletePaneConfiguration, _tls__DeletePaneConfigurationResponse &tls__DeletePaneConfigurationResponse)
{	struct soap *soap = this->soap;
	struct __tls__DeletePaneConfiguration soap_tmp___tls__DeletePaneConfiguration;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_action == NULL)
		soap_action = "http://www.onvif.org/ver10/display/wsdl/DeletePaneConfiguration";
	soap_tmp___tls__DeletePaneConfiguration.tls__DeletePaneConfiguration = tls__DeletePaneConfiguration;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration, "-tls:DeletePaneConfiguration", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration, "-tls:DeletePaneConfiguration", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_tls__DeletePaneConfigurationResponse*>(&tls__DeletePaneConfigurationResponse)) // NULL ref?
		return soap_closesock(soap);
	tls__DeletePaneConfigurationResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	tls__DeletePaneConfigurationResponse.soap_get(soap, "tls:DeletePaneConfigurationResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
