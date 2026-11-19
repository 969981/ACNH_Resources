
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_03b3e6e0(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 200));
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((int)uVar4 < (int)uVar3) {
    lVar8 = (long)(int)uVar4 << 0x20;
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar4 * 8);
    uVar9 = (ulong)uVar4;
    do {
      if ((uint)uVar9 < uVar3) {
        if (*(int *)(*plVar6 + 0x10) == 0) {
          iVar7 = uVar4 + 1;
          plVar6 = (long *)(*(long *)(param_1 + 0x30) + (lVar8 >> 0x1d));
          goto LAB_03b3e7b8;
        }
      }
      else if (_DAT_00000010 == 0) {
        lVar8 = 0;
        *(uint *)(param_1 + 0x38) = uVar4 + 1;
        goto LAB_03b3e818;
      }
      uVar1 = (uint)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      lVar8 = lVar8 + 0x100000000;
      plVar6 = plVar6 + 1;
    } while (uVar3 != uVar1);
  }
  if (0 < (int)uVar4) {
    plVar6 = *(long **)(param_1 + 0x30);
    uVar9 = 0;
    do {
      if (uVar9 < uVar3) {
        if (*(int *)(*plVar6 + 0x10) == 0) {
          iVar7 = 0;
          if ((int)uVar4 < (int)uVar3) {
            iVar7 = uVar4 + 1;
          }
LAB_03b3e7b8:
          *(int *)(param_1 + 0x38) = iVar7;
          lVar8 = *plVar6;
          if (lVar8 != 0) {
            *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(param_1 + 0x20);
            plVar6 = (long *)(param_1 + 0x40);
            lVar5 = *plVar6;
            iVar7 = 1;
            if (1 < *(int *)(param_1 + 0x20) + 1U) {
              iVar7 = *(int *)(param_1 + 0x20) + 1;
            }
            *(int *)(param_1 + 0x20) = iVar7;
            plVar2 = (long *)(*(int *)(param_1 + 0x54) + lVar8);
            *plVar6 = (long)plVar2;
            *plVar2 = lVar5;
            plVar2[1] = (long)plVar6;
            if (lVar5 != 0) {
              *(long **)(lVar5 + 8) = plVar2;
            }
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
          goto LAB_03b3e818;
        }
      }
      else if (_DAT_00000010 == 0) {
        lVar8 = 0;
        iVar7 = 0;
        if ((int)uVar4 < (int)uVar3) {
          iVar7 = uVar4 + 1;
        }
        *(int *)(param_1 + 0x38) = iVar7;
        goto LAB_03b3e818;
      }
      uVar9 = uVar9 + 1;
      plVar6 = plVar6 + 1;
    } while (uVar4 != uVar9);
  }
  lVar8 = 0;
LAB_03b3e818:
  nn::os::UnlockMutex((MutexType *)(param_1 + 200));
  return lVar8;
}

