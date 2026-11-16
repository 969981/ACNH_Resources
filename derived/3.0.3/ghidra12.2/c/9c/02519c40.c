
void FUN_02519c40(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  byte bVar16;
  byte bVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined2 local_a8;
  byte bStack_a6;
  undefined5 uStack_a5;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (7 < *param_1) {
    return;
  }
  local_40 = param_2;
  uVar9 = FUN_02582d8c(param_1,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if (7 < uVar9) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 != -1) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,0x20);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar2[1] & 1) != 0) {
      local_c0 = (long *)((ulong)local_c0._4_4_ << 0x20);
      if ((*puVar2 & 1) == 0) {
        if (((((7 < *param_1) || (uVar9 = FUN_02582d8c(param_1,1), 7 < uVar9)) ||
             (lVar12 = *(long *)puVar3, *(char *)(lVar12 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0'))
            || ((*(char *)(lVar12 + (ulong)uVar9 * 0x13f0 + 0x13d6) == '\0' ||
                (uVar9 = FUN_02582d8c(param_1,1), 7 < uVar9)))) ||
           (lVar12 = *(long *)puVar3, *(char *)(lVar12 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0'))
        goto LAB_02519dcc;
        bVar8 = *(int *)(lVar12 + (ulong)uVar9 * 0x13f0 + 0x13b8) == 2;
      }
      else {
        bVar8 = false;
      }
      FUN_0274bfe8(param_1,&DAT_054f5728,bVar8);
    }
  }
LAB_02519dcc:
  iVar10 = FUN_0274bce0(param_1,&DAT_054f5728);
  bVar8 = iVar10 != 0;
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x15c) == 0)) {
LAB_02519e38:
    lVar12 = *(long *)PTR_DAT_04bb27d0;
    if ((((lVar12 != 0) && (*(long *)(lVar12 + 0x28) != 0)) && (iVar10 != 0)) &&
       (*(int *)(lVar12 + 0x80) == 1)) {
LAB_02519e68:
      FUN_0274bfe8(param_1,&DAT_054f5728,0);
      bVar8 = false;
    }
    bVar4 = *param_1;
  }
  else {
    bVar4 = *param_1;
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar12 + 0x158);
    }
    bVar16 = *pbVar1;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    bVar17 = bVar4;
    if (7 < bVar4) {
      bVar17 = 0xff;
    }
    if (bVar16 == bVar17) goto LAB_02519e38;
    if (iVar10 != 0) goto LAB_02519e68;
    bVar8 = false;
  }
  puVar13 = (undefined8 *)(DAT_054f5738 + 0x2e8);
  if (bVar4 < 8) {
    puVar13 = puVar13 + (ulong)bVar4 * 0x10;
    uVar14 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)bVar4 * 0x30 + 8);
    uVar18 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)bVar4 * 0x30 + 0x10);
    uVar19 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)bVar4 * 0x30 + 0x18);
    *(undefined4 *)((long)puVar13 + 0x17) =
         *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)bVar4 * 0x30 + 0x1f);
    puVar13[1] = uVar18;
    puVar13[2] = uVar19;
    *puVar13 = uVar14;
    bVar4 = *param_1;
    bVar7 = 7 < bVar4;
    if (bVar7) {
      bVar4 = 0xff;
    }
    puVar3 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar4 * 0x70;
    if (bVar7) {
      puVar3 = PTR_DAT_04bc31b8;
    }
    uVar14 = *(undefined8 *)(puVar3 + 8);
    uVar18 = *(undefined8 *)(puVar3 + 0x18);
    puVar13[5] = *(undefined8 *)(puVar3 + 0x10);
    puVar13[6] = uVar18;
    puVar13[4] = uVar14;
    uVar14 = *(undefined8 *)(puVar3 + 0x20);
    uVar18 = *(undefined8 *)(puVar3 + 0x28);
    uVar19 = *(undefined8 *)(puVar3 + 0x38);
    puVar13[9] = *(undefined8 *)(puVar3 + 0x30);
    puVar13[10] = uVar19;
    puVar13[7] = uVar14;
    puVar13[8] = uVar18;
    uVar19 = *(undefined8 *)(puVar3 + 0x50);
    uVar14 = *(undefined8 *)(puVar3 + 0x40);
    uVar18 = *(undefined8 *)(puVar3 + 0x48);
    *(undefined8 *)((long)puVar13 + 0x6e) = *(undefined8 *)(puVar3 + 0x56);
    puVar13[0xc] = uVar18;
    puVar13[0xd] = uVar19;
    puVar13[0xb] = uVar14;
  }
  local_60 = puVar13[0xc];
  local_58 = puVar13[0xd];
  local_50 = puVar13[0xe];
  local_48 = puVar13[0xf];
  local_80 = puVar13[8];
  local_78 = puVar13[9];
  local_70 = puVar13[10];
  local_68 = puVar13[0xb];
  local_a0 = puVar13[4];
  local_98 = puVar13[5];
  local_90 = puVar13[6];
  local_88 = puVar13[7];
  local_c0 = (long *)*puVar13;
  local_b8 = puVar13[1];
  local_b0 = puVar13[2];
  uVar14 = puVar13[3];
  bStack_a6 = (byte)((ulong)uVar14 >> 0x10);
  if (bVar8) {
    bStack_a6 = bStack_a6 | 8;
  }
  else {
    bStack_a6 = bStack_a6 & 0xf7;
  }
  uStack_a5 = (undefined5)((ulong)uVar14 >> 0x18);
  local_a8 = (undefined2)uVar14;
  local_3c = 3;
  local_38 = 0x1000001;
  local_34 = CONCAT31(local_34._1_3_,1);
  FUN_02558ce0(param_1,&local_c0,&local_38);
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar15 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  else {
    puVar15 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_38 = *puVar15;
  FUN_0071c8d0(&local_c0,&local_38,&local_40,0);
  plVar6 = local_c0;
  if (local_c0 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar11 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3770);
    if ((uVar11 & 1) == 0) {
      local_b8._0_2_ = (ushort)(byte)local_b8;
    }
  }
  if (((local_c0 == (long *)0x0) || ((byte)local_b8 == '\0')) || (local_b8._1_1_ == '\0')) {
    if (bVar8) {
      return;
    }
  }
  else {
    pbVar1 = (byte *)((long)local_c0 + 0x18fa);
    if (bVar8) {
      *pbVar1 = *pbVar1 | 8;
      return;
    }
    local_3c = 3;
    local_38 = 3;
    *pbVar1 = *pbVar1 & 0xf7;
  }
  FUN_0252d8f0(&local_38,param_1);
  puVar3 = PTR_DAT_04bb43c0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_38);
  lVar12 = *(long *)puVar3;
  if (lVar12 != 0) {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_b0 = 0;
      local_c0 = (long *)(PTR_DAT_04bc0510 + 0x10);
      local_b8 = CONCAT44(local_34,local_38);
      uVar9 = FUN_0277d6c4(&local_b8);
      if (*(long *)puVar3 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_38);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
             (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8), lVar12 != 0)) {
            local_b0 = lVar12;
          }
        }
      }
      uVar9 = FUN_01ad78cc(&local_c0);
      goto LAB_0251a294;
    }
  }
  uVar9 = 0;
LAB_0251a294:
  local_c0 = (long *)CONCAT44(local_c0._4_4_,uVar9);
  if ((uVar9 < 0x1a) && ((1 << (ulong)(uVar9 & 0x1f) & 0x2012000U) != 0)) {
    FUN_02471f38(param_1,PTR_DAT_04bb37e0,0,0xffffffff);
  }
  return;
}

