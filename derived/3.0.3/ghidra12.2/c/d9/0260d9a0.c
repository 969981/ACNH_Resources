
void FUN_0260d9a0(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_74;
  undefined8 local_70;
  char *local_68;
  
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb3350;
  local_74 = param_3;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
  if ((*(long *)(lVar15 + 0x60) != lVar8) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  plVar11 = (long *)PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar8 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_3);
  if (lVar8 == 0) {
    return;
  }
  FUN_025aca40(&local_c8,&local_74);
  FUN_02602950(&local_c8,0);
  FUN_025acd70(&local_c8);
  FUN_025ad600(&local_c8);
  FUN_025ad980(&local_c8);
  FUN_025adde0(&local_c8);
  local_c8 = PTR_DAT_04bc32f8 + 0x10;
  iVar7 = FUN_025aea04(&local_c8);
  if (iVar7 == -1) {
LAB_0260dacc:
    if (local_a4 == 0) {
      local_a4 = 1;
    }
  }
  else {
    iVar7 = (**(code **)(local_c8 + 0x20))(&local_c8);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar7);
    if (0xc < iVar7) goto LAB_0260dacc;
  }
  FUN_02601530(&local_c8);
  lVar14 = *(long *)PTR_DAT_04bb3350;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)(lVar14 + 0x68));
  if ((*(long *)(lVar14 + 0x60) != lVar15) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025a6b60(&local_c8,&local_74);
  FUN_02602950(&local_c8,1);
  FUN_025a6eb0(&local_c8);
  FUN_025a75d0(&local_c8);
  FUN_025a7b38(&local_c8);
  FUN_025a6d84(&local_c8);
  lVar14 = *(long *)PTR_DAT_04bb3350;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)(lVar14 + 0x68));
  if ((*(long *)(lVar14 + 0x60) != lVar15) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025a38b0(&local_c8,&local_74);
  if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
    FUN_02602950(&local_c8,2);
    FUN_025a3bc0(&local_c8);
  }
  FUN_025a3a98(&local_c8);
  lVar14 = *(long *)PTR_DAT_04bb3350;
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)(lVar14 + 0x68));
  if ((*(long *)(lVar14 + 0x60) != lVar15) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  puVar5 = PTR_DAT_04bb2020;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "MainmenuMydesignPatternPlus";
  iVar7 = FUN_0274ce10(&local_74,&local_c8);
  if (iVar7 != 0) {
    lVar15 = lVar8 + 0x194b0;
    plVar17 = (long *)(lVar8 + 0x194b8);
    lVar14 = lVar15;
    if (*plVar17 == 0) {
      lVar14 = *(long *)(*plVar11 + 0x20);
    }
    if ((*(long **)(lVar14 + 0x2a840) == (long *)0x0) ||
       (puVar10 = (undefined8 *)**(long **)(lVar14 + 0x2a840), puVar10 == (undefined8 *)0x0)) {
      uVar18 = *(undefined4 *)(*(long *)(lVar14 + 0x2a828) + *(long *)(lVar14 + 0x2a820) + 0x194);
    }
    else {
      uVar9 = (**(code **)*puVar10)();
      uVar18 = *(undefined4 *)(*(long *)(lVar14 + 0x2a828) + *(long *)(lVar14 + 0x2a820) + 0x194);
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar14 + 0x2a840) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x2a840) + 8), puVar10 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar10)();
      }
    }
    lVar14 = lVar15;
    if (*plVar17 == 0) {
      lVar14 = *(long *)(*plVar11 + 0x20);
    }
    iVar7 = FUN_025a94a0(lVar14 + 0x2cfe8);
    puVar6 = PTR_DAT_04bc3578;
    if (0 < iVar7) {
      iVar16 = 0;
      puVar2 = PTR_DAT_04bc32e8 + 0x10;
      do {
        local_68 = "growup_mydesign_common";
        local_70 = puVar5 + 0x10;
        FUN_026012f4(&local_c8,&local_70,&local_74);
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        local_c8 = puVar2;
        if (*(char *)(DAT_05554928 + 0xb1) == '\0') {
          FUN_025a8d20(&local_c8);
        }
        local_70 = (undefined *)CONCAT44(iVar7,uVar18);
        local_68 = (char *)CONCAT44(local_68._4_4_,iVar16);
        FUN_025a8fd0(&local_c8,&local_70);
        FUN_025a8ea8(&local_c8);
        lVar13 = *(long *)PTR_DAT_04bb3350;
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(lVar13 + 0x68));
        if ((*(long *)(lVar13 + 0x60) != lVar14) &&
           (uVar9 = FUN_03f26e50(*(undefined8 *)puVar6,5000), (uVar9 & 1) == 0)) {
          *(undefined1 *)(param_1 + 0xb1) = 1;
        }
        iVar16 = iVar16 + 1;
      } while (iVar7 != iVar16);
    }
    plVar11 = (long *)PTR_DAT_04bb46b0;
    if (*plVar17 == 0) {
      lVar15 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    lVar14 = *(long *)(lVar15 + 0x2a840);
    if (lVar14 == 0) {
      uVar9 = 0;
    }
    else {
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(lVar15 + 0x2a840);
        uVar9 = uVar9 & 0xffffffff;
        if (lVar14 == 0) goto LAB_0260de50;
      }
      plVar17 = *(long **)(lVar14 + 0x20);
      if (plVar17 != (long *)0x0) {
        local_c8 = *(undefined **)(lVar15 + 0x2a820);
        local_c0 = *(char **)(lVar15 + 0x2a828);
        uStack_b8 = 0x400;
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_c8);
      }
    }
LAB_0260de50:
    lVar14 = *(long *)(lVar15 + 0x2a828) + *(long *)(lVar15 + 0x2a820);
    *(int *)(lVar14 + 0x194) = *(int *)(lVar14 + 0x194) + 1;
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar15 + 0x2a840) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x2a840) + 0x18), puVar10 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar10)();
    }
  }
  lVar15 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar15 = *(long *)(*plVar11 + 0x20);
  }
  lVar8 = *(long *)(lVar15 + 0x2d010);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar15 + 0x2d010);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar8 == 0) goto LAB_0260df08;
    }
    plVar11 = *(long **)(lVar8 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_c8 = *(undefined **)(lVar15 + 0x2cff0);
      local_c0 = *(char **)(lVar15 + 0x2cff8);
      uStack_b8 = 0x1000;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_c8);
    }
  }
LAB_0260df08:
  lVar8 = *(long *)(lVar15 + 0x2cff0);
  lVar14 = *(long *)(lVar15 + 0x2cff8);
  uVar12 = 0;
  do {
    uVar3 = uVar12 << 2;
    uVar4 = uVar12 >> 0x1f;
    uVar1 = (int)uVar12 + 1;
    uVar12 = (ulong)uVar1;
    *(undefined4 *)(lVar14 + lVar8 + (-uVar4 & 0xfffffffc00000000 | uVar3)) = 0;
  } while (uVar1 != 0x400);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar15 + 0x2d010) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar15 + 0x2d010) + 0x18), puVar10 != (undefined8 *)0x0))
  {
    (**(code **)*puVar10)();
  }
  FUN_02607490(*(undefined8 *)(param_1 + 0x98),local_74);
  lVar15 = *(long *)PTR_DAT_04bb3350;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
  if ((*(long *)(lVar15 + 0x60) != lVar8) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_026080a0(*(undefined8 *)(param_1 + 0x98),local_74);
  lVar15 = *(long *)PTR_DAT_04bb3350;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
  if ((*(long *)(lVar15 + 0x60) != lVar8) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025fe7dc(*(undefined8 *)(param_1 + 0xa0),&local_74);
  lVar15 = *(long *)PTR_DAT_04bb3350;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
  if ((*(long *)(lVar15 + 0x60) != lVar8) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  FUN_025b8800(&local_c8,&local_74,1);
  FUN_025b8a14(&local_c8,&local_70);
  local_c8 = PTR_DAT_04bc3348 + 0x10;
  iVar7 = FUN_025b9490(&local_c8);
  if (iVar7 != -1) {
    local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar7);
    if (iVar7 < 0xd) goto LAB_0260e088;
  }
  if (local_a4 == 0) {
    local_a4 = 1;
  }
LAB_0260e088:
  FUN_02601530(&local_c8);
  lVar15 = *(long *)PTR_DAT_04bb3350;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
  if ((*(long *)(lVar15 + 0x60) != lVar8) &&
     (uVar9 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar9 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb1) = 1;
  }
  return;
}

