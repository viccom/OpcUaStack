/*
   Copyright 2015-2019 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de), Aleksey Timin (atimin@gmail.com)
*/

#ifndef __OpcUaStackCore_FindServersResponse_h__
#define __OpcUaStackCore_FindServersResponse_h__

#include <stdint.h>
#include "OpcUaStackCore/SecureChannel/ResponseHeader.h"
#include "OpcUaStackCore/StandardDataTypes/ApplicationDescription.h"

namespace OpcUaStackCore
{

	class DLLEXPORT FindServersResponse
	: public Object
	, public JsonFormatter
	{
	  public:
		typedef boost::shared_ptr<FindServersResponse> SPtr;

		FindServersResponse(void);
		virtual ~FindServersResponse(void);

		void responseHeader(const ResponseHeader::SPtr responseHeaderSPtr);
		ResponseHeader::SPtr responseHeader(void) const;
		void servers(const ApplicationDescriptionArray::SPtr servers);
		ApplicationDescriptionArray::SPtr servers(void) const;

		void opcUaBinaryEncode(std::ostream& os) const;
		void opcUaBinaryDecode(std::istream& is);

	  protected:
		bool jsonEncodeImpl(boost::property_tree::ptree &pt) const override;
		bool jsonDecodeImpl(const boost::property_tree::ptree &pt) override;

	  private:
		ResponseHeader::SPtr responseHeaderSPtr_;
		ApplicationDescriptionArray::SPtr serverArraySPtr_;
	};

}

#endif
