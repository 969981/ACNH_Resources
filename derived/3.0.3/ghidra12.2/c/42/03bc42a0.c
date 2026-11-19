
long FUN_03bc42a0(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 8);
    nn::os::LockMutex((MutexType *)(param_1 + 0x40));
    uVar3 = *(uint *)(param_1 + 0x18);
    if ((int)uVar3 < (int)uVar5) {
      uVar1 = *(uint *)(param_1 + 8);
      lVar6 = (long)(int)uVar3 << 0x20;
      plVar10 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar3 * 8);
      uVar9 = (ulong)uVar3;
      do {
        uVar8 = (uint)uVar9;
        if (uVar8 < uVar1) {
          if (*(char *)(*plVar10 + 8) == '\0') {
            iVar2 = 0;
            if ((int)(uVar8 + 1) < (int)uVar1) {
              iVar2 = uVar8 + 1;
            }
            *(int *)(param_1 + 0x18) = iVar2;
            lVar6 = *(long *)(*(long *)(param_1 + 0x10) + (lVar6 >> 0x1d));
            goto LAB_03bc43e8;
          }
        }
        else if (DAT_00000008 == '\0') {
          iVar2 = 0;
          if ((int)(uVar8 + 1) < (int)uVar1) {
            iVar2 = uVar8 + 1;
          }
          goto LAB_03bc43e4;
        }
        uVar9 = (ulong)(uVar8 + 1);
        lVar6 = lVar6 + 0x100000000;
        plVar10 = plVar10 + 1;
      } while (uVar5 != uVar8 + 1);
    }
    if (0 < (int)uVar3) {
      uVar5 = *(uint *)(param_1 + 8);
      uVar9 = 0;
LAB_03bc4384:
      iVar4 = (int)uVar9;
      if (uVar9 < uVar5) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x10) + uVar9 * 8) + 8) != '\0')
        goto LAB_03bc4378;
        iVar2 = 0;
        if (iVar4 + 1 < (int)uVar5) {
          iVar2 = iVar4 + 1;
        }
        *(int *)(param_1 + 0x18) = iVar2;
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + uVar9 * 8);
      }
      else {
        if (DAT_00000008 != '\0') goto LAB_03bc4378;
        iVar2 = 0;
        if (iVar4 + 1 < (int)uVar5) {
          iVar2 = iVar4 + 1;
        }
LAB_03bc43e4:
        lVar6 = 0;
        *(int *)(param_1 + 0x18) = iVar2;
      }
LAB_03bc43e8:
      uVar5 = *(uint *)(lVar6 + 0x20);
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined8 *)(lVar6 + 0xc) = 0x7f7fffff;
      *(undefined8 *)(lVar6 + 0x14) = 0x7f7fffff;
      if (0 < (int)uVar5) {
        uVar3 = 0;
        do {
          uVar1 = uVar3;
          if (uVar5 <= uVar3) {
            uVar1 = 0;
          }
          uVar3 = uVar3 + 1;
          puVar7 = (undefined4 *)(*(long *)(lVar6 + 0x28) + (ulong)uVar1 * 0x1c);
          *puVar7 = 0xffffffff;
          *(undefined8 *)(puVar7 + 1) = 0;
          *(undefined8 *)(puVar7 + 3) = 0;
          *(undefined8 *)(puVar7 + 5) = 0;
          uVar5 = *(uint *)(lVar6 + 0x20);
        } while ((int)uVar3 < (int)uVar5);
      }
      *(undefined1 *)(lVar6 + 8) = 1;
      goto LAB_03bc4448;
    }
LAB_03bc43b8:
    lVar6 = 0;
LAB_03bc4448:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  }
  return lVar6;
LAB_03bc4378:
  uVar9 = uVar9 + 1;
  if (uVar3 == uVar9) goto LAB_03bc43b8;
  goto LAB_03bc4384;
}

