
void FUN_02c34af0(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined *local_f0;
  char *pcStack_e8;
  int local_e0;
  byte local_d4 [4];
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [16];
  int local_9c;
  undefined4 local_98;
  undefined1 local_6d;
  undefined8 local_68;
  
  pbVar1 = (byte *)(param_1 + 0x1f8);
  (**(code **)(**(long **)(param_1 + 0x290) + 0x38))(*(long **)(param_1 + 0x290),pbVar1);
  (**(code **)(**(long **)(param_1 + 0x290) + 0x10))();
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 == 0) {
LAB_02c34b94:
    lVar9 = 0;
  }
  else {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + 0x70;
      }
    }
    else {
      if (puVar10 == (undefined8 *)0x0) goto LAB_02c34b94;
      lVar9 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar9 + 0x1c27c0) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1c27c0), puVar10 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar10)();
    uVar8 = uVar8 & 0xffffffff;
  }
  local_d4[0] = *pbVar1;
  if (7 < local_d4[0]) {
    local_d4[0] = 0xff;
  }
  iVar6 = FUN_02582fe0(local_d4);
  puVar5 = PTR_DAT_04bb2020;
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(uint)(iVar6 == -1));
  pcStack_e8 = (&PTR_s_bbs_look_my_land_04a85398)[(int)(uint)(iVar6 == -1)];
  local_f0 = PTR_DAT_04bb2020 + 0x10;
  FUN_025ffac8(&local_c0,&local_f0,pbVar1);
  puVar2 = PTR_DAT_04bc3240 + 0x10;
  local_98 = local_d0._0_4_;
  local_f0 = (undefined *)(*(long *)(lVar9 + 0x1c27a8) + *(long *)(lVar9 + 0x1c27a0));
  pcStack_e8 = (char *)0x0;
  local_e0 = iVar6;
  local_c0 = puVar2;
  FUN_0258da78(&local_c0,&local_f0);
  local_c0 = puVar2;
  iVar6 = FUN_0258e688(&local_c0);
  if (iVar6 != -1) {
    iVar6 = (**(code **)(local_c0 + 0x20))(&local_c0);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar6);
    if (iVar6 < 0xd) goto LAB_02c34c9c;
  }
  if (local_9c == 0) {
    local_9c = 1;
  }
LAB_02c34c9c:
  FUN_02601530(&local_c0);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x1c27c0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1c27c0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    uVar8 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bc4e58);
    if ((uVar8 & 1) == 0) {
      puVar10 = (undefined8 *)0x0;
    }
  }
  puVar2 = PTR_DAT_04bb2bc0;
  local_6d = 0;
  local_b0 = 0x40;
  local_b8 = local_ac;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_68 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    local_68 = *(undefined8 *)puVar10[0x43];
  }
  local_f0 = puVar5 + 0x10;
  pcStack_e8 = "Board";
  puStack_c8 = &DAT_0407bc05;
  local_d0 = local_f0;
  FUN_03462c54(&local_c0,&local_f0,&local_d0);
  puVar5 = PTR_DAT_04bc4d98;
  lVar9 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x208) != 0)) {
    lVar7 = (long)*(int *)(lVar9 + 0x208) << 3;
    puVar10 = *(undefined8 **)(lVar9 + 0x210);
    puVar3 = PTR_DAT_04bc4da0 + 0x10;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      puVar12 = (undefined8 *)*puVar10;
      if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc4d90 = puVar3;
        __cxa_guard_release(puVar5);
      }
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        uVar8 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc4d90);
        if ((uVar8 & 1) == 0) {
          puVar12 = (undefined8 *)0x0;
        }
      }
      local_b0 = 0x40;
      local_6d = 0;
      local_ac[0] = 0;
      local_68 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        local_68 = *(undefined8 *)puVar12[0x5c];
      }
      pcStack_e8 = "Board";
      puStack_c8 = &DAT_0406e071;
      local_f0 = puVar4;
      local_d0 = puVar4;
      local_c0 = puVar2 + 0x10;
      local_b8 = local_ac;
      FUN_03462c54(&local_c0,&local_f0,&local_d0);
      puVar10 = puVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  local_c0 = PTR_DAT_04bc06f8 + 0x10;
  local_b8 = (undefined1 *)((ulong)local_b8 & 0xffffffffffff0000);
  lVar9 = *(long *)PTR_DAT_04bb4788;
  if ((-(uint)*(ushort *)(lVar9 + 0x3f8) < *(uint *)(lVar9 + 0x3d8)) &&
     (*(long *)(*(long *)(lVar9 + 0x3e0) + (ulong)*(ushort *)(lVar9 + 0x3f8) * -8) != 0)) {
    lVar9 = *(long *)(param_1 + 0x358);
    pcStack_e8 = (char *)FUN_01b87300(&local_c0);
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    if ((lVar9 == 0) || ((*pcStack_e8 == '\0' && (*(short *)PTR_DAT_04bb37e0 == -2)))) {
      iVar11 = -1;
    }
    else {
      iVar11 = 0;
      iVar6 = 0;
      lVar9 = lVar9 + 8;
      do {
        if ((*(int *)(lVar9 + (long)iVar6 * 0x1a8 + 0x1a0) == 0) &&
           (lVar7 = lVar9 + (long)iVar6 * 0x1a8, (*(byte *)(lVar7 + 0x18) >> 1 & 1) == 0)) {
          FUN_03412d40(lVar7,&local_f0,PTR_DAT_04bb37e0,7);
          goto LAB_02c34f78;
        }
        iVar6 = iVar6 + 1;
        iVar11 = iVar11 + 1;
      } while (iVar6 != 0x10e);
      iVar11 = -1;
    }
LAB_02c34f78:
    *(int *)(param_1 + 0x360) = iVar11;
  }
  return;
}

