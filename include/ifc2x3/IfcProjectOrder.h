#ifndef IFC2X3_IFCPROJECTORDER_H
#define IFC2X3_IFCPROJECTORDER_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcControl.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcProjectOrder Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcProjectOrder : public IfcControl {
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
         * Gets the value of the explicit attribute 'ID'.
         * 
         */
        virtual IfcIdentifier getID();
        /**
         * (const) Returns the value of the explicit attribute 'ID'.
         * 
         * @return the value of the explicit attribute 'ID'
         */
        virtual const IfcIdentifier getID() const;
        /**
         * Sets the value of the explicit attribute 'ID'.
         * 
         * @param value
         */
        virtual void setID(const IfcIdentifier &value);
        /**
         * unset the attribute 'ID'.
         * 
         */
        virtual void unsetID();
        /**
         * Test if the attribute 'ID' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testID() const;
        /**
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcProjectOrderTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcProjectOrderTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcProjectOrderTypeEnum value);
        /**
         * unset the attribute 'PredefinedType'.
         * 
         */
        virtual void unsetPredefinedType();
        /**
         * Test if the attribute 'PredefinedType' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPredefinedType() const;
        /**
         * Gets the value of the explicit attribute 'Status'.
         * 
         */
        virtual IfcLabel getStatus();
        /**
         * (const) Returns the value of the explicit attribute 'Status'.
         * 
         * @return the value of the explicit attribute 'Status'
         */
        virtual const IfcLabel getStatus() const;
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        virtual void setStatus(const IfcLabel &value);
        /**
         * unset the attribute 'Status'.
         * 
         */
        virtual void unsetStatus();
        /**
         * Test if the attribute 'Status' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testStatus() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcProjectOrder(Step::Id id, Step::SPFData *args);
        virtual ~IfcProjectOrder();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcProjectOrder &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_iD;
        /**
         */
        IfcProjectOrderTypeEnum m_predefinedType;
        /**
         */
        Step::String m_status;

    };

}

#endif // IFC2X3_IFCPROJECTORDER_H
