#ifndef IFC2X3_IFCRATIONALBEZIERCURVE_H
#define IFC2X3_IFCRATIONALBEZIERCURVE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcBezierCurve.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcRationalBezierCurve Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcRationalBezierCurve : public IfcBezierCurve {
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
         * Gets the value of the explicit attribute 'WeightsData'.
         * 
         */
        virtual List_Real_2_n &getWeightsData();
        /**
         * (const) Returns the value of the explicit attribute 'WeightsData'.
         * 
         * @return the value of the explicit attribute 'WeightsData'
         */
        virtual const List_Real_2_n &getWeightsData() const;
        /**
         * Sets the value of the explicit attribute 'WeightsData'.
         * 
         * @param value
         */
        virtual void setWeightsData(const List_Real_2_n &value);
        /**
         * unset the attribute 'WeightsData'.
         * 
         */
        virtual void unsetWeightsData();
        /**
         * Test if the attribute 'WeightsData' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWeightsData() const;
        /**
         * Gets the value of the derived attribute 'Weights'.
         * 
         */
        virtual Array_Real_0_255 getWeights() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcRationalBezierCurve(Step::Id id, Step::SPFData *args);
        virtual ~IfcRationalBezierCurve();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcRationalBezierCurve &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_Real_2_n m_weightsData;

    };

}

#endif // IFC2X3_IFCRATIONALBEZIERCURVE_H
