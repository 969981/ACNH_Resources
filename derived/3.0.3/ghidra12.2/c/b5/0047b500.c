
void FUN_0047b500(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x188));
  uVar2 = *(uint *)(param_2 + 0x1b0);
  if (0 < (int)uVar2) {
    lVar6 = *(long *)(param_2 + 0x1a8);
    lVar5 = 0;
    lVar4 = 0;
    do {
      if (*(long *)(lVar6 + lVar5) == 0) {
        *(undefined8 *)(lVar6 + lVar5) = param_3;
        *(undefined8 *)(*(long *)(param_2 + 0x1a8) + lVar5 + 8) = param_4;
        uVar2 = (uint)lVar4;
        if (*(uint *)(param_2 + 0x1b0) != uVar2) goto LAB_0047b5cc;
        break;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar4 < (int)uVar2);
  }
  uVar3 = uVar2;
  if (uVar2 == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(param_2 + 0x1a8),0x10);
    uVar3 = *(uint *)(param_2 + 0x1b0);
  }
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x1a8) + (long)(int)uVar3 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(uint *)(param_2 + 0x1b0) = uVar3 + 1;
LAB_0047b5cc:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x188));
  *param_1 = param_2;
  FUN_004435a0(param_2);
  *(uint *)(param_1 + 1) = uVar2;
  return;
}

