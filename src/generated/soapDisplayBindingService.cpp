/* soapDisplayBindingService.cpp
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

#include "soapDisplayBindingService.h"

DisplayBindingService::DisplayBindingService()
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

DisplayBindingService::DisplayBindingService(const DisplayBindingService& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
}

DisplayBindingService::DisplayBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	DisplayBindingService_init(_soap->imode, _soap->omode);
}

DisplayBindingService::DisplayBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingService_init(iomode, iomode);
}

DisplayBindingService::DisplayBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	DisplayBindingService_init(imode, omode);
}

DisplayBindingService::~DisplayBindingService()
{	if (this->soap_own)
		soap_free(this->soap);
}

void DisplayBindingService::DisplayBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
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

void DisplayBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void DisplayBindingService::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	DisplayBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
DisplayBindingService *DisplayBindingService::copy()
{	DisplayBindingService *dup = SOAP_NEW_COPY(DisplayBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

DisplayBindingService& DisplayBindingService::operator=(const DisplayBindingService& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
	}
	return *this;
}

int DisplayBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int DisplayBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int DisplayBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int DisplayBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int DisplayBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int DisplayBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void DisplayBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void DisplayBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *DisplayBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void DisplayBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void DisplayBindingService::soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence)
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

::SOAP_ENV__Header *DisplayBindingService::soap_header()
{	return this->soap->header;
}

#ifndef WITH_NOIO
int DisplayBindingService::run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int DisplayBindingService::ssl_run(int port)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, 100)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}
#endif

SOAP_SOCKET DisplayBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET DisplayBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int DisplayBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif
#endif

int DisplayBindingService::serve()
{
#ifndef WITH_FASTCGI
	this->soap->keep_alive = this->soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->soap->keep_alive > 0 && this->soap->max_keep_alive > 0)
			this->soap->keep_alive--;
#endif
		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if ((dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap))) && this->soap->error && this->soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___tls__GetServiceCapabilities(struct soap*, DisplayBindingService*);
static int serve___tls__GetLayout(struct soap*, DisplayBindingService*);
static int serve___tls__SetLayout(struct soap*, DisplayBindingService*);
static int serve___tls__GetDisplayOptions(struct soap*, DisplayBindingService*);
static int serve___tls__GetPaneConfigurations(struct soap*, DisplayBindingService*);
static int serve___tls__GetPaneConfiguration(struct soap*, DisplayBindingService*);
static int serve___tls__SetPaneConfigurations(struct soap*, DisplayBindingService*);
static int serve___tls__SetPaneConfiguration(struct soap*, DisplayBindingService*);
static int serve___tls__CreatePaneConfiguration(struct soap*, DisplayBindingService*);
static int serve___tls__DeletePaneConfiguration(struct soap*, DisplayBindingService*);

int DisplayBindingService::dispatch()
{	return dispatch(this->soap);
}

int DisplayBindingService::dispatch(struct soap* soap)
{
	DisplayBindingService_init(soap->imode, soap->omode);

	soap_peek_element(soap);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:GetServiceCapabilities")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/GetServiceCapabilities")))
		return serve___tls__GetServiceCapabilities(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:GetLayout")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/GetLayout")))
		return serve___tls__GetLayout(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:SetLayout")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/SetLayout")))
		return serve___tls__SetLayout(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:GetDisplayOptions")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/GetDisplayOptions")))
		return serve___tls__GetDisplayOptions(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:GetPaneConfigurations")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/GetPaneConfigurations")))
		return serve___tls__GetPaneConfigurations(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:GetPaneConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/GetPaneConfiguration")))
		return serve___tls__GetPaneConfiguration(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:SetPaneConfigurations")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/SetPaneConfigurations")))
		return serve___tls__SetPaneConfigurations(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:SetPaneConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/SetPaneConfiguration")))
		return serve___tls__SetPaneConfiguration(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:CreatePaneConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/CreatePaneConfiguration")))
		return serve___tls__CreatePaneConfiguration(soap, this);
	if ((!soap->action && !soap_match_tag(soap, soap->tag, "tls:DeletePaneConfiguration")) || (soap->action && !strcmp(soap->action, "http://www.onvif.org/ver10/display/wsdl/DeletePaneConfiguration")))
		return serve___tls__DeletePaneConfiguration(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___tls__GetServiceCapabilities(struct soap *soap, DisplayBindingService *service)
{	struct __tls__GetServiceCapabilities soap_tmp___tls__GetServiceCapabilities;
	_tls__GetServiceCapabilitiesResponse tls__GetServiceCapabilitiesResponse;
	tls__GetServiceCapabilitiesResponse.soap_default(soap);
	soap_default___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities);
	if (!soap_get___tls__GetServiceCapabilities(soap, &soap_tmp___tls__GetServiceCapabilities, "-tls:GetServiceCapabilities", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetServiceCapabilities(soap_tmp___tls__GetServiceCapabilities.tls__GetServiceCapabilities, tls__GetServiceCapabilitiesResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__GetServiceCapabilitiesResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__GetServiceCapabilitiesResponse.soap_put(soap, "tls:GetServiceCapabilitiesResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__GetServiceCapabilitiesResponse.soap_put(soap, "tls:GetServiceCapabilitiesResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__GetLayout(struct soap *soap, DisplayBindingService *service)
{	struct __tls__GetLayout soap_tmp___tls__GetLayout;
	_tls__GetLayoutResponse tls__GetLayoutResponse;
	tls__GetLayoutResponse.soap_default(soap);
	soap_default___tls__GetLayout(soap, &soap_tmp___tls__GetLayout);
	if (!soap_get___tls__GetLayout(soap, &soap_tmp___tls__GetLayout, "-tls:GetLayout", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetLayout(soap_tmp___tls__GetLayout.tls__GetLayout, tls__GetLayoutResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__GetLayoutResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__GetLayoutResponse.soap_put(soap, "tls:GetLayoutResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__GetLayoutResponse.soap_put(soap, "tls:GetLayoutResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__SetLayout(struct soap *soap, DisplayBindingService *service)
{	struct __tls__SetLayout soap_tmp___tls__SetLayout;
	_tls__SetLayoutResponse tls__SetLayoutResponse;
	tls__SetLayoutResponse.soap_default(soap);
	soap_default___tls__SetLayout(soap, &soap_tmp___tls__SetLayout);
	if (!soap_get___tls__SetLayout(soap, &soap_tmp___tls__SetLayout, "-tls:SetLayout", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetLayout(soap_tmp___tls__SetLayout.tls__SetLayout, tls__SetLayoutResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__SetLayoutResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__SetLayoutResponse.soap_put(soap, "tls:SetLayoutResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__SetLayoutResponse.soap_put(soap, "tls:SetLayoutResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__GetDisplayOptions(struct soap *soap, DisplayBindingService *service)
{	struct __tls__GetDisplayOptions soap_tmp___tls__GetDisplayOptions;
	_tls__GetDisplayOptionsResponse tls__GetDisplayOptionsResponse;
	tls__GetDisplayOptionsResponse.soap_default(soap);
	soap_default___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions);
	if (!soap_get___tls__GetDisplayOptions(soap, &soap_tmp___tls__GetDisplayOptions, "-tls:GetDisplayOptions", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetDisplayOptions(soap_tmp___tls__GetDisplayOptions.tls__GetDisplayOptions, tls__GetDisplayOptionsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__GetDisplayOptionsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__GetDisplayOptionsResponse.soap_put(soap, "tls:GetDisplayOptionsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__GetDisplayOptionsResponse.soap_put(soap, "tls:GetDisplayOptionsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__GetPaneConfigurations(struct soap *soap, DisplayBindingService *service)
{	struct __tls__GetPaneConfigurations soap_tmp___tls__GetPaneConfigurations;
	_tls__GetPaneConfigurationsResponse tls__GetPaneConfigurationsResponse;
	tls__GetPaneConfigurationsResponse.soap_default(soap);
	soap_default___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations);
	if (!soap_get___tls__GetPaneConfigurations(soap, &soap_tmp___tls__GetPaneConfigurations, "-tls:GetPaneConfigurations", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetPaneConfigurations(soap_tmp___tls__GetPaneConfigurations.tls__GetPaneConfigurations, tls__GetPaneConfigurationsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__GetPaneConfigurationsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__GetPaneConfigurationsResponse.soap_put(soap, "tls:GetPaneConfigurationsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__GetPaneConfigurationsResponse.soap_put(soap, "tls:GetPaneConfigurationsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__GetPaneConfiguration(struct soap *soap, DisplayBindingService *service)
{	struct __tls__GetPaneConfiguration soap_tmp___tls__GetPaneConfiguration;
	_tls__GetPaneConfigurationResponse tls__GetPaneConfigurationResponse;
	tls__GetPaneConfigurationResponse.soap_default(soap);
	soap_default___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration);
	if (!soap_get___tls__GetPaneConfiguration(soap, &soap_tmp___tls__GetPaneConfiguration, "-tls:GetPaneConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->GetPaneConfiguration(soap_tmp___tls__GetPaneConfiguration.tls__GetPaneConfiguration, tls__GetPaneConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__GetPaneConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__GetPaneConfigurationResponse.soap_put(soap, "tls:GetPaneConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__GetPaneConfigurationResponse.soap_put(soap, "tls:GetPaneConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__SetPaneConfigurations(struct soap *soap, DisplayBindingService *service)
{	struct __tls__SetPaneConfigurations soap_tmp___tls__SetPaneConfigurations;
	_tls__SetPaneConfigurationsResponse tls__SetPaneConfigurationsResponse;
	tls__SetPaneConfigurationsResponse.soap_default(soap);
	soap_default___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations);
	if (!soap_get___tls__SetPaneConfigurations(soap, &soap_tmp___tls__SetPaneConfigurations, "-tls:SetPaneConfigurations", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetPaneConfigurations(soap_tmp___tls__SetPaneConfigurations.tls__SetPaneConfigurations, tls__SetPaneConfigurationsResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__SetPaneConfigurationsResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__SetPaneConfigurationsResponse.soap_put(soap, "tls:SetPaneConfigurationsResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__SetPaneConfigurationsResponse.soap_put(soap, "tls:SetPaneConfigurationsResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__SetPaneConfiguration(struct soap *soap, DisplayBindingService *service)
{	struct __tls__SetPaneConfiguration soap_tmp___tls__SetPaneConfiguration;
	_tls__SetPaneConfigurationResponse tls__SetPaneConfigurationResponse;
	tls__SetPaneConfigurationResponse.soap_default(soap);
	soap_default___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration);
	if (!soap_get___tls__SetPaneConfiguration(soap, &soap_tmp___tls__SetPaneConfiguration, "-tls:SetPaneConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->SetPaneConfiguration(soap_tmp___tls__SetPaneConfiguration.tls__SetPaneConfiguration, tls__SetPaneConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__SetPaneConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__SetPaneConfigurationResponse.soap_put(soap, "tls:SetPaneConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__SetPaneConfigurationResponse.soap_put(soap, "tls:SetPaneConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__CreatePaneConfiguration(struct soap *soap, DisplayBindingService *service)
{	struct __tls__CreatePaneConfiguration soap_tmp___tls__CreatePaneConfiguration;
	_tls__CreatePaneConfigurationResponse tls__CreatePaneConfigurationResponse;
	tls__CreatePaneConfigurationResponse.soap_default(soap);
	soap_default___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration);
	if (!soap_get___tls__CreatePaneConfiguration(soap, &soap_tmp___tls__CreatePaneConfiguration, "-tls:CreatePaneConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->CreatePaneConfiguration(soap_tmp___tls__CreatePaneConfiguration.tls__CreatePaneConfiguration, tls__CreatePaneConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__CreatePaneConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__CreatePaneConfigurationResponse.soap_put(soap, "tls:CreatePaneConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__CreatePaneConfigurationResponse.soap_put(soap, "tls:CreatePaneConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tls__DeletePaneConfiguration(struct soap *soap, DisplayBindingService *service)
{	struct __tls__DeletePaneConfiguration soap_tmp___tls__DeletePaneConfiguration;
	_tls__DeletePaneConfigurationResponse tls__DeletePaneConfigurationResponse;
	tls__DeletePaneConfigurationResponse.soap_default(soap);
	soap_default___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration);
	if (!soap_get___tls__DeletePaneConfiguration(soap, &soap_tmp___tls__DeletePaneConfiguration, "-tls:DeletePaneConfiguration", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->DeletePaneConfiguration(soap_tmp___tls__DeletePaneConfiguration.tls__DeletePaneConfiguration, tls__DeletePaneConfigurationResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	tls__DeletePaneConfigurationResponse.soap_serialize(soap);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || tls__DeletePaneConfigurationResponse.soap_put(soap, "tls:DeletePaneConfigurationResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || tls__DeletePaneConfigurationResponse.soap_put(soap, "tls:DeletePaneConfigurationResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
