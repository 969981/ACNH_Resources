
void FUN_02657730(ushort *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  undefined1 auStack_4 [2];
  undefined1 auStack_2 [2];
  
  pbVar4 = PTR_DAT_04bb3128;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    pbVar4 = PTR_DAT_04bb3128;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      pbVar4 = &DAT_04c8c100;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0x19) goto LAB_0265778c;
      uVar6 = uVar6 + 1;
    } while (DAT_04c8c0f0 != uVar6);
  }
  uVar6 = 0;
LAB_0265778c:
  *param_1 = 0;
  bVar1 = *param_2;
  uVar7 = (ushort)bVar1;
  puVar3 = &DAT_04c8c0f0;
  if ((*pbVar4 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar3 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0,param_3);
      __cxa_guard_release(&DAT_04c8c100);
      puVar3 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar5 = (uint)uVar6;
  if (*puVar3 <= uVar5) {
    uVar5 = 0;
  }
  if (7 < bVar1) {
    uVar7 = 0x7f;
  }
  *param_1 = uVar7 | (ushort)(*(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar5 * 4) << 0xb) | 0x180
  ;
  FUN_007ef010(auStack_2,param_3);
  FUN_007ef010(auStack_4,param_1);
  FUN_02652f70(auStack_2,auStack_4);
  return;
}

