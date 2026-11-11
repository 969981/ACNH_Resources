
void FUN_004d7790(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  void *__src;
  undefined8 uVar18;
  undefined8 uVar19;
  void *local_340;
  long lStack_338;
  ulong local_330;
  void *local_328;
  long local_320;
  ulong local_318;
  ulong local_310;
  undefined *local_278;
  undefined *puStack_270;
  undefined *local_1f8;
  undefined *local_1e0;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  
  uVar15 = param_2[1];
  uVar11 = FUN_00428440(uVar15);
  if ((uVar11 & 0x1f) != 8) {
    uVar15 = 0;
  }
  puVar12 = (undefined8 *)FUN_00426e90(uVar15,1);
  if (((puVar12 == (undefined8 *)0x0) || ((int)((ulong)*puVar12 >> 8) == 0)) &&
     (-1 < *(int *)*param_2)) {
    uVar15 = param_2[1];
    uVar11 = FUN_00428440(uVar15);
    if ((uVar11 & 0x1f) != 8) {
      uVar15 = 0;
    }
    puVar12 = (undefined8 *)FUN_00426e90(uVar15,1);
    if ((puVar12 == (undefined8 *)0x0) || ((int)((ulong)*puVar12 >> 8) == 0)) {
      uVar10 = *(undefined4 *)*param_2;
    }
    else {
      uVar10 = 0xffffffff;
    }
    *(undefined4 *)*param_1 = uVar10;
    return;
  }
  if ((param_1[1] == 0) || (uVar11 = FUN_00428440(), (uVar11 & 0x1f) != 8)) {
    uVar15 = 0;
    uVar17 = 0;
    uVar11 = 0;
  }
  else {
    uVar15 = *param_1;
    uVar17 = param_1[1];
    uVar11 = param_1[2];
    if ((uVar11 & 1) != 0) {
      FUN_0043dd30(uVar11 & 0xfffffffffffffffe);
      uVar11 = param_1[2];
    }
  }
  local_318 = 0;
  local_310 = 0;
  plVar16 = (long *)(uVar11 & 0xfffffffffffffffe);
  local_328 = (void *)0x0;
  local_320 = 0;
  (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
  iVar5 = (int)local_318;
  if ((local_310 & 1) != 0) {
    FUN_0043dd50(local_310 & 0xfffffffffffffffe);
  }
  FUN_004dad30(&local_328,param_2);
  iVar1 = *(int *)(param_2 + 4);
  if ((local_318 & 1) != 0) {
    FUN_0043dd50(local_318 & 0xfffffffffffffffe);
  }
  if ((iVar5 != 0) &&
     ((puVar12 = (undefined8 *)FUN_00426e90(uVar17,1), puVar12 == (undefined8 *)0x0 ||
      ((int)((ulong)*puVar12 >> 8) == 0)))) {
    uVar18 = param_1[3];
    local_a0 = uVar15;
    uStack_98 = uVar17;
    local_90 = uVar11;
    if ((uVar11 & 1) != 0) {
      FUN_0043dd30(plVar16);
    }
    FUN_004d7d70(uVar18,&local_a0);
    if ((local_90 & 1) != 0) {
      FUN_0043dd50(local_90 & 0xfffffffffffffffe);
    }
  }
  (**(code **)(*plVar16 + 0x58))(plVar16,uVar15,uVar17,iVar1);
  iVar5 = FUN_00426fc0(param_2[5]);
  local_318 = 0;
  local_310 = 0;
  local_328 = (void *)0x0;
  local_320 = 0;
  (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
  lVar3 = local_320;
  if ((local_310 & 1) != 0) {
    FUN_0043dd50(local_310 & 0xfffffffffffffffe);
  }
  iVar6 = FUN_00426fc0(lVar3);
  if (iVar5 == iVar6) {
    local_318 = 0;
    local_310 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
    pvVar2 = local_328;
    if ((local_310 & 1) != 0) {
      FUN_0043dd50(local_310 & 0xfffffffffffffffe);
    }
    __src = (void *)param_2[3];
    iVar5 = FUN_00426fc0(param_2[5]);
    memcpy(pvVar2,__src,(long)(iVar5 * iVar1));
    puVar12 = (undefined8 *)FUN_00426e90(uVar17,1);
  }
  else {
    lVar14 = param_1[3];
    uVar18 = param_2[5];
    local_318 = 0;
    local_310 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
    lVar3 = local_320;
    if ((local_310 & 1) != 0) {
      FUN_0043dd50(local_310 & 0xfffffffffffffffe);
    }
    uVar13 = FUN_00461bf0(lVar14 + 0x2d8,uVar18,lVar3);
    FUN_00466aa0(&local_328);
    local_278 = PTR_FUN_04bd5ac8;
    puStack_270 = PTR_LAB_04bd5af0;
    local_1e0 = PTR_LAB_04bd5ae8;
    local_1f8 = PTR_LAB_04bd5ad0;
    local_1a0 = PTR_LAB_04bd5ae0;
    local_1b0 = PTR_LAB_04bd5af8;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_88);
    uVar18 = local_88;
    if ((local_70 & 1) != 0) {
      FUN_0043dd50(local_70 & 0xfffffffffffffffe);
    }
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_88);
    uVar4 = local_80;
    if ((local_70 & 1) != 0) {
      FUN_0043dd50(local_70 & 0xfffffffffffffffe);
    }
    uVar10 = FUN_00426fc0(uVar4);
    uVar19 = param_2[3];
    uVar7 = FUN_00426fc0(param_2[5]);
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_88);
    uVar4 = local_80;
    if ((local_70 & 1) != 0) {
      FUN_0043dd50(local_70 & 0xfffffffffffffffe);
    }
    uVar8 = FUN_00426fc0(uVar4);
    uVar9 = FUN_00426fc0(param_2[5]);
    FUN_004d7ed0(&local_328,uVar13,uVar18,uVar10,uVar19,uVar7,uVar8,uVar9,iVar1);
    puVar12 = (undefined8 *)FUN_00426e90(uVar17,1);
  }
  if ((puVar12 == (undefined8 *)0x0) || ((int)((ulong)*puVar12 >> 8) == 0)) {
    uVar18 = param_1[3];
    local_318 = 0;
    local_310 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
    pvVar2 = local_328;
    if ((local_310 & 1) != 0) {
      FUN_0043dd50(local_310 & 0xfffffffffffffffe);
    }
    local_318 = 0;
    local_310 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
    lStack_338 = local_320;
    if ((local_310 & 1) != 0) {
      FUN_0043dd50(local_310 & 0xfffffffffffffffe);
    }
    local_340 = pvVar2;
    if (lStack_338 == 0) {
      local_330 = 0;
    }
    else {
      local_330 = FUN_00428370(lStack_338);
      if ((local_330 & 1) != 0) {
        FUN_0043dd30(local_330 & 0xfffffffffffffffe);
      }
    }
    local_318 = 0;
    local_310 = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16,uVar15,uVar17,&local_328);
    lVar3 = local_320;
    if ((local_310 & 1) != 0) {
      FUN_0043dd50(local_310 & 0xfffffffffffffffe);
    }
    uVar10 = FUN_00426fc0(lVar3);
    FUN_004d9dc0(uVar18,&local_340,iVar1,uVar10,0xffffffff,0xffffffff);
    if ((local_330 & 1) != 0) {
      FUN_0043dd50(local_330 & 0xfffffffffffffffe);
    }
  }
  if ((uVar11 & 1) != 0) {
    FUN_0043dd50(plVar16);
  }
  return;
}

