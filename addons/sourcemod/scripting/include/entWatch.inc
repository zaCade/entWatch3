//----------------------------------------------------------------------------------------------------
// Purpose: SMLib
//----------------------------------------------------------------------------------------------------
stock Entity_GetTargetName(entity, String:buffer[], size)
{
	return GetEntPropString(entity, Prop_Data, "m_iName", buffer, size);
}

//----------------------------------------------------------------------------------------------------
// Purpose: SMLib
//----------------------------------------------------------------------------------------------------
stock Entity_GetParentName(entity, String:buffer[], size)
{
	return GetEntPropString(entity, Prop_Data, "m_iParent", buffer, size);
}

//----------------------------------------------------------------------------------------------------
// Purpose: SMLib
//----------------------------------------------------------------------------------------------------
stock Entity_GetHammerID(entity)
{
	return GetEntProp(entity, Prop_Data, "m_iHammerID");
}