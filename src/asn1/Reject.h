/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMADSCAPDUVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_pmadsc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_Reject_H_
#define	_Reject_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ContractType.h"
#include "ICReject.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Reject */
typedef struct Reject {
	ContractType_t	*contract_type	/* OPTIONAL */;
	ICReject_t	 ic_reject;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Reject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Reject;

#ifdef __cplusplus
}
#endif

#endif	/* _Reject_H_ */
#include "asn_internal.h"
