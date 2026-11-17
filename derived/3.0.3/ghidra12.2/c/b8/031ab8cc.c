
void FUN_031ab8cc(long param_1,long param_2,long *param_3,uint param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined **local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8 [8];
  undefined *puStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478;
  undefined1 local_475;
  undefined4 uStack_474;
  undefined4 local_470;
  uint uStack_46c;
  undefined1 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined1 local_400;
  undefined1 local_3fc;
  undefined1 auStack_3fa [674];
  undefined2 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined **local_100;
  long *plStack_f8;
  undefined **local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  long *plStack_98;
  undefined **local_80;
  undefined *puStack_78;
  
  puVar2 = PTR_DAT_04bb2bc0;
  if (param_2 == 0) {
    return;
  }
  local_475 = 0;
  local_4b8._0_5_ = 0x40;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_470 = (undefined4)**(undefined8 **)(param_2 + 0x2e0);
  uStack_46c = (uint)((ulong)**(undefined8 **)(param_2 + 0x2e0) >> 0x20);
  local_4c8 = ppuVar1;
  local_4c0 = (long *)(local_4b8 + 4);
  uVar6 = (**(code **)(*param_3 + 0x10))(param_3);
  FUN_034632e0(&local_4c8,uVar6);
  uVar7 = (**(code **)(*param_3 + 0x80))(param_3);
  if ((uVar7 & 1) == 0) {
    uVar6 = 0x3f800000;
  }
  else {
    local_475 = 0;
    local_4b8._0_5_ = 0x40;
    local_e0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    uVar6 = *(undefined8 *)
             (*(long *)(param_2 + 0x2e0) + (ulong)(1 < *(uint *)(param_2 + 0x2d8)) * 8);
    local_d8 = &DAT_040a02ee;
    local_470 = (undefined4)uVar6;
    uStack_46c = (uint)((ulong)uVar6 >> 0x20);
    puStack_78 = &DAT_040bc939;
    local_a0 = &PTR_LAB_04b087c0;
    local_4c8 = ppuVar1;
    local_4c0 = (long *)(local_4b8 + 4);
    plStack_98 = param_3;
    local_80 = local_e0;
    FUN_034630a0(&local_4c8,&local_e0,&local_80,&local_a0);
    uVar6 = 0;
  }
  plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(1 < *(uint *)(param_2 + 0x2e8)) * 8);
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    local_4c8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
    local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
    (**(code **)(plVar15[3] + 0x158))(uVar6,plVar15[1]);
  }
  uVar7 = (**(code **)(*param_3 + 0x88))(param_3);
  if ((((uVar7 & 1) != 0) &&
      (uVar7 = (**(code **)(*param_3 + 0x50))(param_3), param_4 != 0xffffffff)) &&
     ((uVar7 & 1) != 0)) {
    local_e0 = (undefined **)0x0;
    local_d8 = (undefined *)0x3f80000000000000;
    local_d0 = 0;
    uStack_c8 = 0x3f80000000000000;
    local_c0 = 0;
    uStack_b8 = 0x3f80000000000000;
    local_b0 = 0;
    uStack_a8 = 0x3f80000000000000;
    uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
    FUN_0344ad20(&local_e0,uVar5);
    local_4c8 = (undefined **)0x0;
    if (param_4 < *(uint *)(param_1 + 0x298)) {
      local_4c8 = *(undefined ***)(*(long *)(param_1 + 0x2a0) + (long)(int)param_4 * 8);
    }
    local_498 = local_c0;
    uStack_490 = uStack_b8;
    local_488 = local_b0;
    uStack_480 = uStack_a8;
    local_4b8 = (undefined1  [8])local_e0;
    puStack_4b0 = local_d8;
    local_4a8 = local_d0;
    uStack_4a0 = uStack_c8;
    local_478 = 1;
    uStack_474 = 0xffffffff;
    local_470 = 1;
    local_4c0 = param_3;
    FUN_030af4a0(*(undefined8 *)(param_1 + 0x290),&local_4c8);
  }
  uVar7 = (**(code **)(*param_3 + 0x40))(param_3);
  uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
  uVar9 = (**(code **)(*param_3 + 0x50))(param_3);
  puVar3 = PTR_DAT_04bc4f00;
  plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(4 < *(uint *)(param_2 + 0x2e8)) * 0x20);
  if (plVar15 != (long *)0x0) {
    if ((uVar7 & 1) == 0) {
      plVar17 = plVar15 + 3;
      plVar16 = plVar15 + 1;
      local_4c8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      if ((uVar9 & 1) != 0) {
        lVar12 = *plVar15;
        goto LAB_031abc1c;
      }
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0x3f800000;
    }
    else {
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      uVar6 = 0x40000000;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0x40400000;
      }
      local_4c8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      (**(code **)(plVar15[3] + 0x158))(uVar6,plVar15[1]);
      lVar12 = 0x38;
      if (*(uint *)(param_2 + 0x2e8) < 8) {
        lVar12 = 0;
      }
      plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + lVar12);
      if ((plVar15 == (long *)0x0) || (plVar16 = plVar15 + 1, *plVar16 == 0)) goto LAB_031abc60;
      plVar17 = plVar15 + 3;
      lVar12 = *plVar15;
LAB_031abc1c:
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      local_4c8 = (undefined **)(puVar3 + 0x10);
      (**(code **)(lVar12 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0;
    }
    (**(code **)(*plVar17 + 0x158))(uVar6,*plVar16);
  }
LAB_031abc60:
  uVar7 = (**(code **)(*param_3 + 0x40))(param_3);
  if ((uVar7 & 1) != 0) {
    local_475 = 0;
    local_4b8._0_5_ = 0x40;
    local_4c8 = (undefined **)(puVar2 + 0x10);
    local_4c0 = (long *)(local_4b8 + 4);
    uVar6 = *(undefined8 *)
             (*(long *)(param_2 + 0x2e0) + (ulong)(2 < *(uint *)(param_2 + 0x2d8)) * 0x10);
    local_e0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_470 = (undefined4)uVar6;
    uStack_46c = (uint)((ulong)uVar6 >> 0x20);
    local_d8 = &DAT_040a02ee;
    local_100 = &PTR_LAB_04b087e8;
    puStack_78 = &DAT_040f5f07;
    plStack_f8 = param_3;
    local_80 = local_e0;
    FUN_034630a0(&local_4c8,&local_e0,&local_80,&local_100);
  }
  puVar13 = *(undefined8 **)(param_2 + 0x2f0);
  plVar15 = (long *)*puVar13;
  if (plVar15 != (long *)0x0) {
    uVar7 = (**(code **)(*param_3 + 0x80))(param_3);
    if ((uVar7 & 1) == 0) {
      local_4c8 = &PTR_LAB_04aa7fe0;
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0x3f800000;
    }
    else {
      local_4c8 = &PTR_LAB_04aa7fe0;
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0;
    }
    (**(code **)(plVar15[3] + 0x158))(uVar6,plVar15[1]);
    puVar13 = *(undefined8 **)(param_2 + 0x2f0);
  }
  uVar14 = *(uint *)(param_2 + 0x2e8);
  lVar12 = 0x28;
  if (uVar14 < 6) {
    lVar12 = 0;
  }
  plVar15 = *(long **)((long)puVar13 + lVar12);
  if (plVar15 != (long *)0x0) {
    uVar7 = (**(code **)(*param_3 + 0x60))(param_3);
    if ((uVar7 & 1) == 0) {
      local_4c8 = &PTR_LAB_04aa7fe0;
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0x3f800000;
    }
    else {
      local_4c8 = &PTR_LAB_04aa7fe0;
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      uVar6 = 0;
    }
    (**(code **)(plVar15[3] + 0x158))(uVar6,plVar15[1]);
    uVar14 = *(uint *)(param_2 + 0x2e8);
    puVar13 = *(undefined8 **)(param_2 + 0x2f0);
  }
  lVar12 = 0x18;
  if (uVar14 < 4) {
    lVar12 = 0;
  }
  plVar15 = *(long **)((long)puVar13 + lVar12);
  if (plVar15 != (long *)0x0) {
    uVar7 = (**(code **)(*param_3 + 0x58))(param_3);
    if ((uVar7 & 1) == 0) {
      local_4c8 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,7);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      (**(code **)(plVar15[3] + 0x1c0))(plVar15[1]);
    }
    else {
      local_4c8 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
      (**(code **)(plVar15[3] + 0x158))(0,plVar15[1]);
    }
  }
  piVar10 = (int *)(**(code **)(*param_3 + 0xd0))(param_3);
  iVar11 = *piVar10;
  switch(iVar11) {
  case 1:
    break;
  default:
    bVar4 = iVar11 == 6;
    iVar11 = 7;
    goto LAB_031abf5c;
  case 3:
    iVar11 = 2;
    break;
  case 4:
    lVar12 = (**(code **)(*param_3 + 0xd0))(param_3);
    iVar11 = *(int *)(lVar12 + 8);
    if (iVar11 == 1) {
      iVar11 = 4;
      break;
    }
    if (iVar11 == 2) {
      iVar11 = 3;
      break;
    }
    bVar4 = iVar11 == 3;
    iVar11 = 5;
LAB_031abf5c:
    if (!bVar4) {
      iVar11 = 0;
    }
    break;
  case 5:
    iVar11 = 6;
  }
  lVar12 = 0x30;
  if (*(uint *)(param_2 + 0x2e8) < 7) {
    lVar12 = 0;
  }
  plVar15 = *(long **)(*(long *)(param_2 + 0x2f0) + lVar12);
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    local_4c8 = &PTR_LAB_04aa7fe0;
    local_4c0 = (long *)CONCAT44(local_4c0._4_4_,0x14);
    (**(code **)(*plVar15 + 0x18))(plVar15,&local_4c8);
    (**(code **)(plVar15[3] + 0x158))((float)iVar11,plVar15[1]);
  }
  if (*piVar10 == 1) {
    FUN_0071b954(&local_4c8,"/L_BtnList_00/L_Btn_%02d/L_Wrapping_00",param_4);
    lVar12 = FUN_02bb2508(param_2 + 0x38,&local_4c8);
    if (lVar12 == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)**(undefined8 **)(lVar12 + 0x230);
    }
    lVar12 = (**(code **)(*param_3 + 0xd0))(param_3);
    uVar14 = *(uint *)(lVar12 + 4);
    if ((plVar15 != (long *)0x0) && (uVar14 < 0x11)) {
      local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar14);
      local_e0 = &PTR_LAB_04aa7fe0;
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,0x14);
      (**(code **)(*plVar15 + 0x18))(plVar15,&local_e0);
      (**(code **)(plVar15[3] + 0x158))((float)(int)uVar14,plVar15[1]);
    }
  }
  local_4c8 = (undefined **)((ulong)local_4c8 & 0xffffffffffff0000);
  uStack_46c = uStack_46c & 0xffffff00;
  local_410 = 0;
  local_40c = 0xfffe00000000;
  local_404 = 0;
  FUN_0277d4ac((long)&local_40c + 4);
  local_400 = 0;
  local_3fc = 0;
  memset(auStack_3fa,0,0x2a2);
  local_158 = 0xfffe;
  local_154 = 0;
  uStack_14c = 0;
  local_144 = 0;
  uStack_13c = 0;
  local_134 = 0;
  uStack_12c = 0;
  local_124 = 0;
  uStack_11c = 0;
  (**(code **)(*param_3 + 200))(param_3,&local_4c8);
  if (*(uint *)(param_1 + 0x218) <= param_4) {
    param_4 = 0;
  }
  FUN_03103ca8(*(undefined8 *)(*(long *)(param_1 + 0x220) + (long)(int)param_4 * 8),&local_4c8);
  return;
}

