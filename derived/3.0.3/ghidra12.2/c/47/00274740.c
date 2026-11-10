
undefined8 FUN_00274740(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  lVar3 = FUN_002b43ec(param_2);
  iVar1 = FUN_002b43f4(param_2);
  if (*(int *)(param_1 + 0x130) != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      lVar4 = FUN_002b43ec(*(long *)(param_1 + 0x158) + lVar7);
      iVar2 = FUN_002b43f4(*(long *)(param_1 + 0x158) + lVar7);
      if ((iVar2 != 0 && lVar3 == lVar4) && iVar1 != iVar2) {
        uVar5 = *(undefined8 *)(param_1 + uVar6 * 8 + 0x160);
        goto LAB_002747e0;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x80;
    } while (uVar6 < *(uint *)(param_1 + 0x130));
  }
  uVar5 = 0;
LAB_002747e0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return uVar5;
}

