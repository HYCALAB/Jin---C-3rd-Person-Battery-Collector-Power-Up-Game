// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include <Runtime/Engine/Classes/Components/StaticMeshComponent.h>


// Set default values
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);
}

