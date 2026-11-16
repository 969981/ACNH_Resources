
void FUN_026611d0(uint param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  if (9 < param_1) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(lVar9 + 0x10);
  if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 == 0) {
      return;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar9 == 0) {
      return;
    }
  }
  lVar9 = lVar9 + (ulong)param_1 * 0x10798;
  if (*(long **)(lVar9 + 0x140) == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar9 + 0x140);
    uVar6 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*puVar10)();
    }
  }
  pbVar2 = (byte *)(*(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120));
  uVar11 = (ulong)*pbVar2;
  if ((uVar11 < 0x23) && (bVar3 = pbVar2[1], bVar3 <= (byte)PTR_DAT_04bc27f0[uVar11])) {
    uVar8 = *(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar3 & 0x1f) & 1;
  }
  else {
    uVar8 = 0;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x140) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (uVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(lVar9 + 0x140);
  if (lVar12 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      lVar12 = *(long *)(lVar9 + 0x140);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar12 == 0) goto LAB_0266135c;
    }
    plVar7 = *(long **)(lVar12 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_78 = *(undefined **)(lVar9 + 0x120);
      local_70 = *(char **)(lVar9 + 0x128);
      uStack_68 = 0x13230;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
  }
LAB_0266135c:
  puVar4 = PTR_DAT_04bb2020;
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if (*(int *)(lVar12 + 0x20) == 0 || *(int *)(lVar12 + 4) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar12 = lVar12 + 0x3c;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    uVar8 = -(uint)(iVar5 == 0);
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if (*(int *)(lVar12 + 0x610) != 0 && *(int *)(lVar12 + 0x5f4) != 0) {
    lVar12 = lVar12 + 0x62c;
    puVar1 = puVar4 + 0x10;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 1;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if (*(int *)(lVar12 + 0xc00) != 0 && *(int *)(lVar12 + 0xbe4) != 0) {
    lVar12 = lVar12 + 0xc1c;
    puVar1 = puVar4 + 0x10;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 2;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if (*(int *)(lVar12 + 0x11f0) != 0 && *(int *)(lVar12 + 0x11d4) != 0) {
    puVar1 = puVar4 + 0x10;
    lVar12 = lVar12 + 0x120c;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 3;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if (*(int *)(lVar12 + 0x17e0) != 0 && *(int *)(lVar12 + 0x17c4) != 0) {
    puVar1 = puVar4 + 0x10;
    lVar12 = lVar12 + 0x17fc;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 4;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if ((*(int *)(lVar12 + 0x1dd0) != 0) && (*(int *)(lVar12 + 0x1db4) != 0)) {
    puVar1 = puVar4 + 0x10;
    lVar12 = lVar12 + 0x1dec;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 5;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if ((*(int *)(lVar12 + 0x23c0) != 0) && (*(int *)(lVar12 + 0x23a4) != 0)) {
    puVar1 = puVar4 + 0x10;
    lVar12 = lVar12 + 0x23dc;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    if (iVar5 != 0) {
      uVar8 = 6;
    }
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120);
  if ((*(int *)(lVar12 + 0x29b0) == 0) || (*(int *)(lVar12 + 0x2994) == 0)) {
LAB_02661810:
    if ((int)uVar8 < 0) goto LAB_026618ac;
  }
  else {
    puVar1 = puVar4 + 0x10;
    lVar12 = lVar12 + 0x29cc;
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    iVar5 = FUN_02746e10(lVar12,&local_78);
    local_70 = "TodayReserveCoordinateHouseExterior";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar1;
    FUN_02747170(lVar12,&local_78,0);
    if (iVar5 == 0) goto LAB_02661810;
    uVar8 = 7;
  }
  if ((*(long *)(lVar9 + 0x140) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar9 + 0x140) + 0x20), plVar7 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar9 + 0x120);
    local_70 = *(char **)(lVar9 + 0x128);
    uStack_68 = 0x13230;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
  }
  lVar12 = *(long *)(lVar9 + 0x128) + *(long *)(lVar9 + 0x120) + 4;
  piVar13 = (int *)(lVar12 + (ulong)uVar8 * 0x5f0);
  if ((piVar13[7] != 0) && (*piVar13 != 0)) {
    local_70 = "TodayCompleteCoordinateHouseExterior";
    lVar12 = lVar12 + (ulong)uVar8 * 0x5f0 + 0x38;
    local_78 = puVar4 + 0x10;
    FUN_02747170(lVar12,&local_78,1);
    local_70 = "ExteriorCoordinator";
    local_78 = puVar4 + 0x10;
    FUN_02747170(lVar12,&local_78,1);
  }
LAB_026618ac:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x140) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x140) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}

