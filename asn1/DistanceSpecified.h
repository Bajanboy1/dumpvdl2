/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_DistanceSpecified_H_
#define	_DistanceSpecified_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DistanceSpecifiedNm.h"
#include "DistanceSpecifiedKm.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DistanceSpecified_PR {
	DistanceSpecified_PR_NOTHING,	/* No components present */
	DistanceSpecified_PR_distanceSpecifiedNm,
	DistanceSpecified_PR_distanceSpecifiedKm
} DistanceSpecified_PR;

/* DistanceSpecified */
typedef struct DistanceSpecified {
	DistanceSpecified_PR present;
	union DistanceSpecified_u {
		DistanceSpecifiedNm_t	 distanceSpecifiedNm;
		DistanceSpecifiedKm_t	 distanceSpecifiedKm;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DistanceSpecified_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DistanceSpecified;

#ifdef __cplusplus
}
#endif

#endif	/* _DistanceSpecified_H_ */
#include <asn_internal.h>
