
void FUN_02655330(ushort *param_1,undefined8 param_2,ushort param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [2];
  
  puVar1 = PTR_DAT_04bb3128;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 1) goto LAB_0265539c;
      uVar6 = uVar6 + 1;
    } while (DAT_04c8c0f0 != uVar6);
  }
  uVar6 = 0;
LAB_0265539c:
  uVar5 = (uint)uVar6;
  *param_1 = 0;
  puVar4 = &DAT_04c8c0f0;
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    puVar4 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar4 = (uint *)PTR_DAT_04bb3120;
    }
  }
  if (*puVar4 <= uVar5) {
    uVar5 = 0;
  }
  *param_1 = param_3 & 0x7f |
             (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb);
  FUN_007ef010(auStack_12,param_4);
  FUN_007ef010(auStack_14,param_1);
  FUN_02652f70(auStack_12,auStack_14);
  if (*(uint *)(DAT_0537d558 + 0x80) < 2) {
    return;
  }
  uVar7 = *(undefined8 *)PTR_DAT_04bb3708;
  uVar3 = FUN_02582a24(param_2,1);
  FUN_007f11c4(uVar7,uVar3,param_1,1);
  return;
}

