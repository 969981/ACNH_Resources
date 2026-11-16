
void FUN_02655000(ushort *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  
  pbVar4 = &DAT_04c8c100;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    pbVar4 = PTR_DAT_04bb3128;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      pbVar4 = &DAT_04c8c100;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == 0xb) goto LAB_0265505c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_0265505c:
  *param_1 = 0;
  bVar1 = *param_2;
  puVar3 = &DAT_04c8c0f0;
  if ((*pbVar4 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04c8c100);
    puVar3 = (uint *)PTR_DAT_04bb3120;
    if (iVar2 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      puVar3 = (uint *)PTR_DAT_04bb3120;
    }
  }
  uVar6 = (uint)uVar7;
  if (*puVar3 <= uVar6) {
    uVar6 = 0;
  }
  uVar5 = bVar1 & 0x7f;
  if (7 < bVar1) {
    uVar5 = 0x7f;
  }
  *param_1 = uVar5 | (ushort)(*(int *)(*(long *)(puVar3 + 2) + (long)(int)uVar6 * 4) << 0xb);
  return;
}

