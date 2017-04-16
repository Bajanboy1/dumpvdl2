/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_LongitudeDirection_H_
#define	_LongitudeDirection_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LongitudeDirection {
	LongitudeDirection_east	= 0,
	LongitudeDirection_west	= 1
} e_LongitudeDirection;

/* LongitudeDirection */
typedef long	 LongitudeDirection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudeDirection;
asn_struct_free_f LongitudeDirection_free;
asn_struct_print_f LongitudeDirection_print;
asn_constr_check_f LongitudeDirection_constraint;
ber_type_decoder_f LongitudeDirection_decode_ber;
der_type_encoder_f LongitudeDirection_encode_der;
xer_type_decoder_f LongitudeDirection_decode_xer;
xer_type_encoder_f LongitudeDirection_encode_xer;
per_type_decoder_f LongitudeDirection_decode_uper;
per_type_encoder_f LongitudeDirection_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudeDirection_H_ */
#include <asn_internal.h>
