// Copyright (c) 2009, Object Computing, Inc.
// All rights reserved.
// See the file license.txt for licensing information.
#ifdef _MSC_VER
# pragma once
#endif
#ifndef FIELDINT32_H
#define FIELDINT32_H
#include "Field.h"
namespace QuickFAST{
  namespace Messages{
    /// @brief A field containing a signed 32 bit integer
    ///
    /// In the XML template file this field is described as &lt;int32>
    class QuickFAST_Export FieldInt32 : public Field{

      /// @brief Construct the field from an initial value
      /// @param value the value to be stored in the field
      explicit FieldInt32(int32 value);
      /// @brief Construct a NULL field
      FieldInt32();
    public:
      static FieldCPtr create(int32 value);
      /// @brief Construct a NULL field (not an empty string)
      /// @param file is set to point to the created field
      static FieldCPtr createNull();

      /// @brief a typical virtual destructor.
      virtual ~FieldInt32();
      /// @brief change value
      /// @param value the new value for the field
      void setValue(int32 value);

      // implement selected virtual methods from Field
      virtual Field::FieldType getType()const;
      virtual int32 toInt32() const;
    private:
      int32 value_;
    };
  }
}
#endif // FIELDINT32_H