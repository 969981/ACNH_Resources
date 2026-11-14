
void FUN_015d88d0(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  
  pMVar1 = (MutexType *)(param_1 + 0x5b8);
  nn::os::LockMutex(pMVar1);
  if ((*param_2 & 0xfff8) != 0x6008) {
    nn::os::LockMutex(pMVar1);
    if (*(int *)(param_1 + 0x588) < 1) {
      uVar11 = 0xffffffff;
    }
    else {
      lVar10 = 0;
      do {
        iVar6 = 0;
        if (*(int *)(param_1 + 0x580) <= (int)(*(int *)(param_1 + 0x584) + (uint)lVar10)) {
          iVar6 = *(int *)(param_1 + 0x580);
        }
        uVar11 = (uint)lVar10;
      } while ((*(uint *)(*(long *)(param_1 + 0x578) + (long)*(int *)(param_1 + 0x584) * 4 +
                          (long)iVar6 * -4 + lVar10 * 4) != *param_2) &&
              (lVar10 = lVar10 + 1, uVar11 = 0xffffffff, *(int *)(param_1 + 0x588) != (int)lVar10));
    }
    nn::os::UnlockMutex(pMVar1);
    iVar6 = *(int *)(param_1 + 0x588);
    if (((int)uVar11 < iVar6) && ((-1 < (int)uVar11 && (uVar9 = iVar6 - 1, 0 < iVar6)))) {
      if (uVar11 < uVar9) {
        lVar10 = (long)(int)uVar11;
        do {
          iVar8 = *(int *)(param_1 + 0x584);
          iVar6 = (int)lVar10 + iVar8;
          iVar7 = *(int *)(param_1 + 0x580);
          iVar4 = 0;
          if (iVar7 <= iVar6 + 1) {
            iVar4 = iVar7;
          }
          iVar5 = 0;
          if (iVar7 <= iVar6) {
            iVar5 = iVar7;
          }
          lVar2 = lVar10 + ((long)iVar8 - (long)iVar4);
          lVar3 = lVar10 + ((long)iVar8 - (long)iVar5);
          lVar10 = lVar10 + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x578) + lVar3 * 4) =
               *(undefined4 *)(*(long *)(param_1 + 0x578) + lVar2 * 4 + 4);
          uVar9 = *(int *)(param_1 + 0x588) - 1;
        } while ((int)lVar10 < (int)uVar9);
      }
      *(uint *)(param_1 + 0x588) = uVar9;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

