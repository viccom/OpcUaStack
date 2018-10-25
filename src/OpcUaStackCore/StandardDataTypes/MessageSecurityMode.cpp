/*
    EnumTypeClass: MessageSecurityMode

    Generated Source Code - please do not change this source code

    EnumTypeCodeGenerator Version:
        OpcUaStackCore - 4.0.1

    Autor: Kai Huebl (kai@huebl-sgh.de)
*/

#include "OpcUaStackCore/StandardDataTypes/MessageSecurityMode.h"

namespace OpcUaStackCore
{
    
    MessageSecurityMode::MessageSecurityMode(void)
    : Object()
    , ExtensionObjectBase()
    , value_(0)
    {
    }
    
    MessageSecurityMode::MessageSecurityMode(Enum enumeration)
    : Object()
    , ExtensionObjectBase()
    , value_(enumeration)
    {
    }
    
    MessageSecurityMode::MessageSecurityMode(MessageSecurityMode& value)
    : Object()
    , ExtensionObjectBase()
    , value_(value.enumeration())
    {
    }
    
    MessageSecurityMode::~MessageSecurityMode(void)
    {
    }
    
    uint32_t&
    MessageSecurityMode::value(void)
    {
        return value_;
    }
    
    void
    MessageSecurityMode::enumeration(MessageSecurityMode::Enum enumeration)
    {
        value_ = enumeration;
    }
    
    MessageSecurityMode::Enum
    MessageSecurityMode::enumeration(void)
    {
        return (Enum)value_;
    }
    
    MessageSecurityMode::Enum
    MessageSecurityMode::str2Enum(const std::string& enumerationString)
    {
        if (enumerationString == "Invalid") return (Enum)0;
        if (enumerationString == "None") return (Enum)1;
        if (enumerationString == "Sign") return (Enum)2;
        if (enumerationString == "SignAndEncrypt") return (Enum)3;
        return (Enum)0;
    }
    
    std::string
    MessageSecurityMode::enum2Str(Enum enumeration)
    {
        if (enumeration == 0) return "Invalid";
        if (enumeration == 1) return "None";
        if (enumeration == 2) return "Sign";
        if (enumeration == 3) return "SignAndEncrypt";
        return "Unknown";
    }
    
    std::string
    MessageSecurityMode::enum2Str(void)
    {
        return enum2Str((Enum)value_);
    }
    
    std::string
    MessageSecurityMode::toString(void)
    {
        return enum2Str((Enum)value_);
    }
    
    bool
    MessageSecurityMode::exist(const std::string& enumerationString)
    {
        if (enumerationString == "Invalid") return true;
        if (enumerationString == "None") return true;
        if (enumerationString == "Sign") return true;
        if (enumerationString == "SignAndEncrypt") return true;
        return false;
    }
    
    bool
    MessageSecurityMode::exist(Enum enumeration)
    {
        if (enumeration == 0) return true;
        if (enumeration == 1) return true;
        if (enumeration == 2) return true;
        if (enumeration == 3) return true;
        return false;
    }
    
    bool
    MessageSecurityMode::operator==(const MessageSecurityMode& value) const
    {
        if (value_ != value.value_) return false;
        return true;
    }
    
    bool
    MessageSecurityMode::operator!=(const MessageSecurityMode& value) const
    {
        return !this->operator==(value);
    }
    
    MessageSecurityMode&
    MessageSecurityMode::operator=(const MessageSecurityMode& value)
    {
        value_ = const_cast<MessageSecurityMode&>(value).value();
        return *this;
    }
    
    MessageSecurityMode&
    MessageSecurityMode::operator=(const Enum& value)
    {
        value_ = value;
        return *this;
    }
    
    void
    MessageSecurityMode::copyTo(MessageSecurityMode& value)
    {
        value.value_ = value_;
    }
    
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    //
    // ExtensionObjectBase
    //
    // ------------------------------------------------------------------------
    // ------------------------------------------------------------------------
    
    ExtensionObjectBase::SPtr
    MessageSecurityMode::factory(void)
    {
    	return constructSPtr<MessageSecurityMode>();
    }
    
    OpcUaNodeId
    MessageSecurityMode::binaryTypeId(void)
    {
    	return OpcUaNodeId(0, 0);
    }
    
    OpcUaNodeId
    MessageSecurityMode::xmlTypeId(void)
    {
    	return OpcUaNodeId(0, 0);
    }
    
    void
    MessageSecurityMode::opcUaBinaryEncode(std::ostream& os) const
    {
        OpcUaNumber::opcUaBinaryEncode(os, value_);
    }
    
    void
    MessageSecurityMode::opcUaBinaryDecode(std::istream& is)
    {
        OpcUaNumber::opcUaBinaryDecode(is, value_);
    }
    
    bool
    MessageSecurityMode::encode(boost::property_tree::ptree& pt, Xmlns& xmlns) const
    {
    }
    
    bool
    MessageSecurityMode::decode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    MessageSecurityMode::xmlEncode(boost::property_tree::ptree& pt, const std::string& element, Xmlns& xmlns)
    {
    }
    
    bool
    MessageSecurityMode::xmlEncode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    bool
    MessageSecurityMode::xmlDecode(boost::property_tree::ptree& pt, Xmlns& xmlns)
    {
    }
    
    void
    MessageSecurityMode::copyTo(ExtensionObjectBase& extensionObjectBase)
    {
    	MessageSecurityMode* dst = dynamic_cast<MessageSecurityMode*>(&extensionObjectBase);
    	copyTo(*dst);
    }
    
    bool
    MessageSecurityMode::equal(ExtensionObjectBase& extensionObjectBase) const
    {
    	MessageSecurityMode* dst = dynamic_cast<MessageSecurityMode*>(&extensionObjectBase);
    	return *this == *dst;
    }
    
    void
    MessageSecurityMode::out(std::ostream& os)
    {
        os << "Value=" << value_;
    }

}
