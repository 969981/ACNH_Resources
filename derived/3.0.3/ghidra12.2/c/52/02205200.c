
void FUN_02205200(uint *param_1,undefined4 param_2,short *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_98 [2];
  undefined1 auStack_96 [2];
  ushort local_94 [2];
  undefined *local_90;
  short local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  short local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  
  puVar9 = PTR_DAT_04bb43c0;
  local_88 = *param_3;
  local_86 = (undefined1)param_3[1];
  local_85 = *(undefined1 *)((long)param_3 + 3);
  local_84 = *(undefined4 *)(param_3 + 2);
  if (local_88 == -2) {
    return;
  }
  local_80 = 0;
  local_90 = PTR_DAT_04bc0510 + 0x10;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  local_48 = local_88;
  local_46 = local_86;
  local_45 = local_85;
  local_44 = local_84;
  uVar12 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar9 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_48);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar12 < *(uint *)(lVar22 + 0x1d8)) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8);
        if (lVar22 != 0) {
          local_80 = lVar22;
        }
      }
    }
  }
  uVar14 = FUN_01b087d0(&local_90);
  puVar9 = PTR_DAT_04bb3128;
  if ((uVar14 & 1) == 0) {
    return;
  }
  local_94[0] = 0;
  uVar12 = *param_1;
  if (((*PTR_DAT_04bb3128 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar13 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar8 = PTR_DAT_04bb3120;
  if (*(uint *)PTR_DAT_04bb3120 <= uVar12) {
    uVar12 = 0;
  }
  local_94[0] = (ushort)param_2 & 0x7f |
                (ushort)(*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + (long)(int)uVar12 * 4) << 0xb);
  FUN_007ef010(auStack_96,local_94);
  lVar22 = FUN_0264e8e0(auStack_96);
  puVar10 = PTR_DAT_04bb46b0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar15 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_2), lVar15 == 0)) {
    bVar11 = (*puVar9 & 1) == 0;
joined_r0x022053b8:
    if ((bVar11) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar13 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar12 = *param_1;
    if (*(uint *)puVar8 <= uVar12) {
      uVar12 = 0;
    }
    iVar13 = *(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar12 * 4);
    if (iVar13 != 0x12) {
      if (iVar13 != 0x14) goto LAB_02205724;
      FUN_01b086f4(&local_78,&local_90);
      uVar14 = local_78 >> 7 & 0xf;
      if (7 < (uint)uVar14) goto LAB_022054c8;
      if ((*(long *)puVar10 == 0) || (lVar17 = FUN_026eec4c(*(long *)puVar10,param_2), lVar17 == 0))
      {
        lVar15 = 0;
        lVar17 = 0xce8;
      }
      else {
        lVar17 = lVar17 + uVar14 * 0x2450;
        lVar15 = lVar17 + 0x3f00;
        lVar17 = lVar17 + 0x4be8;
      }
      goto LAB_02205570;
    }
    FUN_01b086f4(&local_78,&local_90);
    uVar14 = local_78 >> 7 & 0xf;
    if ((uint)uVar14 < 8) {
      if ((*(long *)puVar10 == 0) || (lVar15 = FUN_026eec4c(*(long *)puVar10,param_2), lVar15 == 0))
      {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar15 + uVar14 * 0x2450 + 0x3f00;
      }
      lVar17 = lVar15 + 0xe0;
      goto LAB_02205570;
    }
LAB_022054c8:
    lVar23 = 0;
  }
  else {
    if ((*(long **)(lVar15 + 0x161a8) == (long *)0x0) ||
       (puVar16 = (undefined8 *)**(long **)(lVar15 + 0x161a8), puVar16 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar16)();
      uVar12 = uVar12 ^ 1;
    }
    pbVar1 = (byte *)(*(long *)(lVar15 + 0x16190) + *(long *)(lVar15 + 0x16188));
    bVar5 = pbVar1[1];
    bVar6 = *pbVar1;
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar15 + 0x161a8) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar15 + 0x161a8) + 8), puVar16 != (undefined8 *)0x0))
    {
      (**(code **)*puVar16)();
    }
    bVar11 = (*puVar9 & 1) == 0;
    if (bVar5 != 0 && bVar6 < 8) goto joined_r0x022053b8;
    if ((bVar11) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar13 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar12 = *param_1;
    if (*(uint *)puVar8 <= uVar12) {
      uVar12 = 0;
    }
    iVar13 = *(int *)(*(long *)(puVar8 + 8) + (long)(int)uVar12 * 4);
    if (iVar13 == 0x12) {
      if (*(long *)puVar10 == 0) {
        lVar15 = 0;
        lVar17 = 0x150;
      }
      else {
        lVar17 = FUN_026eec4c(*(long *)puVar10,param_2);
        lVar15 = 0;
        if (lVar17 != 0) {
          lVar15 = lVar17 + 0xe0;
        }
        lVar17 = lVar15 + 0x150;
      }
    }
    else {
      if (iVar13 != 0x14) goto LAB_02205724;
      if (*(long *)puVar10 == 0) {
        lVar15 = 0;
        lVar17 = 0xd58;
      }
      else {
        lVar17 = FUN_026eec4c(*(long *)puVar10,param_2);
        lVar15 = 0;
        if (lVar17 != 0) {
          lVar15 = lVar17 + 0xe0;
        }
        lVar17 = lVar15 + 0xd58;
      }
    }
LAB_02205570:
    lVar23 = 0;
    if (lVar15 != 0) {
      lVar23 = lVar17;
    }
  }
  if ((lVar22 == 0) || (lVar23 == 0)) goto LAB_02205724;
  if ((*(long **)(lVar23 + 0x28) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar23 + 0x28), puVar16 == (undefined8 *)0x0)) {
    uVar12 = 1;
  }
  else {
    uVar12 = (**(code **)*puVar16)();
    uVar12 = uVar12 ^ 1;
  }
  puVar2 = (undefined4 *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8));
  lVar15 = *(long *)(lVar22 + 0x28);
  if (lVar15 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar22 + 0x28);
      uVar14 = uVar14 & 0xffffffff;
      if (lVar15 == 0) goto LAB_02205610;
    }
    plVar18 = *(long **)(lVar15 + 0x20);
    if (plVar18 != (long *)0x0) {
      local_78 = *(ulong *)(lVar22 + 8);
      uStack_70 = *(undefined8 *)(lVar22 + 0x10);
      local_68 = 0x8a8;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
    }
  }
LAB_02205610:
  puVar3 = (undefined4 *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar2 + 2);
  *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
  uVar19 = *(undefined8 *)(puVar2 + 6);
  uVar20 = *(undefined8 *)(puVar2 + 8);
  uVar21 = *(undefined8 *)(puVar2 + 0xc);
  *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(puVar2 + 10);
  *(undefined8 *)(puVar3 + 0xc) = uVar21;
  *(undefined8 *)(puVar3 + 6) = uVar19;
  *(undefined8 *)(puVar3 + 8) = uVar20;
  uVar21 = *(undefined8 *)(puVar2 + 0x12);
  uVar19 = *(undefined8 *)(puVar2 + 0xe);
  uVar20 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar2 + 0x14);
  *(undefined8 *)(puVar3 + 0x10) = uVar20;
  *(undefined8 *)(puVar3 + 0x12) = uVar21;
  *(undefined8 *)(puVar3 + 0xe) = uVar19;
  uVar19 = *(undefined8 *)(puVar2 + 0x15);
  uVar20 = *(undefined8 *)(puVar2 + 0x17);
  *(undefined8 *)(puVar3 + 0x19) = *(undefined8 *)(puVar2 + 0x19);
  *(undefined8 *)(puVar3 + 0x17) = uVar20;
  *(undefined8 *)(puVar3 + 0x15) = uVar19;
  uVar4 = puVar2[0x1b];
  if (1 < uVar4) {
    uVar4 = 0;
  }
  puVar3[0x1b] = uVar4;
  *(undefined1 *)(puVar3 + 0x1c) = *(undefined1 *)(puVar2 + 0x1c);
  *(undefined1 *)((long)puVar3 + 0x71) = *(undefined1 *)((long)puVar2 + 0x71);
  *(undefined2 *)((long)puVar3 + 0x72) = *(undefined2 *)((long)puVar2 + 0x72);
  uVar19 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar3 + 0x1e) = *(undefined8 *)(puVar2 + 0x1e);
  *(undefined8 *)(puVar3 + 0x20) = uVar19;
  uVar21 = *(undefined8 *)(puVar2 + 0x26);
  uVar19 = *(undefined8 *)(puVar2 + 0x22);
  uVar20 = *(undefined8 *)(puVar2 + 0x24);
  *(undefined8 *)((long)puVar3 + 0x9d) = *(undefined8 *)((long)puVar2 + 0x9d);
  *(undefined8 *)(puVar3 + 0x24) = uVar20;
  *(undefined8 *)(puVar3 + 0x26) = uVar21;
  *(undefined8 *)(puVar3 + 0x22) = uVar19;
  memcpy((void *)((long)puVar3 + 0xa5),(void *)((long)puVar2 + 0xa5),0x800);
  uVar7 = *(undefined1 *)((long)puVar2 + 0x8a5);
  *(undefined2 *)((long)puVar3 + 0x8a6) = 0;
  *(undefined1 *)((long)puVar3 + 0x8a5) = uVar7;
  FUN_027c1b80(puVar3);
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 0x18), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  if ((((uVar12 & 1) == 0) && (*(long *)(lVar23 + 0x28) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar23 + 0x28) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
LAB_02205724:
  FUN_007ef010(auStack_98,local_94);
  FUN_00805ba8(&local_78,auStack_98);
  *(undefined4 *)param_3 = (undefined4)local_78;
  *(undefined4 *)(param_3 + 2) = local_78._4_4_;
  return;
}

