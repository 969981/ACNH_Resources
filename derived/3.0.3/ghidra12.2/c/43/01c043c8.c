
void FUN_01c043c8(long *param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined **local_48;
  undefined4 local_40;
  int local_38;
  uint local_14;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) {
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0x2c);
  if (iVar1 == 2) {
    plVar3 = *(long **)(lVar5 + 0x228);
  }
  else if (iVar1 == 1) {
    plVar3 = *(long **)(lVar5 + 0x220);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    plVar3 = *(long **)(lVar5 + 0x218);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar5 = (**(code **)(*plVar3 + 0x228))();
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *param_1;
  local_38 = 0;
  iVar1 = *(int *)(lVar6 + 0x8c);
  if (iVar1 == 3) {
    pbVar7 = (byte *)(lVar6 + 0x9e);
  }
  else if (iVar1 == 2) {
    pbVar7 = (byte *)(lVar6 + 0x9b);
  }
  else {
    if (iVar1 != 1) {
      bVar4 = 0;
      goto LAB_01c04494;
    }
    pbVar7 = (byte *)(lVar6 + 0x96);
  }
  bVar4 = 0;
  if (*pbVar7 < 0x2f) {
    bVar4 = *pbVar7;
  }
LAB_01c04494:
  FUN_01b97520(&local_48,bVar4);
  plVar3 = *(long **)(lVar5 + 0x48);
  if (plVar3 != (long *)0x0) {
    local_48 = &PTR_LAB_04a3ee98;
    bVar2 = local_38 != 1;
    local_14 = 1;
    if (!bVar2) {
      local_14 = 2;
    }
    local_40 = 0x38;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
    (**(code **)(plVar3[3] + 0x398))(plVar3[1],&local_14);
    local_48 = &PTR_LAB_04a3ee98;
    local_40 = 0x36;
    local_14 = (uint)bVar2;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
    (**(code **)(plVar3[3] + 0x378))(plVar3[1],&local_14);
  }
  return;
}

