#ifndef IFC2X3_IFCRELDEFINESBYPROPERTIES_H
#define IFC2X3_IFCRELDEFINESBYPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRelDefines.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcPropertySetDefinition;

    /**
     * Generated class for the IfcRelDefinesByProperties Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRelDefinesByProperties : public IfcRelDefines {
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
         * Gets the value of the explicit attribute 'RelatingPropertyDefinition'.
         * 
         */
        virtual IfcPropertySetDefinition *getRelatingPropertyDefinition();
        /**
         * (const) Returns the value of the explicit attribute 'RelatingPropertyDefinition'.
         * 
         * @return the value of the explicit attribute 'RelatingPropertyDefinition'
         */
        virtual const IfcPropertySetDefinition *getRelatingPropertyDefinition() const;
        /**
         * Sets the value of the explicit attribute 'RelatingPropertyDefinition'.
         * 
         * @param value
         */
        virtual void setRelatingPropertyDefinition(const Step::RefPtr< IfcPropertySetDefinition > &value);
        /**
         * unset the attribute 'RelatingPropertyDefinition'.
         * 
         */
        virtual void unsetRelatingPropertyDefinition();
        /**
         * Test if the attribute 'RelatingPropertyDefinition' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testRelatingPropertyDefinition() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRelDefinesByProperties(Step::Id id, Step::SPFData *args);
        virtual ~IfcRelDefinesByProperties();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRelDefinesByProperties &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcPropertySetDefinition > m_relatingPropertyDefinition;

    };

}

#endif // IFC2X3_IFCRELDEFINESBYPROPERTIES_H
