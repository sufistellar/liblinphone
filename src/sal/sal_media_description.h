/*
 * Copyright (c) 2010-2020 Belledonne Communications SARL.
 *
 * This file is part of Liblinphone.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SAL_MEDIA_DESCRIPTION_H_
#define _SAL_MEDIA_DESCRIPTION_H_

#include "ortp/rtpsession.h"
#include "sal/sal_stream_bundle.h"

typedef struct SalMediaDescription {
	int refcount;
	std::string name;
	std::string addr;
	std::string username;
	int nb_streams;
	int bandwidth;
	unsigned int session_ver;
	unsigned int session_id;
	SalStreamDir dir;
	std::vector<SalStreamDescription> streams;
	SalCustomSdpAttribute *custom_sdp_attributes;
	OrtpRtcpXrConfiguration rtcp_xr;
	std::string ice_ufrag;
	std::string ice_pwd;
	bctbx_list_t *bundles; /* list of SalStreamBundle */
	bool_t ice_lite;
	bool_t set_nortpproxy;
	bool_t accept_bundles; /* Set to TRUE if RTP bundles can be accepted during offer answer. This field has no appearance on the SDP.*/
	std::vector<bool_t> pad;
} SalMediaDescription;

#endif // ifndef _SAL_MEDIA_DESCRIPTION_H_