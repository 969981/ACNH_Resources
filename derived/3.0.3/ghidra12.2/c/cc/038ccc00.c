
void FUN_038ccc00(long param_1,int param_2,byte param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + 0x90;
    nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  }
  uVar3 = param_2 - 1;
  plVar6 = (long *)(param_1 + 0x100 + (ulong)uVar3 & ((ulong)uVar3 ^ 0xffffffffffffffff));
  plVar2 = (long *)((long)plVar6 + (long)param_2);
  if ((plVar6 == (long *)(param_1 + 0x100) & param_3) == 0) {
    plVar2 = plVar6;
  }
  uVar3 = *(int *)(param_1 + 0xd4) + uVar3 & -param_2;
  uVar8 = *(long *)(param_1 + 0x38) + (param_1 - (long)plVar2);
  *(uint *)(param_1 + 0xd4) = uVar3;
  iVar5 = 0;
  if ((ulong)uVar3 != 0) {
    iVar5 = (int)(uVar8 / uVar3);
  }
  *(long **)(param_1 + 0xd8) = plVar2;
  *(ulong *)(param_1 + 0xe0) = uVar8;
  uVar4 = iVar5 - 1;
  uVar1 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  *(ulong *)(param_1 + 0xe8) = (ulong)(uVar3 * iVar5);
  *(long **)(param_1 + 0xf0) = plVar2;
  if (1 < iVar5) {
    lVar7 = (long)((int)uVar1 >> 3);
    if (uVar4 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      plVar6 = plVar2;
      do {
        uVar8 = uVar8 + 2;
        *plVar6 = (long)(plVar6 + lVar7);
        plVar6[lVar7] = (long)(plVar6 + lVar7 * 2);
        plVar6 = plVar6 + lVar7 * 2;
      } while (((ulong)uVar4 & 0xfffffffe) != uVar8);
    }
    if ((uVar4 & 1) != 0) {
      plVar2[uVar8 * lVar7] = (long)(plVar2 + lVar7 + uVar8 * lVar7);
    }
  }
  plVar2[(int)(uVar4 * ((int)uVar1 >> 3))] = 0;
  *(long **)(param_1 + 0xf8) = plVar2;
  (**(code **)(*param_4 + 0xd0))(param_4,param_1);
  if (lVar9 == 0) {
    return;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
  return;
}

