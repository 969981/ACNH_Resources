
undefined8 FUN_03460150(int *param_1,int *param_2,byte *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  uint local_a8;
  undefined *local_90 [4];
  undefined *local_70 [4];
  int local_38;
  uint local_34;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    return 0;
  }
  local_34 = *(uint *)PTR_DAT_04bb3238;
  lVar7 = *(long *)PTR_DAT_04bb3968;
  uVar4 = local_34;
  if (lVar7 != 0) {
    if (*param_2 == 0) {
      local_38 = param_2[1];
      local_b8 = &local_34;
      local_c0 = &PTR_FUN_04b2b1e0;
      local_b0 = (undefined **)&local_38;
      if (*(int *)(lVar7 + 0xb88) != 0) {
        lVar11 = (long)*(int *)(lVar7 + 0xb88) << 3;
        puVar10 = *(undefined8 **)(lVar7 + 0xb90);
        do {
          (*(code *)*local_c0)(&local_c0,*puVar10);
          lVar11 = lVar11 + -8;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
        uVar4 = local_34;
      }
    }
    else {
      uVar4 = FUN_020a4f40(lVar7,param_2 + 2,PTR_DAT_04bb3238,1);
    }
  }
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar4 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar4)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
      goto joined_r0x034602f0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x034602f0;
    }
  }
  uVar13 = 0;
joined_r0x034602f0:
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar12[0x2a];
  uVar1 = *(uint *)(plVar12 + 0x49);
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar13 & uVar6) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  bVar9 = *param_3;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = uVar4;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 7) = bVar9;
  lVar7 = plVar12[0xd];
  param_1[2] = *(int *)(lVar7 + 0x278);
  param_1[3] = *(int *)(lVar7 + 0x27c);
  param_1[4] = *(int *)(lVar7 + 0x280);
  param_1[5] = *(int *)(plVar12[0xd] + 0x2b4);
  uVar2 = (ulong)local_b8 >> 0x30;
  local_b0 = &PTR_LAB_04b2b1b8;
  local_90[0] = PTR_DAT_04bc9990 + 0x10;
  local_70[0] = PTR_DAT_04bc9998 + 0x10;
  local_c0 = (undefined **)CONCAT44(CONCAT31(local_c0._5_3_,bVar9),0x3e);
  local_b8 = (uint *)CONCAT26((ushort)uVar2 & 0xff00,0x101ffffffff);
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x10);
  if (*(int *)(lVar7 + 0x90) == 0) {
    *(undefined4 *)(lVar7 + 0xd0) = 0x3e;
    *(byte *)(lVar7 + 0xd4) = bVar9;
    *(undefined4 *)(lVar7 + 0xd8) = 0xffffffff;
    *(undefined2 *)(lVar7 + 0xdc) = 0x101;
    *(undefined1 *)(lVar7 + 0xde) = 0;
    *(undefined ***)(lVar7 + 0xe0) = &PTR_LAB_04b2b1b8;
    *(uint *)(lVar7 + 0xe8) = uVar4;
    local_a8 = uVar4;
    FUN_033b6028(local_90,lVar7 + 0x100);
    (**(code **)(local_70[0] + 0x10))(local_70,lVar7 + 0x120);
    FUN_03ebb160(lVar7 + 0x88,1);
    iVar5 = 3;
  }
  else {
    iVar5 = 2;
  }
  *param_1 = iVar5;
  return 1;
}

