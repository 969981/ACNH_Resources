
uint FUN_0285e924(uint param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long local_e0;
  undefined8 local_d8;
  undefined **local_48;
  undefined8 uStack_40;
  uint local_34;
  
  local_34 = param_1;
  if (((DAT_055a4290 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_055a4290), iVar3 != 0)) {
    DAT_055a4260 = &PTR_LAB_048f9770;
    DAT_055a4268 = &DAT_040947d9;
    DAT_055a4270 = &PTR_LAB_048f9770;
    DAT_055a4278 = &DAT_040c3cf0;
    DAT_055a4280 = &PTR_LAB_048f9770;
    DAT_055a4288 = &DAT_040c8ea8;
    __cxa_guard_release(&DAT_055a4290);
  }
  plVar1 = (long *)(&DAT_055a4260 + (ulong)local_34 * 2);
  if (2 < local_34) {
    plVar1 = (long *)&DAT_055a4260;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  FUN_0074fda4(&local_e0,"ImmQ_%s_Complete",plVar1[1]);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  local_48 = &PTR_LAB_048f9770;
  uStack_40 = local_d8;
  uVar4 = FUN_0273f0a0(&local_48);
  if ((uVar4 & 1) == 0) {
    plVar1 = (long *)(&DAT_055a4260 + (ulong)local_34 * 2);
    if (2 < local_34) {
      plVar1 = (long *)&DAT_055a4260;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    FUN_0074fda4(&local_e0,"ImmQ_%s_SetHousing",plVar1[1]);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    local_48 = &PTR_LAB_048f9770;
    uStack_40 = local_d8;
    uVar4 = FUN_0273f0a0(&local_48);
    if ((uVar4 & 1) == 0) {
      plVar1 = (long *)(&DAT_055a4260 + (ulong)local_34 * 2);
      if (2 < local_34) {
        plVar1 = (long *)&DAT_055a4260;
      }
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_0074fda4(&local_e0,"ImmQ_%s_GetHousing",plVar1[1]);
      (**(code **)(local_e0 + 0x18))(&local_e0);
      local_48 = &PTR_LAB_048f9770;
      uStack_40 = local_d8;
      uVar2 = FUN_0273f0a0(&local_48);
      uVar2 = uVar2 & 1;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

