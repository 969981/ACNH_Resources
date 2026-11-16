
void FUN_02656220(ushort *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [2];
  
  bVar1 = *param_2;
  pbVar4 = PTR_DAT_04bb3128;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    pbVar4 = &DAT_04c8c100;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      pbVar4 = &DAT_04c8c100;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == 0xc) goto LAB_0265628c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_0265628c:
  *param_1 = 0;
  uVar8 = bVar1 & 0x7f;
  puVar5 = &DAT_04c8c0f0;
  if ((*pbVar4 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar5 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0,param_3);
      __cxa_guard_release(&DAT_04c8c100);
      puVar5 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar6 = (uint)uVar7;
  if (*puVar5 <= uVar6) {
    uVar6 = 0;
  }
  if (7 < bVar1) {
    uVar8 = 0x7f;
  }
  *param_1 = uVar8 | (ushort)(*(int *)(*(long *)(puVar5 + 2) + (long)(int)uVar6 * 4) << 0xb);
  FUN_007ef010(auStack_12,param_3);
  FUN_007ef010(auStack_14,param_1);
  FUN_02652f70(auStack_12,auStack_14);
  if (*(uint *)(DAT_0537d558 + 0x80) < 2) {
    return;
  }
  uVar9 = *(undefined8 *)PTR_DAT_04bb3708;
  uVar3 = FUN_02582a24(param_2,1);
  FUN_007f11c4(uVar9,uVar3,param_1,1);
  return;
}

