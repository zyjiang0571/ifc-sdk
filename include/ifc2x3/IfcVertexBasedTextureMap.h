#ifndef IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#define IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcVertexBasedTextureMap Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcVertexBasedTextureMap : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'TextureVertices'.
         * 
         */
        virtual List_IfcTextureVertex_3_n &getTextureVertices();
        /**
         * (const) Returns the value of the explicit attribute 'TextureVertices'.
         * 
         * @return the value of the explicit attribute 'TextureVertices'
         */
        virtual const List_IfcTextureVertex_3_n &getTextureVertices() const;
        /**
         * Sets the value of the explicit attribute 'TextureVertices'.
         * 
         * @param value
         */
        virtual void setTextureVertices(const List_IfcTextureVertex_3_n &value);
        /**
         * unset the attribute 'TextureVertices'.
         * 
         */
        virtual void unsetTextureVertices();
        /**
         * Test if the attribute 'TextureVertices' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTextureVertices() const;
        /**
         * Gets the value of the explicit attribute 'TexturePoints'.
         * 
         */
        virtual List_IfcCartesianPoint_3_n &getTexturePoints();
        /**
         * (const) Returns the value of the explicit attribute 'TexturePoints'.
         * 
         * @return the value of the explicit attribute 'TexturePoints'
         */
        virtual const List_IfcCartesianPoint_3_n &getTexturePoints() const;
        /**
         * Sets the value of the explicit attribute 'TexturePoints'.
         * 
         * @param value
         */
        virtual void setTexturePoints(const List_IfcCartesianPoint_3_n &value);
        /**
         * unset the attribute 'TexturePoints'.
         * 
         */
        virtual void unsetTexturePoints();
        /**
         * Test if the attribute 'TexturePoints' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTexturePoints() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcVertexBasedTextureMap(Step::Id id, Step::SPFData *args);
        virtual ~IfcVertexBasedTextureMap();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcVertexBasedTextureMap &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        List_IfcTextureVertex_3_n m_textureVertices;
        /**
         */
        List_IfcCartesianPoint_3_n m_texturePoints;

    };

}

#endif // IFC2X3_IFCVERTEXBASEDTEXTUREMAP_H
