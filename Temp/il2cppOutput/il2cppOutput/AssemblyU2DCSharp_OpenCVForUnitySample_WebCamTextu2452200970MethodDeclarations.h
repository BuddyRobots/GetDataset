#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Parameters_t2452200970;
struct Parameters_t2452200970_marshaled_pinvoke;

extern "C" void Parameters_t2452200970_marshal_pinvoke(const Parameters_t2452200970& unmarshaled, Parameters_t2452200970_marshaled_pinvoke& marshaled);
extern "C" void Parameters_t2452200970_marshal_pinvoke_back(const Parameters_t2452200970_marshaled_pinvoke& marshaled, Parameters_t2452200970& unmarshaled);
extern "C" void Parameters_t2452200970_marshal_pinvoke_cleanup(Parameters_t2452200970_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Parameters_t2452200970;
struct Parameters_t2452200970_marshaled_com;

extern "C" void Parameters_t2452200970_marshal_com(const Parameters_t2452200970& unmarshaled, Parameters_t2452200970_marshaled_com& marshaled);
extern "C" void Parameters_t2452200970_marshal_com_back(const Parameters_t2452200970_marshaled_com& marshaled, Parameters_t2452200970& unmarshaled);
extern "C" void Parameters_t2452200970_marshal_com_cleanup(Parameters_t2452200970_marshaled_com& marshaled);
