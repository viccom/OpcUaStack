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

#include "OpcUaStackCore/Base/Log.h"
#include "OpcUaStackClient/ServiceSet/ViewServiceBrowse.h"

using namespace OpcUaStackCore;

namespace OpcUaStackClient
{

	ViewServiceBrowse::ViewServiceBrowse(void)
	: viewServiceBrowseIf_(nullptr)
	, viewService_()
	, nodeId_()
	{
	}

	ViewServiceBrowse::~ViewServiceBrowse(void)
	{
	}

	void
	ViewServiceBrowse::viewService(ViewService::SPtr& viewService)
	{
		viewService_ = viewService;
	}

	void
	ViewServiceBrowse::nodeId(OpcUaNodeId& nodeId)
	{
		nodeId_ = nodeId;
	}

	void
	ViewServiceBrowse::viewServiceBrowseIf(ViewServiceBrowseIf* viewServiceBrowseIf)
	{
		viewServiceBrowseIf_ = viewServiceBrowseIf;
	}

	void
	ViewServiceBrowse::asyncBrowse(void)
	{
		// FIXME: todo
	}

}