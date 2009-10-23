#ifndef IFC2X3_IFCEXTENDEDMATERIALPROPERTIES_H
#define IFC2X3_IFCEXTENDEDMATERIALPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcMaterialProperties.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcExtendedMaterialProperties Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcExtendedMaterialProperties : public IfcMaterialProperties {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'ExtendedProperties'.
         * 
         */
        virtual Set_IfcProperty_1_n &getExtendedProperties();
        /**
         * (const) Returns the value of the explicit attribute 'ExtendedProperties'.
         * 
         * @return the value of the explicit attribute 'ExtendedProperties'
         */
        virtual const Set_IfcProperty_1_n &getExtendedProperties() const;
        /**
         * Sets the value of the explicit attribute 'ExtendedProperties'.
         * 
         * @param value
         */
        virtual void setExtendedProperties(const Set_IfcProperty_1_n &value);
        /**
         * unset the attribute 'ExtendedProperties'.
         * 
         */
        virtual void unsetExtendedProperties();
        /**
         * Test if the attribute 'ExtendedProperties' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExtendedProperties() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'Name'.
         * 
         */
        virtual IfcLabel getName();
        /**
         * (const) Returns the value of the explicit attribute 'Name'.
         * 
         * @return the value of the explicit attribute 'Name'
         */
        virtual const IfcLabel getName() const;
        /**
         * Sets the value of the explicit attribute 'Name'.
         * 
         * @param value
         */
        virtual void setName(const IfcLabel &value);
        /**
         * unset the attribute 'Name'.
         * 
         */
        virtual void unsetName();
        /**
         * Test if the attribute 'Name' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testName() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcExtendedMaterialProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcExtendedMaterialProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcExtendedMaterialProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Set_IfcProperty_1_n m_extendedProperties;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::String m_name;

    };

}

#endif // IFC2X3_IFCEXTENDEDMATERIALPROPERTIES_H
