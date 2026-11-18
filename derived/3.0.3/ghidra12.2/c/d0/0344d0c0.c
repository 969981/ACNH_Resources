
bool FUN_0344d0c0(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  
  if (param_2 < 100) {
    if ((param_3 & 1) == 0) {
      pbVar3 = &DAT_04c8c100;
      if ((DAT_04c8c100 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
        pbVar3 = PTR_DAT_04bb3128;
        if (iVar1 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          pbVar3 = &DAT_04c8c100;
        }
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar6 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0x1a) goto LAB_0344d18c;
          uVar6 = uVar6 + 1;
        } while (DAT_04c8c0f0 != uVar6);
      }
      uVar6 = 0;
LAB_0344d18c:
      puVar4 = &DAT_04c8c0f0;
      if ((*pbVar3 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
        puVar4 = (uint *)PTR_DAT_04bb3120;
        if (iVar1 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
        }
      }
      uVar5 = (uint)uVar6;
      if (*puVar4 <= uVar5) {
        uVar5 = 0;
      }
      uVar2 = (ushort)param_2 & 0x7f |
              (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb);
    }
    else {
      pbVar3 = &DAT_04c8c100;
      if ((DAT_04c8c100 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
        pbVar3 = PTR_DAT_04bb3128;
        if (iVar1 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          pbVar3 = &DAT_04c8c100;
        }
      }
      if (0 < (int)DAT_04c8c0f0) {
        uVar6 = 0;
        do {
          if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == 0x1a) goto LAB_0344d120;
          uVar6 = uVar6 + 1;
        } while (DAT_04c8c0f0 != uVar6);
      }
      uVar6 = 0;
LAB_0344d120:
      puVar4 = &DAT_04c8c0f0;
      if ((*pbVar3 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_04c8c100);
        puVar4 = (uint *)PTR_DAT_04bb3120;
        if (iVar1 != 0) {
          FUN_00706e58(&DAT_04c8c0f0);
          __cxa_guard_release(&DAT_04c8c100);
          puVar4 = (uint *)PTR_DAT_04bb3120;
        }
      }
      uVar5 = (uint)uVar6;
      if (*puVar4 <= uVar5) {
        uVar5 = 0;
      }
      uVar2 = (ushort)param_2 & 0x7f |
              (ushort)(*(int *)(*(long *)(puVar4 + 2) + (long)(int)uVar5 * 4) << 0xb) | 0x80;
    }
    *param_1 = uVar2;
  }
  return param_2 < 100;
}

