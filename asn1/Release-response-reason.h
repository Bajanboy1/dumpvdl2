/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ACSE-1"
 * 	found in "atn-ulcs.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_Release_response_reason_H_
#define	_Release_response_reason_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Release_response_reason {
	Release_response_reason_normal	= 0,
	Release_response_reason_not_finished	= 1,
	Release_response_reason_user_defined	= 30
} e_Release_response_reason;

/* Release-response-reason */
typedef long	 Release_response_reason_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Release_response_reason;
asn_struct_free_f Release_response_reason_free;
asn_struct_print_f Release_response_reason_print;
asn_constr_check_f Release_response_reason_constraint;
ber_type_decoder_f Release_response_reason_decode_ber;
der_type_encoder_f Release_response_reason_encode_der;
xer_type_decoder_f Release_response_reason_decode_xer;
xer_type_encoder_f Release_response_reason_encode_xer;
per_type_decoder_f Release_response_reason_decode_uper;
per_type_encoder_f Release_response_reason_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Release_response_reason_H_ */
#include <asn_internal.h>
