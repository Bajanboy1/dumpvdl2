/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationFramework"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RelativeDistinguishedName_H_
#define	_RelativeDistinguishedName_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SET_OF.h>
#include <constr_SET_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AttributeTypeAndValue;

/* RelativeDistinguishedName */
typedef struct RelativeDistinguishedName {
	A_SET_OF(struct AttributeTypeAndValue) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RelativeDistinguishedName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RelativeDistinguishedName;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AttributeTypeAndValue.h"

#endif	/* _RelativeDistinguishedName_H_ */
#include <asn_internal.h>
