#!/bin/bash

. ./TestConfig.sh

${OpcUaClient} \
 -Command Connect 	-Session "TestSession" -EndpointUrl ${EndpointUrl} -ActivateSession "0" \
 -Command FindServer \
 -Command Disconnect 
