#ifndef IFC2X3_IFCPLANAREXTENT_H
#define IFC2X3_IFCPLANAREXTENT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcGeometricRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcPlanarExtent Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPlanarExtent : public IfcGeometricRepresentationItem {
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
         * Gets the value of the explicit attribute 'SizeInX'.
         * 
         */
        virtual IfcLengthMeasure getSizeInX();
        /**
         * (const) Returns the value of the explicit attribute 'SizeInX'.
         * 
         * @return the value of the explicit attribute 'SizeInX'
         */
        virtual const IfcLengthMeasure getSizeInX() const;
        /**
         * Sets the value of the explicit attribute 'SizeInX'.
         * 
         * @param value
         */
        virtual void setSizeInX(IfcLengthMeasure value);
        /**
         * unset the attribute 'SizeInX'.
         * 
         */
        virtual void unsetSizeInX();
        /**
         * Test if the attribute 'SizeInX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSizeInX() const;
        /**
         * Gets the value of the explicit attribute 'SizeInY'.
         * 
         */
        virtual IfcLengthMeasure getSizeInY();
        /**
         * (const) Returns the value of the explicit attribute 'SizeInY'.
         * 
         * @return the value of the explicit attribute 'SizeInY'
         */
        virtual const IfcLengthMeasure getSizeInY() const;
        /**
         * Sets the value of the explicit attribute 'SizeInY'.
         * 
         * @param value
         */
        virtual void setSizeInY(IfcLengthMeasure value);
        /**
         * unset the attribute 'SizeInY'.
         * 
         */
        virtual void unsetSizeInY();
        /**
         * Test if the attribute 'SizeInY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSizeInY() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPlanarExtent(Step::Id id, Step::SPFData *args);
        virtual ~IfcPlanarExtent();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPlanarExtent &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_sizeInX;
        /**
         */
        Step::Real m_sizeInY;

    };

}

#endif // IFC2X3_IFCPLANAREXTENT_H
