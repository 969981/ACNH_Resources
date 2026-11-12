
void FUN_007c64e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  float fVar7;
  undefined4 uVar8;
  undefined *local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb30a0;
  puVar1 = PTR_DAT_04bb2020;
  local_34 = 0;
  lVar5 = *(long *)PTR_DAT_04bb30a0;
  if (*(int *)(lVar5 + 0x6533c) < 1) {
    if (0 < *(int *)(lVar5 + 0x65340)) {
      local_34 = 2;
    }
  }
  else {
    local_34 = 1;
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "WeatherType";
  if ((*(int *)(param_1 + 0x48) != 0) && (plVar4 = *(long **)(param_1 + 8), plVar4 != (long *)0x0))
  {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_48,local_34);
    lVar5 = *(long *)puVar2;
  }
  cVar6 = *(char *)(lVar5 + 0x653dc);
  if (cVar6 == '\0') {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(lVar5 + 0x653c0);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "WindPower";
  if ((*(int *)(param_1 + 0x48) != 0) && (plVar4 = *(long **)(param_1 + 8), plVar4 != (long *)0x0))
  {
    (**(code **)(*plVar4 + 0x30))(fVar7 / 5.0,plVar4,&local_48);
    lVar5 = *(long *)puVar2;
    cVar6 = *(char *)(lVar5 + 0x653dc);
  }
  if (cVar6 == '\0') {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(lVar5 + 0x653bc);
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "WindPowerUniform";
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 == (long *)0x0) {
      uVar8 = *(undefined4 *)(*(long *)PTR_DAT_04bb26a8 + 0x19df5c);
      plVar4 = *(long **)(param_1 + 8);
    }
    else {
      (**(code **)(*plVar4 + 0x30))(fVar7 / 5.0,plVar4,&local_48);
      uVar8 = *(undefined4 *)(*(long *)PTR_DAT_04bb26a8 + 0x19df5c);
      if (*(int *)(param_1 + 0x48) == 0) goto LAB_007c6674;
      plVar4 = *(long **)(param_1 + 8);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = puVar1 + 0x10;
      pcStack_40 = "WindPowerSwayingTreeVelocity";
      (**(code **)(*plVar4 + 0x30))(uVar8,plVar4,&local_48);
    }
  }
LAB_007c6674:
  if (*(long *)PTR_DAT_04bb39b0 != 0) {
    local_48 = puVar1 + 0x10;
    pcStack_40 = "IsSharePlay";
    if ((*(int *)(param_1 + 0x48) != 0) && (plVar4 = *(long **)(param_1 + 8), plVar4 != (long *)0x0)
       ) {
      (**(code **)(*plVar4 + 0x28))
                (plVar4,&local_48,*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0);
    }
  }
  if ((*(long *)PTR_DAT_04bb2808 == 0) ||
     (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar5 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(lVar5 + 0x1b0) == 3;
  }
  local_48 = puVar1 + 0x10;
  pcStack_40 = "IsCloseFade";
  if ((*(int *)(param_1 + 0x48) != 0) && (plVar4 = *(long **)(param_1 + 8), plVar4 != (long *)0x0))
  {
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_48,bVar3);
  }
  return;
}

