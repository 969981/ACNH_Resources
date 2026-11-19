
undefined1  [16] FUN_039dc660(long param_1,int param_2,int param_3,int param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  ulong local_68;
  
  uVar6 = (uint)LZCOUNT(param_2 + 0x20U);
  uVar3 = 0x1a - uVar6;
  local_68 = (ulong)uVar3;
  uVar3 = (0x80000000U >> (ulong)(uVar6 & 0x1f) ^ param_2 + 0x20U) >> (ulong)(uVar3 & 0x1f);
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  do {
    do {
      uVar6 = (uint)local_68;
      uVar3 = *(uint *)(param_1 + 0x4124 + (long)(int)uVar6 * 4) & -1 << (ulong)(uVar3 & 0x1f);
      if (uVar3 == 0) {
        uVar3 = *(uint *)(param_1 + 0x4120) & -2 << (ulong)(uVar6 & 0x1f);
        if (uVar3 == 0) goto LAB_039dc88c;
        uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
        uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        uVar5 = (ulong)(uVar3 + (uVar3 >> 0x10) & 0x3f);
        uVar3 = *(uint *)(param_1 + 0x4124 + uVar5 * 4);
        local_68 = uVar5;
      }
      else {
        uVar5 = (ulong)(int)uVar6;
      }
      uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
      uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar6 = uVar3 + (uVar3 >> 0x10) & 0x3f;
      piVar8 = *(int **)(param_1 + 0x4190 + uVar5 * 0x100 + (ulong)uVar6 * 8);
      if ((piVar8 == (int *)0x0) || (*piVar8 != -0x2ea54e13)) {
        nn::os::LockMutex(pMVar1);
        nn::os::UnlockMutex(pMVar1);
        FUN_039db950(param_1,extraout_x1,0);
      }
      piVar7 = piVar8;
      do {
        iVar4 = (param_4 + 0x20 + (param_3 - 1U) + (int)piVar7 & ~(param_3 - 1U)) - (int)piVar7;
        uVar3 = iVar4 - param_4;
        uVar5 = (ulong)uVar3;
        if (uVar3 != 0 && iVar4 + param_2 <= piVar7[1]) goto LAB_039dc894;
        iVar4 = piVar7[5];
        piVar7 = (int *)((long)iVar4 + (long)(piVar7 + 5));
        piVar2 = (int *)0x0;
        if (iVar4 != 0) {
          piVar2 = piVar7;
        }
        if ((piVar2 == (int *)0x0) || (iVar4 = -0x2ea54e13, *piVar2 != -0x2ea54e13)) {
          nn::os::LockMutex(pMVar1);
          nn::os::UnlockMutex(pMVar1);
          FUN_039db950(param_1,extraout_x1_00,0);
          iVar4 = *piVar2;
        }
      } while ((piVar8 != piVar2) && (iVar4 == -0x2ea54e13));
      uVar3 = uVar6 + 1;
    } while (uVar6 < 0x1f);
    uVar6 = (int)local_68 + 1;
    local_68 = (ulong)uVar6;
    uVar3 = 0;
  } while (uVar6 < 0x1b);
LAB_039dc88c:
  uVar5 = 0;
  piVar7 = (int *)0x0;
LAB_039dc894:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = piVar7;
  return auVar9;
}

