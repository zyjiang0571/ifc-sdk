#ifndef IFC2X3_IFCEDGE_H
#define IFC2X3_IFCEDGE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcTopologicalRepresentationItem.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcVertex;

    /**
     * Generated class for the IfcEdge Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcEdge : public IfcTopologicalRepresentationItem {
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
         * Gets the value of the explicit attribute 'EdgeStart'.
         * 
         */
        virtual IfcVertex *getEdgeStart();
        /**
         * (const) Returns the value of the explicit attribute 'EdgeStart'.
         * 
         * @return the value of the explicit attribute 'EdgeStart'
         */
        virtual const IfcVertex *getEdgeStart() const;
        /**
         * Sets the value of the explicit attribute 'EdgeStart'.
         * 
         * @param value
         */
        virtual void setEdgeStart(const Step::RefPtr< IfcVertex > &value);
        /**
         * unset the attribute 'EdgeStart'.
         * 
         */
        virtual void unsetEdgeStart();
        /**
         * Test if the attribute 'EdgeStart' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEdgeStart() const;
        /**
         * Gets the value of the explicit attribute 'EdgeEnd'.
         * 
         */
        virtual IfcVertex *getEdgeEnd();
        /**
         * (const) Returns the value of the explicit attribute 'EdgeEnd'.
         * 
         * @return the value of the explicit attribute 'EdgeEnd'
         */
        virtual const IfcVertex *getEdgeEnd() const;
        /**
         * Sets the value of the explicit attribute 'EdgeEnd'.
         * 
         * @param value
         */
        virtual void setEdgeEnd(const Step::RefPtr< IfcVertex > &value);
        /**
         * unset the attribute 'EdgeEnd'.
         * 
         */
        virtual void unsetEdgeEnd();
        /**
         * Test if the attribute 'EdgeEnd' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testEdgeEnd() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcEdge(Step::Id id, Step::SPFData *args);
        virtual ~IfcEdge();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcEdge &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcVertex > m_edgeStart;
        /**
         */
        Step::RefPtr< IfcVertex > m_edgeEnd;

    };

}

#endif // IFC2X3_IFCEDGE_H
