
void FUN_027af340(uint *param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar3 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  pbVar5 = PTR_DAT_04bb8aa8;
  puVar6 = (uint *)PTR_DAT_04bb8aa0;
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar4 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar4 * 4) == 0) goto LAB_027af398;
      uVar4 = uVar4 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar4);
  }
  uVar4 = 0;
LAB_027af398:
  *param_1 = (uint)uVar4;
  if (((*pbVar5 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), pbVar5 = PTR_DAT_04bb8aa8,
     puVar6 = (uint *)PTR_DAT_04bb8aa0, iVar3 != 0)) {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
    pbVar5 = PTR_DAT_04bb8aa8;
    puVar6 = (uint *)PTR_DAT_04bb8aa0;
  }
  uVar1 = *puVar6;
  if (uVar1 != 0) {
    uVar7 = 0;
    do {
      bVar2 = *param_2;
      if (((*pbVar5 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), pbVar5 = PTR_DAT_04bb8aa8,
         puVar6 = (uint *)PTR_DAT_04bb8aa0, iVar3 != 0)) {
        FUN_00dd5f80(PTR_DAT_04bb8aa0);
        __cxa_guard_release(PTR_DAT_04bb8aa8);
        pbVar5 = PTR_DAT_04bb8aa8;
        puVar6 = (uint *)PTR_DAT_04bb8aa0;
      }
      uVar8 = uVar7;
      if (*puVar6 <= uVar7) {
        uVar8 = 0;
      }
      if (*(uint *)(*(long *)(puVar6 + 2) + (long)(int)uVar8 * 4) == (uint)bVar2) {
        *param_1 = uVar7;
        return;
      }
      uVar8 = 0x2a;
      if ((int)uVar7 < 0x2b) {
        uVar8 = uVar7 + 1;
      }
      uVar7 = uVar8;
    } while (uVar8 != uVar1);
  }
  return;
}

