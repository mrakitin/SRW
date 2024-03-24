/************************************************************************//**
 * File: srercode.h
 * Description: Error and Warning Codes (header)
 * Project: Synchrotron Radiation Workshop
 * First release: 2000
 *
 * Copyright (C) European Synchrotron Radiation Facility, Grenoble, France
 * All Rights Reserved
 *
 * @author O.Chubar, P.Elleaume
 * @version 1.0
 ***************************************************************************/

#ifndef __SRERCODE_H
#define __SRERCODE_H

//-------------------------------------------------------------------------
/* Error codes */

#define FIRST_ERR_SRWDLL 23000

#if defined(__IGOR_PRO__)
#include "srigintr.h"
#else
#ifndef FIRST_XOP_ERR
#define FIRST_XOP_ERR FIRST_ERR_SRWDLL
#endif
#endif

#define OLD_IGOR 1 + FIRST_XOP_ERR
#define NON_EXISTENT_WAVE 2 + FIRST_XOP_ERR
#define NEEDS_3D_WAVE 3 + FIRST_XOP_ERR

#define BAD_ELECTRON_ENERGY 4 + FIRST_XOP_ERR
#define NT_FP32_WAVE_REQUIRED 5 + FIRST_XOP_ERR
#define BAD_EL_BEAM_WAVE_FORMAT 6 + FIRST_XOP_ERR
#define BAD_MAGN_FIELD_WAVE_FORMAT 7 + FIRST_XOP_ERR
#define MEMORY_ALLOCATION_FAILURE 8 + FIRST_XOP_ERR
#define UNEQUAL_BX_BZ_DEFINITION_LIMITS 9 + FIRST_XOP_ERR
#define WAVELENGTH_SHOULD_BE_POSITIVE 10 + FIRST_XOP_ERR
#define BAD_OBS_WAVE_FORMAT 11 + FIRST_XOP_ERR
#define BAD_RAD_INT_WAVE_FORMAT 12 + FIRST_XOP_ERR
#define BAD_RAD_INT_METH_VALUE 13 + FIRST_XOP_ERR
#define BAD_PREC_OR_STEP_VALUE 14 + FIRST_XOP_ERR
#define INCONSISTENT_RAD_INT_LIMITS 15 + FIRST_XOP_ERR
#define BAD_STOKES_WAVE_FORMAT 16 + FIRST_XOP_ERR
#define NT_FP64_WAVE_REQUIRED 17 + FIRST_XOP_ERR
#define BAD_FIELD_FOURIER_WAVE_FORMAT 18 + FIRST_XOP_ERR
#define NT_CMPLX_WAVE_REQUIRED 19 + FIRST_XOP_ERR
#define NT_FP64_OR_NT_CMPLX_WAVE_REQUIRED 20 + FIRST_XOP_ERR
#define BAD_RAD_OUTPUT_WAVE_DIMENSIONS 21 + FIRST_XOP_ERR
#define SR_COMP_PROC_ABORTED 22 + FIRST_XOP_ERR
#define NOT_ENOUGH_MEMORY_FOR_SR_COMP 23 + FIRST_XOP_ERR

#define BAD_RAD_INT_TERMINATIONS 24 + FIRST_XOP_ERR
#define EL_TRAJ_TOO_CLOSE_TO_OBSERV 25 + FIRST_XOP_ERR
#define LONGIT_COORD_OF_OBS_POINT_WITHIN_RAD_INTEGR_LIMITS 26 + FIRST_XOP_ERR
#define ELEC_BEAM_IS_NOT_ULTRARELATIVISTIC 27 + FIRST_XOP_ERR
#define S0_OUT_OF_FIELD_DEFINITION_LIMITS 28 + FIRST_XOP_ERR
#define WAVELENGTH_COMPARABLE_WITH_OBS_DISTANCE 29 + FIRST_XOP_ERR
#define INSTANT_OBS_ANGLES_TOO_LARGE 30 + FIRST_XOP_ERR

#define TEXT_WAVE_REQUIRED 31 + FIRST_XOP_ERR
#define IMPROPER_RADIATION_STRUCTURE 32 + FIRST_XOP_ERR
#define NEED_ANOTHER_RAD_PRESENTATION 33 + FIRST_XOP_ERR

#define NUMERIC_WAVE_REQUIRED 34 + FIRST_XOP_ERR
#define NEEDS_2D_WAVE 35 + FIRST_XOP_ERR
#define WAVE_SIZES_SHOULD_BE_EVEN 36 + FIRST_XOP_ERR
#define NT_FP32_COMPLEX_WAVE_REQUIRED 37 + FIRST_XOP_ERR
#define TEXT_WAVE_1D_REQUIRED 38 + FIRST_XOP_ERR
#define UNKNOWN_OPTICAL_ELEMENT 39 + FIRST_XOP_ERR
#define ERROR_IN_FFT 40 + FIRST_XOP_ERR
#define NEEDS_1D_OR_2D_WAVE 41 + FIRST_XOP_ERR
#define NEEDS_WAVE_OF_EQUEAL_SIZES 42 + FIRST_XOP_ERR
#define ERROR_IN_OPTICAL_ELEMENT_DEFINITION 43 + FIRST_XOP_ERR
#define NEEDS_1D_WAVE 44 + FIRST_XOP_ERR
#define NEEDS_MORE_THAN_ONE_HOR_AND_VERT_OBS_POINT 45 + FIRST_XOP_ERR
#define PROP_TEST_CONSTRAINTS 46 + FIRST_XOP_ERR

#define ERROR_IN_READING_NUMBER_FROM_TEXT_WAVE 47 + FIRST_XOP_ERR
#define CAN_NOT_FIND_HARMONIC_WAVE 48 + FIRST_XOP_ERR
#define IMPROPER_STOKES_STRUCTURE 49 + FIRST_XOP_ERR
#define IMPROPER_FIELD_HARMONIC_STRUCTURE 50 + FIRST_XOP_ERR
#define MAGNET_STRUCTURE_NOT_IMPLEMENTED_YET 51 + FIRST_XOP_ERR

#define ZERO_DIVERG_AND_SLIT_SIZE 52 + FIRST_XOP_ERR

#define INTERNAL_ERROR_AT_LINEAR_FITTING 53 + FIRST_XOP_ERR
#define IMPROPER_OPTICAL_COMPONENT_STRUCTURE 54 + FIRST_XOP_ERR

#define IMPROPER_POWER_DENSITY_STRUCTURE 55 + FIRST_XOP_ERR
#define CAN_NOT_COMPUTE_RADIATION_INTEGRAL 56 + FIRST_XOP_ERR

#define NT_FP64_COMPLEX_WAVE_REQUIRED 57 + FIRST_XOP_ERR
#define PROP_CAN_NOT_BE_DONE_DUE_TO_MEMORY_LIMIT 58 + FIRST_XOP_ERR
#define CAN_NOT_PROPAGATE_1D_RAD 59 + FIRST_XOP_ERR
#define CAN_NOT_PROPAGATE_SEVERAL_PHOTON_ENERGIES 60 + FIRST_XOP_ERR

#define DENSITY_WALUE_NEEDED 61 + FIRST_XOP_ERR
#define BAD_MATER_Z_VALUE 62 + FIRST_XOP_ERR

#define NT_FP32_OR_NT_FP64_WAVE_REQUIRED 63 + FIRST_XOP_ERR
#define WAVE_1D_OR_2D_REQUIRED 64 + FIRST_XOP_ERR

#define THIN_EL_BEAM_WAS_NOT_SET_UP 65 + FIRST_XOP_ERR
#define THICK_EL_BEAM_WAS_NOT_SET_UP 66 + FIRST_XOP_ERR

#define NEGATIVE_NUM_INTEG_OF_MODIF_BESSEL_FUNC 67 + FIRST_XOP_ERR
#define MAG_FIELD_CAN_NOT_BE_ZERO 68 + FIRST_XOP_ERR

#define BAD_ISOTR_SRC_WAVE_FORMAT 69 + FIRST_XOP_ERR
#define BAD_SOURCE_POWER 70 + FIRST_XOP_ERR
#define BAD_SOURCE_PHOTON_NUM 71 + FIRST_XOP_ERR
#define IMPROPER_GSN_BEAM_STRUCTURE 72 + FIRST_XOP_ERR
#define BAD_WAIST_SIZE 73 + FIRST_XOP_ERR
#define BAD_MODE_ORDER 74 + FIRST_XOP_ERR
#define BAD_PHOTON_NUMBER 75 + FIRST_XOP_ERR
#define BAD_POLAR_SPECIFIER 76 + FIRST_XOP_ERR

#define IMPROPER_TRAJECTORY_STRUCTURE 77 + FIRST_XOP_ERR
#define IMPROPER_TRAJECTORY_COMPONENT_WAVE 78 + FIRST_XOP_ERR
#define ZERO_OR_NEGATIVE_ELECTRON_ENERGY 79 + FIRST_XOP_ERR
#define TRJ_CMPN_WERE_NOT_SETUP 80 + FIRST_XOP_ERR
#define CONTRADICTORY_TRJ_CMPN_DEFINITION 81 + FIRST_XOP_ERR
#define S0_OUT_OF_TRAJECTORY_DEFINITION_LIMITS 82 + FIRST_XOP_ERR

#define TOO_MANY_MAG_FIELD_HARMONICS 83 + FIRST_XOP_ERR
#define UNKNOWN_MAGNET_ELEMENT 84 + FIRST_XOP_ERR

#define GENESIS_NO_WIGGLER_FIELD 85 + FIRST_XOP_ERR
#define GENESIS_INVALID_WIGGLER 86 + FIRST_XOP_ERR
#define GENESIS_WIGGLER_PERIOD_MUST_BE_POSITIVE 87 + FIRST_XOP_ERR
#define GENESIS_ELECTRON_BEAM_ENERGY_TOO_SMALL 88 + FIRST_XOP_ERR
#define GENESIS_NUMBER_OF_PARTICLES_IS_NOT_MULTIPLE_OF_8 89 + FIRST_XOP_ERR
#define GENESIS_RADIATION_WAVELENGTH_MUST_BE_POSITIVE 90 + FIRST_XOP_ERR
#define GENESIS_RADIATION_POWER_MUST_BE_POSITIVE 91 + FIRST_XOP_ERR
#define GENESIS_DELZ_CONSTRAINT 92 + FIRST_XOP_ERR
#define GENESIS_ISCAN_CONSTRAINT 93 + FIRST_XOP_ERR
#define GENESIS_PARAMETER_SCAN_NOT_DEFINED 94 + FIRST_XOP_ERR
#define GENESIS_TIME_DEPENDENCY_AND_SCAN_ARE_SELECTED_SIMULT 95 + FIRST_XOP_ERR
#define GENESIS_STEP_SIZE_GREATER_THAN_SLICE_SEPARATION 96 + FIRST_XOP_ERR
#define GENESIS_NWIG_MUST_BE_POSITIVE 97 + FIRST_XOP_ERR
#define GENESIS_FOC_LENGTH_NOT_INTEGER_OF_STEPSIZE 98 + FIRST_XOP_ERR
#define GENESIS_DEFOC_LENGTH_NOT_INTEGER_OF_STEPSIZE 99 + FIRST_XOP_ERR
#define GENESIS_DRIFT_LENGTH_NOT_INTEGER_OF_STEPSIZE 100 + FIRST_XOP_ERR
#define GENESIS_START_OF_FODO_NOT_INTEGER_OF_STEPSIZE 101 + FIRST_XOP_ERR
#define GENESIS_SLICE_SEPAR_NOT_INTEGER_OF_STEPSIZE 102 + FIRST_XOP_ERR
#define GENESIS_TOO_MANY_INTEGRATION_STEPS 103 + FIRST_XOP_ERR
#define GENESIS_TOO_MANY_SLICES 104 + FIRST_XOP_ERR
#define GENESIS_GRID_POINTS_OF_MESH_NOT_ODD 105 + FIRST_XOP_ERR

#define NON_COMPATIBLE_WAVEFRONT_AND_STOKES_STRUCTS 106 + FIRST_XOP_ERR
#define ELECTRON_BEAM_WAS_NOT_SET_UP 107 + FIRST_XOP_ERR
#define OBS_DIST_SHOULD_BE_POSITIVE 108 + FIRST_XOP_ERR
#define PHOT_EN_SHOULD_BE_POSITIVE 109 + FIRST_XOP_ERR
#define MEMORY_ALLOCATION_FAILURE_SASE 110 + FIRST_XOP_ERR

#define INCORRECT_ARGUMENTS_3DVIEWING 111 + FIRST_XOP_ERR
#define INCORRECT_ARGUMENTS 112 + FIRST_XOP_ERR
#define INCORRECT_ARGUMENTS_ARRAY 113 + FIRST_XOP_ERR
#define SR_OBJECT_DOES_NOT_EXIST 114 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_MAG 115 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_EBEAM 116 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_WFR_SMP 117 + FIRST_XOP_ERR
#define INCORRECT_PARAMS_SR_COMP 118 + FIRST_XOP_ERR
#define SR_COMP_NOT_IMPLEMENTED_FOR_GIVEN_MAG_FLD 119 + FIRST_XOP_ERR
#define INCORRECT_PARAMS_SR_COMP_PREC 120 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_WAVEFRONT 121 + FIRST_XOP_ERR
#define INCORRECT_PARAMS_WFR_COMPON_EXTRACT 122 + FIRST_XOP_ERR
#define INCORRECT_MAG_HARM_NUMBER 123 + FIRST_XOP_ERR
#define INCORRECT_MAG_FIELD_PER 124 + FIRST_XOP_ERR
#define INCORRECT_PER_MAG_FIELD_LENGTH 125 + FIRST_XOP_ERR
#define INCORRECT_NUMBER_OF_HARMONICS 126 + FIRST_XOP_ERR
#define INCORRECT_WAVEFRONT_STRUCTURE 127 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_GAUSBEAM 128 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_DRIFT_SPACE 129 + FIRST_XOP_ERR
#define INCORRECT_RELATIVE_PRECISION 130 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_MAG_TRANSV_UNIF 131 + FIRST_XOP_ERR
#define MATH_INTERP_STRUCT_WAS_NOT_SETUP 132 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_MAG_PER 133 + FIRST_XOP_ERR
#define SR_REFERENCE_DOES_NOT_EXIST 134 + FIRST_XOP_ERR
#define INCORRECT_GRID_FOR_WAVEFRONT 135 + FIRST_XOP_ERR
#define CAN_NOT_FIND_MAG_FIELD_WAVE 136 + FIRST_XOP_ERR
#define EMPTY_MAG_FIELD_CONTAINER 137 + FIRST_XOP_ERR
#define NO_MAG_FIELD_DEFINED 138 + FIRST_XOP_ERR
#define NO_STOKES_STRUCTURE_SUPPLIED 139 + FIRST_XOP_ERR
#define OVERLAPPING_MAG_ELEMS 140 + FIRST_XOP_ERR
#define INCORRECT_STEP_OR_RELATIVE_PRECISION 141 + FIRST_XOP_ERR
#define TOO_LARGE_LONGITUD_INTEG_STEP 142 + FIRST_XOP_ERR
#define INCORRECT_INT_LIMITS_SR_POW_COMP 143 + FIRST_XOP_ERR
#define INCORRECT_PARAMS_WFR_COMPON_INTEG 144 + FIRST_XOP_ERR
#define INCORRECT_ELECTRON_BEAM_DEFINITION 145 + FIRST_XOP_ERR
#define FAILED_TO_CREATE_WAVE 146 + FIRST_XOP_ERR
#define OBJECT_IS_NOT_OPT_ELEM 147 + FIRST_XOP_ERR
#define CAN_NOT_EXTRACT_TRANSM_CHARACT_OF_OPT_ELEM 148 + FIRST_XOP_ERR
#define TRANSM_CHARACT_NOT_DEFINED 149 + FIRST_XOP_ERR
#define NUM_POINTS_SHOULD_BE_POSITIVE 150 + FIRST_XOP_ERR
#define SRW_GM_RK_MAX_NUM_STEPS_REACHED 151 + FIRST_XOP_ERR
#define SRW_GM_RK_STEP_SIZE_TOO_SMALL 152 + FIRST_XOP_ERR 
#define INCORRECT_GAUSS_BEAM_ENERGY 153 + FIRST_XOP_ERR 
#define TIME_DOMAIN_RAD_STRUCT_REQUIRED 154 + FIRST_XOP_ERR 
#define INCORRECT_WAVEFRONT_REPRES_ID 155 + FIRST_XOP_ERR 
#define GENESIS_INCONSISTENT_NSLICE_NPART 156 + FIRST_XOP_ERR
#define INCORRECT_GAUSS_CENTERS_SIGMAS 157 + FIRST_XOP_ERR
#define TOO_SHORT_WAVE 158 + FIRST_XOP_ERR
#define BAD_OBS_SURF_WAVE 159 + FIRST_XOP_ERR

#define SRWL_NO_FUNC_ARG_DATA 160 + FIRST_XOP_ERR
#define SRWL_MAG_FLD_UNRECOGN 161 + FIRST_XOP_ERR
#define SRWL_INCORRECT_TRJ_STRUCT 162 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_TRJ_COMP 163 + FIRST_XOP_ERR
//#define SRWL_INCORRECT_INIT_COND_FOR_TRJ_COMP 164 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_SR_COMP 164 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_GAUS_BEAM_COMP 165 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_INT_EXTR 166 + FIRST_XOP_ERR
#define SRWL_INCORRECT_WFR_STRUCT 167 + FIRST_XOP_ERR
#define SRWL_WFR_EXT_MODIF_FAILED 168 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_RESIZE 169 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_CHANGE_REP 170 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_WFR_PROP 171 + FIRST_XOP_ERR
#define SRWL_WFR_EXT_FUNC_NOT_DEFINED 172 + FIRST_XOP_ERR
//173, 174 are already taken:
#define IMPROPER_OPTICAL_COMPONENT_ORIENT 173 + FIRST_XOP_ERR
#define IMPROPER_OPTICAL_COMPONENT_SIM_METH 174 + FIRST_XOP_ERR

#define SRWL_INCORRECT_PARAM_FOR_SR_POW_COMP 175 + FIRST_XOP_ERR

#define IMPROPER_OPTICAL_COMPONENT_ELLIPSOID 176 + FIRST_XOP_ERR
#define FAILED_DETERMINE_OPTICAL_AXIS 177 + FIRST_XOP_ERR
#define FAILED_INTERPOL_ELEC_FLD 178 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_MAG_FLD_COMP 179 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_FFT 180 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_CONV_WITH_GAUS 181 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_CONV_MAG_2_PER 182 + FIRST_XOP_ERR
#define IMPROPER_OPTICAL_COMPONENT_MIRROR_SPHERE 183 + FIRST_XOP_ERR
//#define IMPROPER_OPTICAL_COMPONENT_MIRROR_USE_CASE 184 + FIRST_XOP_ERR
#define IMPROPER_OPTICAL_COMPONENT_CRYSTAL_USE_CASE 184 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_UND_FLD_INTERP_IND_SEARCH 185 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_SPHER_WAVE_COMP 186 + FIRST_XOP_ERR

#define CAN_NOT_FIND_IND_FOR_INTERP 187 + FIRST_XOP_ERR
#define SRWL_EXT_ARRAY_ALLOC_FAILED 188 + FIRST_XOP_ERR
#define CAN_NOT_EXTRACT_MUT_INT 189 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_INT_STAT 190 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_INT_PROC 191 + FIRST_XOP_ERR

#define IMPROPER_OPTICAL_COMPONENT_PARABOLOID 192 + FIRST_XOP_ERR
#define RESIZE_NOT_SUPPORTED_WITH_SUCH_PARAMS 193 + FIRST_XOP_ERR
#define SRWL_INCORRECT_PARAM_FOR_WFR_PROC 194 + FIRST_XOP_ERR
#define INCONSISTENT_PARAMS_MI_PROC 195 + FIRST_XOP_ERR

#define IMPROPER_OPTICAL_COMPONENT_HYPERBOLOID 196 + FIRST_XOP_ERR

//-------------------------------------------------------------------------
/* Warning codes */

#define SRW_WARNINGS_OFFSET -13000

#define TOO_LARGE_TAPER_PARAM 1 + SRW_WARNINGS_OFFSET
#define TOO_LARGE_OK_PHASE_SHIFT_PARAM 2 + SRW_WARNINGS_OFFSET
#define TOO_FEW_PERIODS 3 + SRW_WARNINGS_OFFSET
#define BEAM_EMITTANCE_WAS_NOT_TAKEN_INTO_ACCOUNT 4 + SRW_WARNINGS_OFFSET
#define POOR_PHASE_SHIFT_SAMPLING 5 + SRW_WARNINGS_OFFSET
#define PROPAG_PREC_REDUCED_DUE_TO_MEMORY_LIMIT 6 + SRW_WARNINGS_OFFSET
#define PROPAG_PREC_MAY_BE_LOW 7 + SRW_WARNINGS_OFFSET
#define POOR_PREC_OF_ATTEN_LEN 8 + SRW_WARNINGS_OFFSET
#define NOT_A_WIGGLER_CASE 9 + SRW_WARNINGS_OFFSET
#define SINGLE_E_EXTRACTED_INSTEAD_OF_MULTI 10 + SRW_WARNINGS_OFFSET
#define COMPUTATION_WAS_NOT_DONE_EL_TRAJ_TOO_CLOSE_TO_OBSERV 11 + SRW_WARNINGS_OFFSET
#define COMPUTATION_WAS_NOT_DONE_BAD_RAD_INT_TERMINATIONS 12 + SRW_WARNINGS_OFFSET
#define GENESIS_TOO_MANY_PARTICLES_REQUESTED 13 + SRW_WARNINGS_OFFSET
#define GENESIS_SAME_BASE_FOR_DIFFERENT_LOADING 14 + SRW_WARNINGS_OFFSET
#define GENESIS_TOO_MANY_GRID_POINTS 15 + SRW_WARNINGS_OFFSET
#define GENESIS_TOO_MANY_RADIAL_GRID_POINTS 16 + SRW_WARNINGS_OFFSET
#define GENESIS_NOT_ENOUGH_RADIAL_GRID_POINTS 17 + SRW_WARNINGS_OFFSET
#define GENESIS_TOO_MANY_LONGITUDINAL_MODES 18 + SRW_WARNINGS_OFFSET
#define TOO_LARGE_MAX_MAG_FIELD_HARMONIC_NUMBER 19 + SRW_WARNINGS_OFFSET
#define NO_MAGNETIC_FIELD_HARMONICS_FOUND 20 + SRW_WARNINGS_OFFSET
#define CAN_ONLY_EXTRACT_FLUX_VS_PHOTON_ENERGY 21 + SRW_WARNINGS_OFFSET
#define OBSERV_POINT_TOO_CLOSE_TO_INTEG_LIMITS 22 + SRW_WARNINGS_OFFSET
#define WARN_ELEC_BEAM_IS_NOT_ULTRARELATIVISTIC 23 + SRW_WARNINGS_OFFSET
#define GENESIS_RAD_HARM_CALC_NEEDS_ELEC_DISTRIB 24 + SRW_WARNINGS_OFFSET
#define ZERO_WFR_RAD_CURV_PH_TERM_NOT_TREATED 25 + SRW_WARNINGS_OFFSET
#define GPU_COMPUTATION_FAILED 26 + SRW_WARNINGS_OFFSET /*HG21032024*/

//-------------------------------------------------------------------------

#endif
