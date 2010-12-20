////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.0Release
// Tag = $Name: AKW1_000 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_MESG_HPP)
#define FIT_MESG_HPP

#include <ostream>
#include <string>
#include <vector>
#include "fit.hpp"
#include "fit_field.hpp"

using namespace std;

namespace fit
{

class Mesg
{
   public:
      Mesg(void);
      Mesg(const Mesg &mesg);
      Mesg(Profile::MESG_INDEX index);
      Mesg(string name);
      Mesg(FIT_UINT16 num);
      FIT_BOOL IsValid(void);
      int Write(ostream &file);
      string GetName();
      FIT_UINT16 GetNum() const;
      FIT_BOOL HasField(int num);
      void AddField(Field &field);
      Field* AddField(FIT_UINT8 num);
      void SetField(Field &field);
      int GetNumFields() const;
      Field* GetFieldByIndex(FIT_UINT16 index);
      Field* GetField(FIT_UINT8 num);
      Field* GetField(string name);
      FIT_UINT8 GetFieldNumValues(FIT_UINT8 fieldNum);
      FIT_ENUM GetFieldENUMValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_BYTE GetFieldBYTEValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_SINT8 GetFieldSINT8Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT8 GetFieldUINT8Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT8Z GetFieldUINT8ZValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_SINT16 GetFieldSINT16Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT16 GetFieldUINT16Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT16Z GetFieldUINT16ZValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_SINT32 GetFieldSINT32Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT32 GetFieldUINT32Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_UINT32Z GetFieldUINT32ZValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_FLOAT32 GetFieldFLOAT32Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      FIT_FLOAT64 GetFieldFLOAT64Value(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      string GetFieldSTRINGValue(FIT_UINT8 fieldNum, FIT_UINT8 index = 0);
      void SetFieldENUMValue(FIT_UINT8 fieldNum, FIT_ENUM value, FIT_UINT8 index = 0);
      void SetFieldBYTEValue(FIT_UINT8 fieldNum, FIT_BYTE value, FIT_UINT8 index = 0);
      void SetFieldSINT8Value(FIT_UINT8 fieldNum, FIT_SINT8 value, FIT_UINT8 index = 0);
      void SetFieldUINT8Value(FIT_UINT8 fieldNum, FIT_UINT8 value, FIT_UINT8 index = 0);
      void SetFieldUINT8ZValue(FIT_UINT8 fieldNum, FIT_UINT8 value, FIT_UINT8 index = 0);
      void SetFieldSINT16Value(FIT_UINT8 fieldNum, FIT_SINT16 value, FIT_UINT8 index = 0);
      void SetFieldUINT16Value(FIT_UINT8 fieldNum, FIT_UINT16 value, FIT_UINT8 index = 0);
      void SetFieldUINT16ZValue(FIT_UINT8 fieldNum, FIT_UINT16Z value, FIT_UINT8 index = 0);
      void SetFieldSINT32Value(FIT_UINT8 fieldNum, FIT_SINT32 value, FIT_UINT8 index = 0);
      void SetFieldUINT32Value(FIT_UINT8 fieldNum, FIT_UINT32 value, FIT_UINT8 index = 0);
      void SetFieldUINT32ZValue(FIT_UINT8 fieldNum, FIT_UINT32Z value, FIT_UINT8 index = 0);
      void SetFieldFLOAT32Value(FIT_UINT8 fieldNum, FIT_FLOAT32 value, FIT_UINT8 index = 0);
      void SetFieldFLOAT64Value(FIT_UINT8 fieldNum, FIT_FLOAT64 value, FIT_UINT8 index = 0);
      void SetFieldSTRINGValue(FIT_UINT8 fieldNum, string value, FIT_UINT8 index = 0);

   private:
      const Profile::MESG* profile;
      vector<Field> fields;
};

} // namespace fit

#endif // defined(FIT_MESG_HPP)

