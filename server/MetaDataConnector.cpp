/* This file is part of ISAAC.
 *
 * ISAAC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ISAAC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ISAAC.  If not, see <http://www.gnu.org/licenses/>. */

#include "MetaDataConnector.hpp"

MetaDataConnector::MetaDataConnector()
{
	//TODO
}

void MetaDataConnector::setMaster(Master* master)
{
	this->master = master;
}

ClientRef MetaDataConnector::addClient()
{
	//TODO
	return 0;
}

errorCode MetaDataConnector::remClient(ClientRef ref)
{
	//TODO
	return 0;
}

ObserverRef MetaDataConnector::addObserver(ClientRef ref,std::string simulation)
{
	//TODO
	return 0;
}

errorCode remObserver(ObserverRef ob_ref)
{
	//TODO
	return 0;
}
