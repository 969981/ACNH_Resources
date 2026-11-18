
void FUN_032e28a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  if ((*(int *)(param_2 + 0x34) == 1) && (0 < *(int *)(param_1 + 0x80))) {
    lVar9 = 0;
    do {
      uVar8 = (uint)lVar9;
      iVar7 = 0;
      if (*(int *)(param_1 + 0x78) <= (int)(*(int *)(param_1 + 0x7c) + uVar8)) {
        iVar7 = *(int *)(param_1 + 0x78);
      }
      if (*(long *)(*(long *)(param_1 + 0x70) + (long)*(int *)(param_1 + 0x7c) * 8 +
                    (long)iVar7 * -8 + lVar9 * 8) == param_2) {
        *(undefined4 *)(param_2 + 0x34) = 3;
        iVar7 = *(int *)(param_1 + 0x80);
        if (((int)uVar8 < iVar7) && (uVar10 = iVar7 - 1, 0 < iVar7)) {
          if (uVar8 < uVar10) {
            do {
              iVar5 = *(int *)(param_1 + 0x78);
              iVar6 = *(int *)(param_1 + 0x7c);
              iVar7 = (int)lVar9 + iVar6;
              iVar3 = 0;
              if (iVar5 <= iVar7 + 1) {
                iVar3 = iVar5;
              }
              iVar4 = 0;
              if (iVar5 <= iVar7) {
                iVar4 = iVar5;
              }
              lVar1 = lVar9 + ((long)iVar6 - (long)iVar3);
              lVar2 = lVar9 + ((long)iVar6 - (long)iVar4);
              lVar9 = lVar9 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar2 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar1 * 8 + 8);
              uVar10 = *(int *)(param_1 + 0x80) - 1;
            } while ((int)lVar9 < (int)uVar10);
          }
          *(uint *)(param_1 + 0x80) = uVar10;
        }
        break;
      }
      lVar9 = lVar9 + 1;
    } while (*(int *)(param_1 + 0x80) != (int)lVar9);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}

