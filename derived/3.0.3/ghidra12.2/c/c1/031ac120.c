
void FUN_031ac120(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc [63];
  undefined1 local_17d;
  undefined8 local_178;
  undefined *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined1 local_15c [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [15];
  undefined1 local_11d;
  undefined8 local_118;
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  undefined1 auStack_6a [2];
  undefined4 local_68;
  
  plVar12 = *(long **)(param_1 + 600);
  puVar14 = *(uint **)(param_1 + 0x240);
  *(undefined4 *)(plVar12 + 1) = 0;
  iVar8 = (**(code **)(*plVar12 + 0x40))(plVar12);
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      plVar10 = (long *)(**(code **)(*plVar12 + 0x38))(plVar12,iVar8);
      if ((plVar10 != (long *)0x0) && (uVar11 = (**(code **)(*plVar10 + 8))(), (uVar11 & 1) != 0)) {
        uVar2 = *puVar14;
        if (6 < uVar2) {
          uVar2 = 0;
        }
        uVar11 = (*(code *)(&PTR_FUN_04b08490)[(ulong)uVar2 * 3])(plVar10);
        if (((uVar11 & 1) != 0) && ((int)plVar12[1] < *(int *)((long)plVar12 + 0xc))) {
          *(long **)(plVar12[2] + (long)(int)plVar12[1] * 8) = plVar10;
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar9 = (**(code **)(*plVar12 + 0x40))(plVar12);
    } while (iVar8 < iVar9);
  }
  puVar5 = PTR_DAT_04bb2bc0;
  lVar15 = *(long *)(param_1 + 0x210);
  uVar2 = **(uint **)(param_1 + 0x240);
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 600) + 8);
  local_160 = 0x13;
  local_15c[0] = 0;
  local_130 = 0x40;
  local_148 = 0xffffffff;
  local_158 = 0xffffffff;
  uStack_150 = 0xffffffff00000000;
  puStack_138 = local_12c;
  local_d8 = 0x40;
  puStack_e0 = local_d4;
  local_ed = 0;
  local_12c[0] = 0;
  local_168 = &local_90;
  if (6 < uVar2) {
    uVar2 = 0;
  }
  local_95 = 0;
  local_140 = PTR_DAT_04bb2bc0 + 0x10;
  local_d4[0] = 0;
  uVar4 = (&DAT_04b08480)[(ulong)uVar2 * 6];
  local_170 = PTR_DAT_04bc0bc0 + 0x10;
  local_90 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_72 = 0;
  puVar1 = auStack_6a;
  if (auStack_6a <= (undefined1 *)((long)&local_90 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_90 + 2U);
  }
  local_e8 = local_140;
  memset(local_168,0,(ulong)(puVar1 + (-0xe1 - (long)&local_170)) & 0xfffffffffffffffc | 2);
  puVar6 = PTR_DAT_04bb3448;
  local_68 = 0;
  FUN_01be4af0(&local_170,**(undefined4 **)PTR_DAT_04bb3448,uVar3,3,1,0);
  puVar7 = PTR_DAT_04bc4e60;
  puVar13 = (undefined8 *)**(undefined8 **)(lVar15 + 0x3f8);
  local_68 = uVar3;
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
    if ((uVar11 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
  }
  local_1d0 = puVar5 + 0x10;
  local_17d = 0;
  local_1c0 = 0x40;
  puStack_1c8 = local_1bc;
  local_1bc[0] = 0;
  local_178 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    local_178 = *(undefined8 *)puVar13[0x43];
  }
  FUN_034632e0(&local_1d0,&local_170);
  FUN_01be4af0(&local_170,**(undefined4 **)puVar6,uVar4,3,1,0);
  puVar13 = (undefined8 *)**(undefined8 **)(lVar15 + 0x3f8);
  local_68 = uVar4;
  if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
    if ((uVar11 & 1) == 0) {
      puVar13 = (undefined8 *)0x0;
    }
  }
  local_1d0 = puVar5 + 0x10;
  local_17d = 0;
  local_1c0 = 0x40;
  puStack_1c8 = local_1bc;
  local_1bc[0] = 0;
  local_178 = 0;
  if (puVar13 != (undefined8 *)0x0) {
    local_178 = *(undefined8 *)(puVar13[0x43] + (ulong)(1 < *(uint *)(puVar13 + 0x42)) * 8);
  }
  FUN_034632e0(&local_1d0,&local_170);
  puVar13 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar6 = PTR_DAT_04bc4e58;
  uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58);
  if ((uVar11 & 1) == 0) {
    puVar13 = (undefined8 *)0x0;
  }
  local_118 = *(undefined8 *)(puVar13[0x43] + (ulong)(4 < *(uint *)(puVar13 + 0x42)) * 0x20);
  local_168 = (undefined8 *)local_15c;
  local_160 = 0x40;
  local_170 = puVar5 + 0x10;
  local_11d = 0;
  local_15c[0] = 0;
  local_1e0 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c8 = &DAT_040a02ee;
  uVar2 = **(uint **)(param_1 + 0x240);
  if (6 < uVar2) {
    uVar2 = 0;
  }
  puStack_1d8 = (&PTR_DAT_04b08488)[(ulong)uVar2 * 3];
  local_1d0 = local_1e0;
  FUN_03462ecc(&local_170,&local_1d0,&local_1e0);
  iVar8 = *(int *)(*(long *)(param_1 + 600) + 8);
  puVar13 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar9 != 0)) {
    *(undefined **)puVar6 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar13 != (undefined8 *)0x0) &&
     (uVar11 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bc4e58), (uVar11 & 1) != 0)) {
    lVar15 = 0x30;
    if (*(uint *)(puVar13 + 0x44) < 7) {
      lVar15 = 0;
    }
    plVar12 = *(long **)(puVar13[0x45] + lVar15);
    if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
      uVar16 = 0x3f800000;
      if (0 < iVar8) {
        uVar16 = 0;
      }
      local_170 = PTR_DAT_04bc4f00 + 0x10;
      local_168 = (undefined8 *)CONCAT44(local_168._4_4_,0x14);
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_170);
      (**(code **)(plVar12[3] + 0x158))(uVar16,plVar12[1]);
    }
  }
  return;
}

