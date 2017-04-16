/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_LatLonReportingPoints_H_
#define	_LatLonReportingPoints_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LatitudeReportingPoints.h"
#include "LongitudeReportingPoints.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LatLonReportingPoints_PR {
	LatLonReportingPoints_PR_NOTHING,	/* No components present */
	LatLonReportingPoints_PR_latitudeReportingPoints,
	LatLonReportingPoints_PR_longitudeReportingPoints
} LatLonReportingPoints_PR;

/* LatLonReportingPoints */
typedef struct LatLonReportingPoints {
	LatLonReportingPoints_PR present;
	union LatLonReportingPoints_u {
		LatitudeReportingPoints_t	 latitudeReportingPoints;
		LongitudeReportingPoints_t	 longitudeReportingPoints;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LatLonReportingPoints_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LatLonReportingPoints;

#ifdef __cplusplus
}
#endif

#endif	/* _LatLonReportingPoints_H_ */
#include <asn_internal.h>
