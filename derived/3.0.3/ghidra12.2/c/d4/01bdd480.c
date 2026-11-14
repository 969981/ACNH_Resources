
uint FUN_01bdd480(long *param_1,long param_2,long param_3,long param_4,long param_5,uint param_6)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_188;
  undefined8 *puStack_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined1 auStack_92 [2];
  undefined4 local_90 [2];
  long local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  
  local_174 = 0;
  uVar9 = 0x10;
  if ((param_6 & 1) == 0) {
    uVar9 = 8;
  }
  local_105 = 0;
  local_178 = 0xb;
  local_170 = 0xffffffff;
  uStack_168 = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 1) = uVar9;
  param_1[7] = param_2;
  param_1[8] = 0;
  local_160 = 0xffffffff;
  puStack_150 = local_144;
  local_148 = 0x40;
  local_144[0] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = param_4;
  local_158 = PTR_DAT_04bb2bc0 + 0x10;
  puStack_180 = &local_a8;
  local_f0 = 0x40;
  local_ad = 0;
  local_ec[0] = 0;
  puStack_f8 = local_ec;
  uStack_98 = 0;
  local_188 = PTR_DAT_04bb5128 + 0x10;
  puVar2 = auStack_92;
  if (auStack_92 <= (undefined1 *)((long)&local_a8 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_a8 + 2U);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_9a = 0;
  local_100 = local_158;
  memset(puStack_180,0,(ulong)(puVar2 + (-0xe1 - (long)&local_188)) & 0xfffffffffffffffc | 2);
  local_90[0] = 10;
  local_88 = param_5 + 0x20;
  FUN_0082b014(&local_188);
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 1;
  local_54 = 0;
  local_80 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_78 = 0;
  FUN_02906b00(&local_80,&local_188,local_90);
  iVar7 = *(int *)(param_5 + 0x34);
  puVar8 = (undefined4 *)(**(code **)(local_188 + 0x40))(&local_188);
  uVar9 = 1;
  if (iVar7 == 1) {
    uVar9 = 2;
  }
  *puVar8 = uVar9;
  if (((DAT_0533a3c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0533a3c0), iVar7 != 0)) {
    FUN_01bb25c8(&DAT_0533a3b0);
    __cxa_guard_release(&DAT_0533a3c0);
  }
  if (0 < (int)DAT_0533a3b0) {
    uVar10 = 0;
    do {
      if (*(int *)(DAT_0533a3b8 + uVar10 * 4) == 0x73) goto LAB_01bdd61c;
      uVar10 = uVar10 + 1;
    } while (DAT_0533a3b0 != uVar10);
  }
  uVar10 = 0;
LAB_01bdd61c:
  local_80 = (undefined *)CONCAT44(local_80._4_4_,(int)uVar10);
  FUN_01bae480(param_1 + 2,&local_188,0,&local_80,0);
  puVar3 = PTR_DAT_04bb28f8;
  lVar11 = *(long *)PTR_DAT_04bb28f8;
  plVar1 = (long *)(lVar11 + 0x2688);
  nn::os::LockMutex((MutexType *)(lVar11 + 0x26b0));
  *(long **)(lVar11 + 0x2688) = param_1;
  uVar4 = FUN_01bde430(plVar1);
  uVar5 = FUN_01bde840(plVar1);
  uVar6 = *(uint *)(*(long *)(lVar11 + 0x2688) + 8);
  if ((uVar6 >> 3 & 1) == 0) {
    if ((uVar6 >> 4 & 1) == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = FUN_01bdf6c0(plVar1);
    }
  }
  else {
    uVar6 = FUN_01bdf2bc(plVar1);
  }
  if (*(char *)(*plVar1 + 0x1c) != '\0') {
    FUN_01bc1880(*(long *)puVar3 + 0x2990,*plVar1 + 0x18);
  }
  *plVar1 = 0;
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x26b0));
  (**(code **)(*param_1 + 0x10))(param_1);
  return uVar4 & uVar5 & uVar6 & 1;
}

