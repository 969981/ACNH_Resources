
undefined8
FUN_0033cbec(long param_1,long *param_2,int param_3,int param_4,int param_5,undefined4 param_6,
            ulong param_7)

{
  long lVar1;
  MutexType *pMVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x198) + (long)param_4 * 8);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(char *)(lVar5 + 9) == '\0') {
    return 0;
  }
  if (*(int *)(lVar5 + 0x44) <= param_3) {
    iVar4 = 0;
    if (*(uint *)(param_1 + 0x268) < 0x80000000) goto LAB_0033ccbc;
    goto LAB_0033cc74;
  }
  piVar6 = *(int **)(*(long *)(lVar5 + 0x58) + (long)param_3 * 8);
  if (piVar6 == (int *)0x0) {
    iVar4 = 0;
    if (*(long *)(lVar5 + 0x50) != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0x50) + (long)param_3 * 0x38);
      goto LAB_0033cc64;
    }
  }
  else {
LAB_0033cc64:
    iVar4 = *piVar6;
  }
  if (iVar4 <= *(int *)(param_1 + 0x268)) {
LAB_0033ccbc:
    lVar5 = FUN_00343c40(iVar4,param_1 + 0x238);
    if (lVar5 == 0) {
      return 0;
    }
    *param_2 = lVar5;
    iVar4 = *(int *)(param_1 + 0x228);
    *(int *)(param_1 + 0x228) = iVar4 + 1;
    *(int *)(param_2 + 1) = iVar4;
    uVar3 = FUN_00320e10(lVar5,param_3,iVar4,param_4,param_5,param_6,param_1 + 0x78,param_1 + 0x208,
                         *(undefined8 *)(param_1 + 0x15b8),*(undefined8 *)(param_1 + 0x15c0));
    if ((uVar3 & 1) == 0) {
      FUN_003216f8(lVar5);
      return 0;
    }
    if ((param_7 & 1) == 0) {
      lVar1 = param_1 + (long)param_5 * 8;
      param_1 = param_1 + (long)param_5 * 8;
      if (*(long *)(lVar1 + 0x438) == 0) {
        *(long *)(lVar1 + 0x438) = lVar5;
        uVar7 = 0;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x638) + 0x1e0) = lVar5;
        uVar7 = *(undefined8 *)(param_1 + 0x638);
      }
      *(undefined8 *)(lVar5 + 0x1e0) = 0;
      *(undefined8 *)(lVar5 + 0x1e8) = uVar7;
      *(long *)(param_1 + 0x638) = lVar5;
      return 1;
    }
    pMVar2 = (MutexType *)(param_1 + 0x1940);
    nn::os::LockMutex(pMVar2);
    nn::os::LockMutex(pMVar2);
    lVar1 = param_1 + (long)param_5 * 8;
    param_1 = param_1 + (long)param_5 * 8;
    if (*(long *)(lVar1 + 0x838) == 0) {
      *(long *)(lVar1 + 0x838) = lVar5;
      uVar7 = 0;
    }
    else {
      *(long *)(*(long *)(param_1 + 0xa38) + 0x1e0) = lVar5;
      uVar7 = *(undefined8 *)(param_1 + 0xa38);
    }
    *(undefined8 *)(lVar5 + 0x1e0) = 0;
    *(undefined8 *)(lVar5 + 0x1e8) = uVar7;
    *(long *)(param_1 + 0xa38) = lVar5;
    nn::os::UnlockMutex(pMVar2);
    nn::os::UnlockMutex(pMVar2);
    *(undefined1 *)(lVar5 + 0x1f) = 1;
    return 1;
  }
LAB_0033cc74:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  FUN_0032c410("There is no available Emitter instance.\n");
  return 0;
}

