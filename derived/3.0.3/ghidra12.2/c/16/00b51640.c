
void FUN_00b51640(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  undefined *local_190;
  undefined8 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  undefined6 uStack_a8;
  undefined2 local_a2;
  undefined6 uStack_a0;
  undefined1 auStack_9a [2];
  undefined *local_98;
  long local_90;
  char local_88;
  byte local_87;
  undefined4 local_80 [2];
  int *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  uVar3 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((int)plVar9[0xa0] != 0) {
    return;
  }
  lVar4 = FUN_0265c2a0((int)plVar9[0xa1]);
  if (lVar4 == 0) {
    return;
  }
  local_88 = '\x01';
  local_90 = lVar4;
  if (*(long **)(lVar4 + 0x28) == (long *)0x0) {
    local_87 = 0;
  }
  else {
    puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28);
    local_87 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      local_87 = (**(code **)*puVar5)();
    }
  }
  local_87 = local_87 & 1;
  local_98 = PTR_DAT_04bb67a0 + 0x10;
  lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  if ((*(int *)(lVar10 + 0x20) != 0) && (piVar11 = (int *)(lVar10 + 4), *piVar11 != 0)) {
    iVar2 = FUN_02746e10(lVar10 + 0x3c,param_2);
    if (iVar2 != 0) goto LAB_00b518ac;
    lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  }
  if ((*(int *)(lVar10 + 0x610) != 0) && (*(int *)(lVar10 + 0x5f4) != 0)) {
    iVar2 = FUN_02746e10(lVar10 + 0x62c,param_2);
    if (iVar2 != 0) {
      piVar11 = (int *)(lVar10 + 0x5f4);
      goto LAB_00b518ac;
    }
    lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  }
  if ((*(int *)(lVar10 + 0xc00) != 0) && (*(int *)(lVar10 + 0xbe4) != 0)) {
    iVar2 = FUN_02746e10(lVar10 + 0xc1c,param_2);
    if (iVar2 != 0) {
      piVar11 = (int *)(lVar10 + 0xbe4);
      goto LAB_00b518ac;
    }
    lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  }
  if ((*(int *)(lVar10 + 0x11f0) == 0) || (*(int *)(lVar10 + 0x11d4) == 0)) {
LAB_00b517e4:
    if ((*(int *)(lVar10 + 0x17e0) != 0) && (*(int *)(lVar10 + 0x17c4) != 0)) {
      iVar2 = FUN_02746e10(lVar10 + 0x17fc,param_2);
      if (iVar2 != 0) {
        lVar4 = 0x17c4;
        goto LAB_00b518a8;
      }
      lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    }
    if ((*(int *)(lVar10 + 0x1dd0) != 0) && (*(int *)(lVar10 + 0x1db4) != 0)) {
      iVar2 = FUN_02746e10(lVar10 + 0x1dec,param_2);
      if (iVar2 != 0) {
        lVar4 = 0x1db4;
        goto LAB_00b518a8;
      }
      lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    }
    if ((*(int *)(lVar10 + 0x23c0) != 0) && (*(int *)(lVar10 + 0x23a4) != 0)) {
      iVar2 = FUN_02746e10(lVar10 + 0x23dc,param_2);
      if (iVar2 != 0) {
        lVar4 = 0x23a4;
        goto LAB_00b518a8;
      }
      lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    }
    if (((*(int *)(lVar10 + 0x29b0) == 0) || (*(int *)(lVar10 + 0x2994) == 0)) ||
       (iVar2 = FUN_02746e10(lVar10 + 0x29cc,param_2), iVar2 == 0)) {
      FUN_02640184(&local_98);
      return;
    }
    lVar4 = 0x2994;
  }
  else {
    iVar2 = FUN_02746e10(lVar10 + 0x120c,param_2);
    if (iVar2 == 0) {
      lVar10 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
      goto LAB_00b517e4;
    }
    lVar4 = 0x11d4;
  }
LAB_00b518a8:
  piVar11 = (int *)(lVar10 + lVar4);
LAB_00b518ac:
  puStack_100 = local_f4;
  puStack_188 = &local_b0;
  uVar7 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
  local_180 = 0xb;
  local_17c = 0;
  local_178 = 0xffffffff;
  uStack_170 = 0xffffffff00000000;
  local_168 = 0xffffffff;
  local_150 = 0x40;
  local_10d = 0;
  local_f8 = 0x40;
  puStack_158 = local_14c;
  local_14c[0] = 0;
  local_b5 = 0;
  local_f4[0] = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a2 = 0;
  local_160 = PTR_DAT_04bb2bc0 + 0x10;
  local_190 = PTR_DAT_04bb5128 + 0x10;
  puVar1 = auStack_9a;
  if (auStack_9a <= (undefined1 *)((long)&local_b0 + 2U)) {
    puVar1 = (undefined1 *)((long)&local_b0 + 2U);
  }
  local_108 = local_160;
  memset(puStack_188,0,(ulong)(puVar1 + (-0xe1 - (long)&local_190)) & 0xfffffffffffffffc | 2);
  local_80[0] = 10;
  local_78 = piVar11 + 8;
  FUN_0082b014(&local_190);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_48 = 1;
  local_44 = 0;
  local_70 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_68 = 0;
  FUN_02906b00(&local_70,&local_190,local_80);
  iVar2 = piVar11[0xd];
  puVar6 = (undefined4 *)(**(code **)(local_190 + 0x40))(&local_190);
  uVar8 = 1;
  if (iVar2 == 1) {
    uVar8 = 2;
  }
  *puVar6 = uVar8;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar2 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar3 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar3 * 4) == 0x73) goto LAB_00b51a10;
      uVar3 = uVar3 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar3);
  }
  uVar3 = 0;
LAB_00b51a10:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,(int)uVar3);
  FUN_01bae480(uVar7,&local_190,0,&local_70,0);
  if (local_87 != 0) {
    lVar4 = *(long *)(local_90 + 0x28);
    if (local_88 == '\0') {
      if (lVar4 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(lVar4 + 0x18);
    }
    else {
      if (lVar4 == 0) {
        return;
      }
      puVar5 = *(undefined8 **)(lVar4 + 8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  return;
}

