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

#include "encryption-engine.h"

LINPHONE_BEGIN_NAMESPACE

std::ostream &operator<< (std::ostream &stream, const EncryptionEngine & engine) {
	return stream << engine.toString();
}

std::ostream &operator<< (std::ostream &stream, const EncryptionEngine::EngineType & engineType) {
	switch (engineType) {
		case EncryptionEngine::EngineType::Undefined:
			stream << "Undefined";
			break;
		case EncryptionEngine::EngineType::LimeX3dh:
			stream << "LimeX3dh";
			break;
		default:
			stream << "Unknown";
			break;
	}

	return stream;
}

std::string EncryptionEngine::toString() const {
	std::stringstream ss;
	ss << " Encryption Engine [" << this << "] of type " << engineType;
	return ss.str();
}

LINPHONE_END_NAMESPACE