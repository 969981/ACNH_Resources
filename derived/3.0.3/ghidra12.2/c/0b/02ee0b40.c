
void FUN_02ee0b40(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined *local_1c8;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [63];
  undefined1 local_175;
  undefined8 local_170;
  undefined *local_168;
  undefined8 *puStack_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined1 auStack_62 [2];
  int local_60;
  int local_58;
  uint local_54;
  
  lVar9 = *(long *)PTR_DAT_04bb46b0;
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
      lVar9 = 0;
      if (lVar7 != 0) {
        lVar9 = lVar7 + 0x70;
      }
      goto LAB_02ee0bc0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = 0;
      if ((long *)puVar10[0x26] != (long *)0x0) {
        lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
      }
      goto LAB_02ee0bc0;
    }
  }
  lVar9 = 0;
LAB_02ee0bc0:
  if ((*(long **)(&LAB_001b6eb0 + lVar9) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(&LAB_001b6eb0 + lVar9), puVar10 == (undefined8 *)0x0)) {
    iVar11 = *(int *)(*(long *)(lVar9 + 0x1b6e98) + *(long *)(lVar9 + 0x1b6e90));
  }
  else {
    uVar8 = (**(code **)*puVar10)();
    iVar11 = *(int *)(*(long *)(lVar9 + 0x1b6e98) + *(long *)(lVar9 + 0x1b6e90));
    if ((((uVar8 & 1) != 0) && (*(long *)(&LAB_001b6eb0 + lVar9) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(&LAB_001b6eb0 + lVar9) + 8),
       puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  puVar3 = PTR_DAT_04bb2bc0;
  local_154 = 0;
  local_158 = 0x13;
  local_150 = 0xffffffff;
  uStack_148 = 0xffffffff00000000;
  local_140 = 0xffffffff;
  puStack_130 = local_124;
  puStack_160 = &local_88;
  local_128 = 0x40;
  iVar11 = param_2 * iVar11 * 10;
  local_e5 = 0;
  local_124[0] = 0;
  local_138 = PTR_DAT_04bb2bc0 + 0x10;
  local_d0 = 0x40;
  local_8d = 0;
  local_cc[0] = 0;
  puStack_d8 = local_cc;
  local_168 = PTR_DAT_04bc0bc0 + 0x10;
  local_88 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  puVar1 = auStack_62;
  if (auStack_62 <= (undefined1 *)((long)&local_88 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_88 + 2U);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_6a = 0;
  local_e0 = local_138;
  memset(puStack_160,0,(ulong)(puVar1 + (-0xe1 - (long)&local_168)) & 0xfffffffffffffffc | 2);
  puVar4 = PTR_DAT_04bb3448;
  local_60 = 0;
  uVar2 = 3;
  if (**(int **)PTR_DAT_04bb3448 != 8) {
    uVar2 = 0;
  }
  FUN_01be4af0(&local_168,**(int **)PTR_DAT_04bb3448,iVar11,10,uVar2,0);
  puVar5 = PTR_DAT_04bc4e60;
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  local_60 = iVar11;
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
  local_1c8 = puVar3 + 0x10;
  local_175 = 0;
  local_1b8 = 0x40;
  puStack_1c0 = local_1b4;
  local_1b4[0] = 0;
  local_170 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    lVar9 = 0x18;
    if (*(uint *)(puVar10 + 0x42) < 4) {
      lVar9 = 0;
    }
    local_170 = *(undefined8 *)(puVar10[0x43] + lVar9);
  }
  FUN_034632e0(&local_1c8,&local_168);
  puVar10 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x228) + 0x3f8);
  if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar6 != 0)) {
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
  local_1c8 = puVar3 + 0x10;
  local_175 = 0;
  local_1b8 = 0x40;
  puStack_1c0 = local_1b4;
  local_1b4[0] = 0;
  local_170 = 0;
  if (puVar10 != (undefined8 *)0x0) {
    local_170 = *(undefined8 *)(puVar10[0x43] + (ulong)(4 < *(uint *)(puVar10 + 0x42)) * 0x20);
  }
  local_58 = **(int **)puVar4;
  if (local_58 == 0xc) {
    if (((iVar11 % 10 == 2) && (iVar11 % 100 != 0xc)) ||
       ((local_54 = 3, iVar11 % 10 == 4 && (iVar11 % 100 != 0xe)))) {
      local_54 = 2;
    }
  }
  else {
    local_54 = 3;
    if (iVar11 == 0) {
      local_54 = 1;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)local_54 * 0x128;
  if (0x50 < local_54) {
    lVar9 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
  }
  FUN_034632e0(&local_1c8,lVar9);
  return;
}

