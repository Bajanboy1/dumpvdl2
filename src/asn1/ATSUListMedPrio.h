/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ATSUListMedPrio_H_
#define	_ATSUListMedPrio_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FacilityDesignation.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ATSUListMedPrio */
typedef FacilityDesignation_t	 ATSUListMedPrio_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ATSUListMedPrio;
asn_struct_free_f ATSUListMedPrio_free;
asn_struct_print_f ATSUListMedPrio_print;
asn_constr_check_f ATSUListMedPrio_constraint;
ber_type_decoder_f ATSUListMedPrio_decode_ber;
der_type_encoder_f ATSUListMedPrio_encode_der;
xer_type_decoder_f ATSUListMedPrio_decode_xer;
xer_type_encoder_f ATSUListMedPrio_encode_xer;
per_type_decoder_f ATSUListMedPrio_decode_uper;
per_type_encoder_f ATSUListMedPrio_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ATSUListMedPrio_H_ */
#include "asn_internal.h"
