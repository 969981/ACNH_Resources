
void FUN_01303ac8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  long lVar14;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_94;
  uint uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_04bbc2f8;
  puVar9 = PTR_DAT_04bbc220;
  puVar8 = PTR_DAT_04bb27a8;
  sVar3 = *(short *)(param_1 + 0x84);
  if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
    sVar3 = *(short *)(param_1 + 0x88);
  }
  sVar4 = *(short *)(param_1 + 0x86);
  if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
    sVar4 = *(short *)(param_1 + 0x8a);
  }
  uVar11 = *(int *)(param_1 + 0x1c) - (int)sVar4;
  uVar5 = *(int *)(param_1 + 0x18) - (int)sVar3;
  puVar1 = (undefined *)(param_1 + 0x8c + (ulong)(uVar11 * 3 + uVar5) * 0xe);
  if (2 < uVar11 || 2 < uVar5) {
    puVar1 = PTR_DAT_04bbc2f8;
  }
  uVar11 = (uint)(byte)puVar1[0xc];
  if (uVar11 == 0) {
    return;
  }
  if (3 < uVar11) {
    uVar11 = 0;
  }
  if (*(int *)(param_2 + 0x10) == 2) {
    local_68 = 1;
    local_78 = PTR_DAT_04bbc220 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb27a8;
    if ((int)*(uint *)(lVar14 + 0x5d0) < 1) {
      if ((((*(long *)(lVar14 + 0x4c0) == 0) ||
           (puVar12 = *(uint **)(*(long *)(lVar14 + 0x4c0) + 8), puVar12 == (uint *)0x0)) ||
          ((1 < *(uint *)(lVar14 + 0x4d8) && (*(char *)(*(long *)(lVar14 + 0x4e0) + 1) == '\0'))))
         || (((*puVar12 < 2 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0)))) goto LAB_01303de8;
      iVar13 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      local_70 = (ulong)(puVar12[1] + (uint)(ushort)puVar12[2] * 8 + iVar13) + (long)puVar12;
    }
    else if (*(uint *)(lVar14 + 0x5d0) < 2) {
LAB_01303de8:
      local_70 = 0;
    }
    else {
      local_70 = *(long *)(*(long *)(lVar14 + 0x5c8) + (ulong)(1 < *(uint *)(lVar14 + 0x5c0)) * 8);
    }
    local_a0 = local_a0 & 0xffffff00;
    local_b0 = 0;
    local_a8 = (ulong)(ushort)((uint)(undefined4)local_a8 >> 0x10) << 0x10;
    local_c0 = (undefined *)0x500000000;
    uStack_b8 = 0;
    FUN_012efe10(&local_78,&local_c0);
    FUN_01305bb0(param_1,&local_c0,uVar11,5,0);
    local_b0 = 0x300000003;
    local_a8 = 0x300000003;
    local_a0 = 3;
    uStack_9c = 3;
    uStack_98 = 3;
    local_94 = 3;
    local_c0 = PTR_DAT_04bbc328 + 0x10;
    uStack_90 = 3;
    local_8c = 3;
    uStack_88 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_7c = 0;
    uStack_b8 = 0x300000003;
    uVar5 = *(uint *)(param_1 + 0x50);
    sVar3 = *(short *)(param_1 + 0x84);
    if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
      sVar3 = *(short *)(param_1 + 0x88);
    }
    sVar4 = *(short *)(param_1 + 0x86);
    if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
      sVar4 = *(short *)(param_1 + 0x8a);
    }
    uVar6 = *(int *)(param_1 + 0x1c) - (int)sVar4;
    uVar7 = *(int *)(param_1 + 0x18) - (int)sVar3;
    puVar1 = (undefined *)(param_1 + 0x8c + (ulong)(uVar6 * 3 + uVar7) * 0xe);
    if (2 < uVar6 || 2 < uVar7) {
      puVar1 = puVar2;
    }
    puVar2 = puVar1 + (ulong)uVar5 * 6;
    if (1 < uVar5) {
      puVar2 = puVar1;
    }
    local_78._0_4_ = uVar5;
    FUN_01312d70(&local_c0,puVar2[4]);
    uVar5 = *(uint *)(param_1 + 0x50);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar5);
    lVar14 = param_1 + 0x110 + (ulong)uVar5 * 0x930;
    if (1 < uVar5) {
      lVar14 = param_1 + 0x110;
    }
    FUN_01302290(lVar14,&local_c0,uVar11,param_1 + 0x10);
    lVar14 = *(long *)puVar8;
    local_78 = puVar9 + 0x10;
    local_68 = 1;
    if ((int)*(uint *)(lVar14 + 0x5d0) < 1) {
      if (((*(long *)(lVar14 + 0x4c0) == 0) ||
          (puVar12 = *(uint **)(*(long *)(lVar14 + 0x4c0) + 8), puVar12 == (uint *)0x0)) ||
         (((1 < *(uint *)(lVar14 + 0x4d8) && (*(char *)(*(long *)(lVar14 + 0x4e0) + 1) == '\0')) ||
          (((*puVar12 < 2 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0)))))) goto LAB_01303fa4;
      iVar13 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      local_70 = (ulong)(puVar12[1] + (uint)(ushort)puVar12[2] * 8 + iVar13) + (long)puVar12;
    }
    else if (*(uint *)(lVar14 + 0x5d0) < 2) {
LAB_01303fa4:
      local_70 = 0;
    }
    else {
      local_70 = *(long *)(*(long *)(lVar14 + 0x5c8) + (ulong)(1 < *(uint *)(lVar14 + 0x5c0)) * 8);
    }
    local_a8._2_6_ = (uint6)((ulong)local_a8 >> 0x10) & 0xffff;
    local_a0 = local_a0 & 0xffffff00;
    local_b0 = 0;
    local_a8 = (ulong)local_a8._2_6_ << 0x10;
    local_c0 = (undefined *)0x500000000;
    uStack_b8 = 0;
    FUN_012efe10(&local_78,&local_c0);
    uVar10 = 0;
    goto LAB_01303fe0;
  }
  if (*(int *)(param_2 + 0x10) != 1) {
    return;
  }
  local_a0 = *(uint *)(param_2 + 4);
  local_b0 = 0x500000005;
  uStack_9c = 5;
  uStack_98 = 5;
  local_8c = 5;
  uStack_88 = 5;
  local_84 = 5;
  uStack_80 = 5;
  local_c0 = PTR_DAT_04bbc328 + 0x10;
  uStack_b8 = 0x500000005;
  local_a8 = CONCAT44(local_a0,5);
  local_7c = 5;
  uVar5 = *(uint *)(param_1 + 0x50);
  lVar14 = param_1 + 0x110 + (ulong)uVar5 * 0x930;
  if (1 < uVar5) {
    lVar14 = param_1 + 0x110;
  }
  local_94 = local_a0;
  uStack_90 = local_a0;
  local_78._0_4_ = uVar5;
  FUN_01302290(lVar14,&local_c0,uVar11,param_1 + 0x10);
  uVar5 = local_78._4_4_;
  local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
  if (*(uint *)(param_2 + 4) < 0xd) {
    local_78 = (undefined *)CONCAT44(uVar5,1 << (ulong)(*(uint *)(param_2 + 4) & 0x1f));
  }
  FUN_01307fc0(param_1,&local_78,&local_c0,uVar11);
  local_68 = 2;
  local_78 = PTR_DAT_04bbc220 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  local_c0._0_4_ = 2;
  if ((int)*(uint *)(lVar14 + 0x5d0) < 1) {
    if (((*(long *)(lVar14 + 0x4c0) == 0) ||
        (puVar12 = *(uint **)(*(long *)(lVar14 + 0x4c0) + 8), puVar12 == (uint *)0x0)) ||
       (((2 < *(uint *)(lVar14 + 0x4d8) && (*(char *)(*(long *)(lVar14 + 0x4e0) + 2) == '\0')) ||
        (((*puVar12 < 3 || (puVar12[1] == 0)) || ((ushort)puVar12[2] == 0)))))) goto LAB_01303d38;
    iVar13 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    local_70 = (ulong)(puVar12[1] * 2 + (uint)(ushort)puVar12[2] * 8 + iVar13) + (long)puVar12;
  }
  else if (*(uint *)(lVar14 + 0x5d0) < 3) {
LAB_01303d38:
    local_70 = 0;
  }
  else {
    if (*(uint *)(lVar14 + 0x5c0) < 3) {
      local_c0._0_4_ = 0;
    }
    local_70 = *(long *)(*(long *)(lVar14 + 0x5c8) + (ulong)(uint)local_c0 * 8);
  }
  local_a8._2_6_ = (uint6)((ulong)local_a8 >> 0x10) & 0xffff;
  local_a0 = local_a0 & 0xffffff00;
  local_b0 = 0;
  local_a8 = (ulong)local_a8._2_6_ << 0x10;
  local_c0 = (undefined *)0x500000000;
  uStack_b8 = 0;
  FUN_012efe10(&local_78,&local_c0);
  uVar10 = 1;
LAB_01303fe0:
  FUN_01305bb0(param_1,&local_c0,uVar11 - 1,5,uVar10);
  return;
}

