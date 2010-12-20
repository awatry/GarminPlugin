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


#if !defined(FIT_ACCUMULATOR_HPP)
#define FIT_ACCUMULATOR_HPP

#include <string>
#include <vector>
#include "fit_accumulated_field.hpp"

using namespace std;

namespace fit
{

class Accumulator
{
   public: 
      FIT_UINT32 Accumulate(FIT_UINT16 mesgNum, FIT_UINT8 fieldNum, FIT_UINT8 componentNum, FIT_UINT32 value, FIT_UINT8 bits);

   private: 
      vector<AccumulatedField> fields;
};

} // namespace fit

#endif // defined(FIT_ACCUMULATOR_HPP)

