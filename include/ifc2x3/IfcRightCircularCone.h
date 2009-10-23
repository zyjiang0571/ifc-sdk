#ifndef IFC2X3_IFCRIGHTCIRCULARCONE_H
#define IFC2X3_IFCRIGHTCIRCULARCONE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcCsgPrimitive3D.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRightCircularCone Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRightCircularCone : public IfcCsgPrimitive3D {
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
         * Gets the value of the explicit attribute 'Height'.
         * 
         */
        virtual IfcPositiveLengthMeasure getHeight();
        /**
         * (const) Returns the value of the explicit attribute 'Height'.
         * 
         * @return the value of the explicit attribute 'Height'
         */
        virtual const IfcPositiveLengthMeasure getHeight() const;
        /**
         * Sets the value of the explicit attribute 'Height'.
         * 
         * @param value
         */
        virtual void setHeight(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'Height'.
         * 
         */
        virtual void unsetHeight();
        /**
         * Test if the attribute 'Height' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHeight() const;
        /**
         * Gets the value of the explicit attribute 'BottomRadius'.
         * 
         */
        virtual IfcPositiveLengthMeasure getBottomRadius();
        /**
         * (const) Returns the value of the explicit attribute 'BottomRadius'.
         * 
         * @return the value of the explicit attribute 'BottomRadius'
         */
        virtual const IfcPositiveLengthMeasure getBottomRadius() const;
        /**
         * Sets the value of the explicit attribute 'BottomRadius'.
         * 
         * @param value
         */
        virtual void setBottomRadius(IfcPositiveLengthMeasure value);
        /**
         * unset the attribute 'BottomRadius'.
         * 
         */
        virtual void unsetBottomRadius();
        /**
         * Test if the attribute 'BottomRadius' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testBottomRadius() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRightCircularCone(Step::Id id, Step::SPFData *args);
        virtual ~IfcRightCircularCone();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRightCircularCone &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_height;
        /**
         */
        Step::Real m_bottomRadius;

    };

}

#endif // IFC2X3_IFCRIGHTCIRCULARCONE_H
