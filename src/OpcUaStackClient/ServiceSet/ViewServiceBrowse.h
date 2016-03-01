/*
   Copyright 2016 Kai Huebl (kai@huebl-sgh.de)

   Lizenziert gemäß Apache Licence Version 2.0 (die „Lizenz“); Nutzung dieser
   Datei nur in Übereinstimmung mit der Lizenz erlaubt.
   Eine Kopie der Lizenz erhalten Sie auf http://www.apache.org/licenses/LICENSE-2.0.

   Sofern nicht gemäß geltendem Recht vorgeschrieben oder schriftlich vereinbart,
   erfolgt die Bereitstellung der im Rahmen der Lizenz verbreiteten Software OHNE
   GEWÄHR ODER VORBEHALTE – ganz gleich, ob ausdrücklich oder stillschweigend.

   Informationen über die jeweiligen Bedingungen für Genehmigungen und Einschränkungen
   im Rahmen der Lizenz finden Sie in der Lizenz.

   Autor: Kai Huebl (kai@huebl-sgh.de)
 */

#ifndef __OpcUaStackClient_ViewServiceBrowse_h__
#define __OpcUaStackClient_ViewServiceBrowse_h__

#include "OpcUaStackCore/Base/os.h"
#include "OpcUaStackClient/ServiceSet/ViewService.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient
{

	class DLLEXPORT ViewServiceBrowseIf
	{
	  public:
		ViewServiceBrowseIf(void) {}
		virtual ~ViewServiceBrowseIf(void) {}
	};


	class DLLEXPORT ViewServiceBrowse
	{
	  public:
		typedef boost::shared_ptr<ViewServiceBrowse> SPtr;

		ViewServiceBrowse(void);
		~ViewServiceBrowse(void);

		void viewService(ViewService::SPtr& viewService);
		void nodeId(OpcUaNodeId& nodeId);
		void viewServiceBrowseIf(ViewServiceBrowseIf* viewServiceBrowseIf);

		void asyncBrowse(void);

	  private:
		ViewServiceBrowseIf* viewServiceBrowseIf_;
		ViewService::SPtr viewService_;
		OpcUaNodeId nodeId_;
	};

}

#endif