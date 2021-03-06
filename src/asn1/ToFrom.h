/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_cpdlc-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ToFrom_H_
#define	_ToFrom_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ToFrom {
	ToFrom_to	= 0,
	ToFrom_from	= 1
} e_ToFrom;

/* ToFrom */
typedef long	 ToFrom_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ToFrom;
asn_struct_free_f ToFrom_free;
asn_struct_print_f ToFrom_print;
asn_constr_check_f ToFrom_constraint;
ber_type_decoder_f ToFrom_decode_ber;
der_type_encoder_f ToFrom_encode_der;
xer_type_decoder_f ToFrom_decode_xer;
xer_type_encoder_f ToFrom_encode_xer;
per_type_decoder_f ToFrom_decode_uper;
per_type_encoder_f ToFrom_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ToFrom_H_ */
#include "asn_internal.h"
