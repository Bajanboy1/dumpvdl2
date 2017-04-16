/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_PositionReport_H_
#define	_PositionReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Position.h"
#include "Time.h"
#include "Level.h"
#include "Temperature.h"
#include "Turbulence.h"
#include "Icing.h"
#include "SpeedGround.h"
#include "Humidity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Position;
struct Time;
struct Winds;
struct Speed;
struct VerticalChange;
struct Degrees;
struct Distance;
struct Level;

/* PositionReport */
typedef struct PositionReport {
	Position_t	 positioncurrent;
	Time_t	 timeatpositioncurrent;
	Level_t	 level;
	struct Position	*fixnext	/* OPTIONAL */;
	struct Time	*timeetaatfixnext	/* OPTIONAL */;
	struct Position	*fixnextplusone	/* OPTIONAL */;
	struct Time	*timeetaatdestination	/* OPTIONAL */;
	struct Time	*remainingFuel	/* OPTIONAL */;
	Temperature_t	*temperature	/* OPTIONAL */;
	struct Winds	*winds	/* OPTIONAL */;
	Turbulence_t	*turbulence	/* OPTIONAL */;
	Icing_t	*icing	/* OPTIONAL */;
	struct Speed	*speed	/* OPTIONAL */;
	SpeedGround_t	*speedground	/* OPTIONAL */;
	struct VerticalChange	*verticalChange	/* OPTIONAL */;
	struct Degrees	*trackAngle	/* OPTIONAL */;
	struct Degrees	*heading	/* OPTIONAL */;
	struct Distance	*distance	/* OPTIONAL */;
	Humidity_t	*humidity	/* OPTIONAL */;
	struct Position	*reportedWaypointPosition	/* OPTIONAL */;
	struct Time	*reportedWaypointTime	/* OPTIONAL */;
	struct Level	*reportedWaypointLevel	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionReport;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Position.h"
#include "Time.h"
#include "RemainingFuel.h"
#include "Winds.h"
#include "Speed.h"
#include "VerticalChange.h"
#include "Degrees.h"
#include "Distance.h"
#include "Level.h"

#endif	/* _PositionReport_H_ */
#include <asn_internal.h>
