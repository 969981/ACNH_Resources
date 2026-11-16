
void FUN_0259aca4(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  
  local_84 = 0x2800000027;
  local_7c = 0x2a00000029;
  local_74 = 0x2c0000002b;
  local_6c = 0x71;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_84 + (long)*(int *)(param_1 + 0x28) * 4));
  puVar9 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "IsInMyVillage";
  local_68 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_68,*(undefined1 *)(param_2 + 2));
    local_60 = "IsDreaming";
    local_68 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,*(undefined1 *)((long)param_2 + 9));
    }
  }
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    if ((int)param_2[1] < 0) {
      return;
    }
    if (0xf < (int)param_2[1]) {
      return;
    }
    uVar7 = (&DAT_05512638)[(int)param_2[1]];
    local_68 = puVar9 + 0x10;
    local_60 = "Facility";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,(long)(int)uVar7);
    }
    if (*(byte *)(param_1 + 0x18) < 8) {
      local_68 = (undefined *)CONCAT71(local_68._1_7_,*(byte *)(param_1 + 0x18));
      lVar11 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_68,1);
    }
    else {
      if (*(int *)(param_1 + 0x1c) == -1) {
        return;
      }
      if (*(long *)PTR_DAT_04bb46b0 == 0) {
        return;
      }
      lVar11 = FUN_026eec4c();
    }
    if (lVar11 == 0) {
      return;
    }
    lVar16 = lVar11 + 0x194b0;
    lVar15 = lVar16;
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar15 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar15 + 0x2a878) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar15 + 0x2a878), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 ^ 1;
    }
    puVar2 = (undefined4 *)(*(long *)(lVar15 + 0x2a860) + *(long *)(lVar15 + 0x2a858));
    puVar4 = puVar2 + uVar7;
    if (0x3f < uVar7) {
      puVar4 = puVar2;
    }
    uVar6 = *puVar4;
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0x2a878) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0x2a878) + 8), puVar12 != (undefined8 *)0x0))
    {
      (**(code **)*puVar12)();
    }
    local_68 = puVar9 + 0x10;
    local_60 = "CountByFacility";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_68,uVar6);
    }
    if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb0) == '\0') {
      return;
    }
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    lVar11 = *(long *)(lVar16 + 0x2a878);
    if (lVar11 == 0) {
      uVar13 = 0;
    }
    else {
      if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        lVar11 = *(long *)(lVar16 + 0x2a878);
        uVar13 = uVar13 & 0xffffffff;
        if (lVar11 == 0) goto LAB_0259b000;
      }
      plVar14 = *(long **)(lVar11 + 0x20);
      if (plVar14 != (long *)0x0) {
        local_68 = *(undefined **)(lVar16 + 0x2a858);
        local_60 = *(char **)(lVar16 + 0x2a860);
        uStack_58 = 0x100;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
      }
    }
LAB_0259b000:
    piVar3 = (int *)(*(long *)(lVar16 + 0x2a860) + *(long *)(lVar16 + 0x2a858));
    piVar5 = piVar3 + uVar7;
    if (0x3f < uVar7) {
      piVar5 = piVar3;
    }
    *piVar5 = *piVar5 + 1;
    if ((((uVar13 & 1) != 0) && (*(long *)(lVar16 + 0x2a878) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x2a878) + 0x18), puVar12 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar12)();
    }
    break;
  case 3:
    FUN_02603510(param_1,*param_2);
    FUN_026035e0(param_1,*param_2);
    break;
  case 4:
    lVar11 = *(long *)(param_1 + 8);
    local_60 = "MysteryTourUid";
    if (lVar11 == 0) {
      return;
    }
    uVar8 = *(undefined2 *)(*(long *)PTR_DAT_04bb4928 + 8);
    goto LAB_0259ae68;
  case 6:
    lVar11 = *(long *)(param_1 + 8);
    local_60 = "KappeiTourUid";
    if (lVar11 == 0) {
      return;
    }
    uVar8 = *(undefined2 *)(*(long *)PTR_DAT_04bb4928 + 10);
LAB_0259ae68:
    local_68 = puVar9 + 0x10;
    FUN_02605660(lVar11,&local_68,uVar8);
  }
  return;
}

