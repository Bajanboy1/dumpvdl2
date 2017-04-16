/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "LongitudeReportingPoints.h"

static asn_TYPE_member_t asn_MBR_LongitudeReportingPoints_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LongitudeReportingPoints, longitudeDirection),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_LongitudeDirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longitudeDirection"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LongitudeReportingPoints, longitudeDegrees),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_LongitudeDegrees,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"longitudeDegrees"
		},
};
static const ber_tlv_tag_t asn_DEF_LongitudeReportingPoints_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LongitudeReportingPoints_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 0 }, /* longitudeDegrees */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* longitudeDirection */
};
static asn_SEQUENCE_specifics_t asn_SPC_LongitudeReportingPoints_specs_1 = {
	sizeof(struct LongitudeReportingPoints),
	offsetof(struct LongitudeReportingPoints, _asn_ctx),
	asn_MAP_LongitudeReportingPoints_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LongitudeReportingPoints = {
	"LongitudeReportingPoints",
	"LongitudeReportingPoints",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LongitudeReportingPoints_tags_1,
	sizeof(asn_DEF_LongitudeReportingPoints_tags_1)
		/sizeof(asn_DEF_LongitudeReportingPoints_tags_1[0]), /* 1 */
	asn_DEF_LongitudeReportingPoints_tags_1,	/* Same as above */
	sizeof(asn_DEF_LongitudeReportingPoints_tags_1)
		/sizeof(asn_DEF_LongitudeReportingPoints_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LongitudeReportingPoints_1,
	2,	/* Elements count */
	&asn_SPC_LongitudeReportingPoints_specs_1	/* Additional specs */
};

