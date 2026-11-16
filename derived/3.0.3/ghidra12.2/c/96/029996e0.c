
undefined8 FUN_029996e0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  
  cVar4 = '\x01';
  if (param_2 == 4) {
    cVar4 = '\x02';
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 == param_1 + 0x158) {
    uVar8 = 0;
    iVar9 = -0x80000000;
  }
  else {
    uVar8 = 0;
    iVar9 = -0x80000000;
    do {
      lVar7 = *(long *)(lVar5 + -8);
      if ((*(char *)(lVar7 + 8) == cVar4) && (iVar9 <= *(int *)(lVar7 + 0x30))) {
        uVar8 = *(undefined8 *)(lVar7 + 0x18);
        iVar9 = *(int *)(lVar7 + 0x30);
      }
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 + -8 != param_1 + 0x150);
  }
  if (*(int *)(param_1 + 0x1a8) != 0) {
    iVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x1b0) + (long)iVar6 * 0x50 + 8) == cVar4) {
        lVar5 = *(long *)(param_1 + 0x1b0) + (long)iVar6 * 0x50;
        iVar3 = *(int *)(lVar5 + 0x30);
        iVar1 = iVar3;
        if (iVar3 <= iVar9) {
          iVar1 = iVar9;
        }
        if (iVar9 <= iVar3) {
          uVar8 = *(undefined8 *)(lVar5 + 0x18);
        }
        iVar9 = iVar1;
      }
      iVar6 = iVar6 + 1;
    } while (*(int *)(param_1 + 0x1a8) != iVar6);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  uVar2 = 0;
  if (iVar9 != 0) {
    uVar2 = uVar8;
  }
  return uVar2;
}

