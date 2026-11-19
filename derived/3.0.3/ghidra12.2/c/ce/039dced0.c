
void FUN_039dced0(long param_1,ulong *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  int iVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  MutexType *pMVar9;
  ulong uVar10;
  
  pMVar1 = (MutexType *)(param_1 + 0x5d18);
  nn::os::LockMutex(pMVar1);
  uVar10 = *param_2;
  if ((uVar10 < *(ulong *)(param_1 + 0x5ce8)) || (*(long *)(param_1 + 0x5cf0) + 0x20U <= uVar10)) {
    if (*(uint *)(param_1 + 0x5cb8) != 0) {
      uVar6 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x5cb0) + (long)(int)uVar6 * 0x88;
        if (*(uint *)(param_1 + 0x5ca8) <= uVar6) {
          lVar7 = 0;
        }
        if (((*(byte *)(lVar7 + 0x18) & 1) != 0) && (uVar10 == *(ulong *)(lVar7 + 0x38))) {
          pMVar9 = (MutexType *)(lVar7 + 0x68);
          nn::os::LockMutex(pMVar9);
          *(byte *)(lVar7 + 0x18) = *(byte *)(lVar7 + 0x18) & 0xfe | 0x10;
          piVar8 = *(int **)(lVar7 + 8);
          if (piVar8 != (int *)0x0) {
            if (*piVar8 != -0x52fff2e2) {
              nn::os::LockMutex(pMVar1);
              nn::os::UnlockMutex(pMVar1);
              FUN_039db950(param_1,extraout_x1_00,0);
              piVar8 = *(int **)(lVar7 + 8);
            }
            *(byte *)(piVar8 + 7) = *(byte *)(piVar8 + 7) | 8;
          }
          piVar8 = *(int **)(lVar7 + 0x10);
          if (piVar8 != (int *)0x0) {
            if (*piVar8 != -0x52fff2e2) {
              nn::os::LockMutex(pMVar1);
              nn::os::UnlockMutex(pMVar1);
              FUN_039db950(param_1,extraout_x1_01,0);
              piVar8 = *(int **)(lVar7 + 0x10);
            }
            *(byte *)(piVar8 + 7) = *(byte *)(piVar8 + 7) | 8;
          }
          if (*(long *)(lVar7 + 0x40) != 0) {
            *(undefined1 *)(*(long *)(lVar7 + 0x40) + 0x18) = 0;
            *(undefined8 *)(lVar7 + 0x40) = 0;
          }
          goto LAB_039dd2d4;
        }
        uVar6 = uVar6 + 1;
      } while (*(uint *)(param_1 + 0x5cb8) != uVar6);
    }
    goto LAB_039dd2dc;
  }
  piVar8 = (int *)(uVar10 - *(ushort *)(uVar10 - 2));
  if ((piVar8 == (int *)0x0) || (*piVar8 != -0x52fff2e2)) {
    nn::os::LockMutex(pMVar1);
    nn::os::UnlockMutex(pMVar1);
    FUN_039db950(param_1,extraout_x1,0);
  }
  bVar4 = *(byte *)((long)piVar8 + 0x1d);
  *(byte *)(piVar8 + 7) = *(byte *)(piVar8 + 7) | 8;
  if (bVar4 == 0) {
LAB_039dd0dc:
    nn::os::LockMutex(pMVar1);
    piVar8 = (int *)(uVar10 - *(ushort *)(uVar10 - 2));
    if (*piVar8 != -0x52fff2e2) {
      nn::os::LockMutex(pMVar1);
      nn::os::UnlockMutex(pMVar1);
      FUN_039db950(param_1,extraout_x1_02,0);
    }
    iVar5 = piVar8[1];
    *(int *)(param_1 + 0x61c0) = *(int *)(param_1 + 0x61c0) - iVar5;
    *(int *)(param_1 + 0x61c4) = *(int *)(param_1 + 0x61c4) + iVar5;
    if (*piVar8 != -0x52fff2e2) {
      nn::os::LockMutex(pMVar1);
      nn::os::UnlockMutex(pMVar1);
      FUN_039db950(param_1,extraout_x1_03,0);
    }
    FUN_039dc1dc(param_1,piVar8);
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
    }
    piVar8[3] = 0;
    piVar8[4] = 0;
    *piVar8 = -0x2ea54e13;
    piVar8[5] = 0;
    piVar8[6] = 0;
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
    }
    piVar2 = (int *)((long)piVar8 + (long)piVar8[2]);
    piVar3 = (int *)0x0;
    if (piVar8[2] != 0) {
      piVar3 = piVar2;
    }
    if (piVar3 == (int *)0x0) {
LAB_039dd1c0:
      nn::os::LockMutex(pMVar1);
      nn::os::UnlockMutex(pMVar1);
      FUN_039db950(param_1,extraout_x1_04,0);
      iVar5 = *piVar3;
    }
    else {
      iVar5 = *piVar3;
      if ((iVar5 != -0x52fff2e2) && (iVar5 != -0x2ea54e13)) goto LAB_039dd1c0;
    }
    if (iVar5 == -0x2ea54e13) {
      FUN_039dc1dc(param_1,piVar3);
      FUN_039dc518(param_1,piVar8);
      piVar8 = piVar2;
    }
    piVar2 = (int *)0x0;
    if (piVar8[1] != 0) {
      piVar2 = (int *)((long)piVar8 + (long)piVar8[1]);
    }
    if (piVar2 == (int *)0x0) {
LAB_039dd22c:
      nn::os::LockMutex(pMVar1);
      nn::os::UnlockMutex(pMVar1);
      FUN_039db950(param_1,extraout_x1_05,0);
      iVar5 = *piVar2;
    }
    else {
      iVar5 = *piVar2;
      if ((iVar5 != -0x52fff2e2) && (iVar5 != -0x2ea54e13)) goto LAB_039dd22c;
    }
    if (iVar5 == -0x2ea54e13) {
      FUN_039dc1dc(param_1,piVar2);
      FUN_039dc518(param_1,piVar2);
    }
    if (*piVar8 != -0x2ea54e13) {
      nn::os::LockMutex(pMVar1);
      nn::os::UnlockMutex(pMVar1);
      FUN_039db950(param_1,extraout_x1_06,0);
    }
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
    }
    FUN_039db710(param_1,piVar8);
    FUN_039dbda0(param_1,piVar8);
    pMVar9 = pMVar1;
    if ((*(byte *)(param_1 + 9) >> 3 & 1) != 0) {
      FUN_039dbfa0(param_1);
    }
  }
  else {
    uVar6 = bVar4 - 1;
    lVar7 = *(long *)(param_1 + 0x5cb0) + (ulong)uVar6 * 0x88;
    if (*(uint *)(param_1 + 0x5ca8) <= uVar6) {
      lVar7 = 0;
    }
    pMVar9 = (MutexType *)(lVar7 + 0x68);
    nn::os::LockMutex(pMVar9);
    if (bVar4 != *(byte *)((long)piVar8 + 0x1d)) {
      nn::os::UnlockMutex(pMVar9);
      goto LAB_039dd0dc;
    }
    *(byte *)(lVar7 + 0x18) = *(byte *)(lVar7 + 0x18) & 0xfe | 0x10;
    if (*(long *)(lVar7 + 0x40) != 0) {
      *(undefined1 *)(*(long *)(lVar7 + 0x40) + 0x18) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
    }
  }
LAB_039dd2d4:
  nn::os::UnlockMutex(pMVar9);
LAB_039dd2dc:
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = param_2[1] & 7;
  nn::os::UnlockMutex(pMVar1);
  return;
}

