#ifndef IFC2X3_IFCSTRUCTURALLINEARACTIONVARYING_H
#define IFC2X3_IFCSTRUCTURALLINEARACTIONVARYING_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralLinearAction.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcShapeAspect;

    /**
     * Generated class for the IfcStructuralLinearActionVarying Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcStructuralLinearActionVarying : public IfcStructuralLinearAction {
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
         * Gets the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         */
        virtual IfcShapeAspect *getVaryingAppliedLoadLocation();
        /**
         * (const) Returns the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         * @return the value of the explicit attribute 'VaryingAppliedLoadLocation'
         */
        virtual const IfcShapeAspect *getVaryingAppliedLoadLocation() const;
        /**
         * Sets the value of the explicit attribute 'VaryingAppliedLoadLocation'.
         * 
         * @param value
         */
        virtual void setVaryingAppliedLoadLocation(const Step::RefPtr< IfcShapeAspect > &value);
        /**
         * unset the attribute 'VaryingAppliedLoadLocation'.
         * 
         */
        virtual void unsetVaryingAppliedLoadLocation();
        /**
         * Test if the attribute 'VaryingAppliedLoadLocation' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testVaryingAppliedLoadLocation() const;
        /**
         * Gets the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         */
        virtual List_IfcStructuralLoad_1_n &getSubsequentAppliedLoads();
        /**
         * (const) Returns the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         * @return the value of the explicit attribute 'SubsequentAppliedLoads'
         */
        virtual const List_IfcStructuralLoad_1_n &getSubsequentAppliedLoads() const;
        /**
         * Sets the value of the explicit attribute 'SubsequentAppliedLoads'.
         * 
         * @param value
         */
        virtual void setSubsequentAppliedLoads(const List_IfcStructuralLoad_1_n &value);
        /**
         * unset the attribute 'SubsequentAppliedLoads'.
         * 
         */
        virtual void unsetSubsequentAppliedLoads();
        /**
         * Test if the attribute 'SubsequentAppliedLoads' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSubsequentAppliedLoads() const;
        /**
         * Gets the value of the derived attribute 'VaryingAppliedLoads'.
         * 
         */
        virtual List_IfcStructuralLoad_2_n getVaryingAppliedLoads() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcStructuralLinearActionVarying(Step::Id id, Step::SPFData *args);
        virtual ~IfcStructuralLinearActionVarying();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcStructuralLinearActionVarying &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcShapeAspect > m_varyingAppliedLoadLocation;
        /**
         */
        List_IfcStructuralLoad_1_n m_subsequentAppliedLoads;

    };

}

#endif // IFC2X3_IFCSTRUCTURALLINEARACTIONVARYING_H
