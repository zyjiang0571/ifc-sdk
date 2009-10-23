#ifndef IFC2X3_IFCPHYSICALSIMPLEQUANTITY_H
#define IFC2X3_IFCPHYSICALSIMPLEQUANTITY_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcPhysicalQuantity.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcNamedUnit;

    /**
     * Generated class for the IfcPhysicalSimpleQuantity Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPhysicalSimpleQuantity : public IfcPhysicalQuantity {
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
         * Gets the value of the explicit attribute 'Unit'.
         * 
         */
        virtual IfcNamedUnit *getUnit();
        /**
         * (const) Returns the value of the explicit attribute 'Unit'.
         * 
         * @return the value of the explicit attribute 'Unit'
         */
        virtual const IfcNamedUnit *getUnit() const;
        /**
         * Sets the value of the explicit attribute 'Unit'.
         * 
         * @param value
         */
        virtual void setUnit(const Step::RefPtr< IfcNamedUnit > &value);
        /**
         * unset the attribute 'Unit'.
         * 
         */
        virtual void unsetUnit();
        /**
         * Test if the attribute 'Unit' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUnit() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPhysicalSimpleQuantity(Step::Id id, Step::SPFData *args);
        virtual ~IfcPhysicalSimpleQuantity();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPhysicalSimpleQuantity &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcNamedUnit > m_unit;

    };

}

#endif // IFC2X3_IFCPHYSICALSIMPLEQUANTITY_H
