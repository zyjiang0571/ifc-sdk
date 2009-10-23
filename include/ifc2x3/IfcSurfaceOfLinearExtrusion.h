#ifndef IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
#define IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcSweptSurface.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcDirection;

    /**
     * Generated class for the IfcSurfaceOfLinearExtrusion Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcSurfaceOfLinearExtrusion : public IfcSweptSurface {
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
         * Gets the value of the explicit attribute 'ExtrudedDirection'.
         * 
         */
        virtual IfcDirection *getExtrudedDirection();
        /**
         * (const) Returns the value of the explicit attribute 'ExtrudedDirection'.
         * 
         * @return the value of the explicit attribute 'ExtrudedDirection'
         */
        virtual const IfcDirection *getExtrudedDirection() const;
        /**
         * Sets the value of the explicit attribute 'ExtrudedDirection'.
         * 
         * @param value
         */
        virtual void setExtrudedDirection(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'ExtrudedDirection'.
         * 
         */
        virtual void unsetExtrudedDirection();
        /**
         * Test if the attribute 'ExtrudedDirection' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testExtrudedDirection() const;
        /**
         * Gets the value of the explicit attribute 'Depth'.
         * 
         */
        virtual IfcLengthMeasure getDepth();
        /**
         * (const) Returns the value of the explicit attribute 'Depth'.
         * 
         * @return the value of the explicit attribute 'Depth'
         */
        virtual const IfcLengthMeasure getDepth() const;
        /**
         * Sets the value of the explicit attribute 'Depth'.
         * 
         * @param value
         */
        virtual void setDepth(IfcLengthMeasure value);
        /**
         * unset the attribute 'Depth'.
         * 
         */
        virtual void unsetDepth();
        /**
         * Test if the attribute 'Depth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDepth() const;
        /**
         * Gets the value of the derived attribute 'ExtrusionAxis'.
         * 
         */
        virtual IfcVector *getExtrusionAxis() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSurfaceOfLinearExtrusion(Step::Id id, Step::SPFData *args);
        virtual ~IfcSurfaceOfLinearExtrusion();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSurfaceOfLinearExtrusion &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcDirection > m_extrudedDirection;
        /**
         */
        Step::Real m_depth;

    };

}

#endif // IFC2X3_IFCSURFACEOFLINEAREXTRUSION_H
