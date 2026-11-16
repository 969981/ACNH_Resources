
undefined8 FUN_029993c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar5 = FUN_0299a520(param_1,param_2,param_3);
  if ((lVar5 != 0) && (iVar1 = *(int *)(lVar5 + 0x10), -1 < iVar1)) {
    iVar2 = *(int *)(param_1 + 0x188);
    uVar3 = iVar1 - iVar2;
    if (iVar1 < iVar2) {
      lVar7 = *(long *)(param_1 + 0x160);
      cVar6 = '\x01';
      if (*(int *)(lVar5 + 0x18) == 4) {
        cVar6 = '\x02';
      }
      if (lVar7 != param_1 + 0x158) {
        do {
          lVar8 = *(long *)(lVar7 + -8);
          if ((*(char *)(lVar8 + 8) == cVar6) && (*(int *)(lVar8 + 0xc) == *(int *)(lVar5 + 0xc)))
          goto LAB_029994c4;
          lVar7 = *(long *)(lVar7 + 8);
        } while (lVar7 + -8 != param_1 + 0x150);
      }
    }
    else {
      iVar2 = *(uint *)(param_1 + 0x198) + iVar2;
      uVar4 = iVar1 - iVar2;
      if (iVar1 < iVar2) {
        if (*(uint *)(param_1 + 0x198) <= uVar3) {
          uVar3 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1a0);
      }
      else {
        if ((int)(iVar2 + *(uint *)(param_1 + 0x1a8)) <= iVar1) goto LAB_029994cc;
        if (*(uint *)(param_1 + 0x1a8) <= uVar4) {
          uVar4 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1b0);
        uVar3 = uVar4;
      }
      if (lVar8 != 0) {
        lVar8 = lVar8 + (long)(int)uVar3 * 0x50;
LAB_029994c4:
        uVar9 = *(undefined8 *)(lVar8 + 0x18);
        goto LAB_029994d0;
      }
    }
  }
LAB_029994cc:
  uVar9 = 0;
LAB_029994d0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return uVar9;
}

