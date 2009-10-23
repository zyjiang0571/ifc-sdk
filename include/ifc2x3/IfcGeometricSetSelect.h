#ifndef IFC2X3_IFCGEOMETRICSETSELECT_H
#define IFC2X3_IFCGEOMETRICSETSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCurve;
    class IfcPoint;
    class IfcSurface;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcGeometricSetSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcGeometricSetSelect_select {
            IFCPOINT,
            IFCCURVE,
            IFCSURFACE,
            UNSET,
        };

        union IfcGeometricSetSelect_union {
            IfcPoint *m_IfcPoint;
            IfcCurve *m_IfcCurve;
            IfcSurface *m_IfcSurface;
        };
        /**
         */
        IfcGeometricSetSelect();
        virtual ~IfcGeometricSetSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeometricSetSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcGeometricSetSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPoint *getIfcPoint() const;
        /**
         * @param value
         */
        void setIfcPoint(IfcPoint *value);
        /**
         */
        IfcCurve *getIfcCurve() const;
        /**
         * @param value
         */
        void setIfcCurve(IfcCurve *value);
        /**
         */
        IfcSurface *getIfcSurface() const;
        /**
         * @param value
         */
        void setIfcSurface(IfcSurface *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcGeometricSetSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcGeometricSetSelect_select m_type;
        /**
         */
        IfcGeometricSetSelect_union m_IfcGeometricSetSelect_union;

    };

}

#endif // IFC2X3_IFCGEOMETRICSETSELECT_H
