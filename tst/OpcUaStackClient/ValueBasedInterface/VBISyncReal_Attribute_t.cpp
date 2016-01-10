#include "unittest.h"
#include "OpcUaStackClient/ValueBasedInterface/VBIClient.h"
#include "OpcUaStackClient/ValueBasedInterface/VBIClientHandlerTest.h"

using namespace OpcUaStackClient;

#ifdef REAL_SERVER

BOOST_AUTO_TEST_SUITE(VBISyncReal_Attribute_)

BOOST_AUTO_TEST_CASE(VBISyncReal_Attribute_)
{
	std::cout << "VBISyncReal_Attribute_t" << std::endl;
}

BOOST_AUTO_TEST_CASE(VBISyncReal_Attribute_read)
{
	OpcUaStatusCode statusCode;
	VBIClient client;

	// connect session
	ConnectContext connectContext;
	connectContext.endpointUrl_ = REAL_SERVER_URI;
	connectContext.sessionName_ = REAL_SESSION_NAME;
	BOOST_REQUIRE(client.syncConnect(connectContext) == Success);

	// read
	OpcUaNodeId nodeId;
	OpcUaDataValue dataValue;
	nodeId.set((OpcUaInt32)2259);
	BOOST_REQUIRE(client.syncRead(nodeId, dataValue) == Success);
	dataValue.out(std::cout);

	// disconnect session
	BOOST_REQUIRE(client.syncDisconnect() == Success);
}


BOOST_AUTO_TEST_SUITE_END()

#endif
