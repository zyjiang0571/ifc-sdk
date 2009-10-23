#ifndef IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION_H
#define IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralLoadSingleDisplacement.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcStructuralLoadSingleDisplacementDistortion Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralLoadSingleDisplacementDistortion : public IfcStructuralLoadSingleDisplacement {
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
         * Gets the value of the explicit attribute 'Distortion'.
         * 
         */
        virtual IfcCurvatureMeasure getDistortion();
        /**
         * (const) Returns the value of the explicit attribute 'Distortion'.
         * 
         * @return the value of the explicit attribute 'Distortion'
         */
        virtual const IfcCurvatureMeasure getDistortion() const;
        /**
         * Sets the value of the explicit attribute 'Distortion'.
         * 
         * @param value
         */
        virtual void setDistortion(IfcCurvatureMeasure value);
        /**
         * unset the attribute 'Distortion'.
         * 
         */
        virtual void unsetDistortion();
        /**
         * Test if the attribute 'Distortion' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDistortion() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLoadSingleDisplacementDistortion(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLoadSingleDisplacementDistortion();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLoadSingleDisplacementDistortion &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_distortion;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLOADSINGLEDISPLACEMENTDISTORTION_H
