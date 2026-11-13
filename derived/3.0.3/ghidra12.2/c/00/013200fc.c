
void FUN_013200fc(long param_1,char param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
  if (*(uint *)(param_1 + 8) <= (uint)(int)param_2) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = lVar5 + (long)(int)param_2 * 0x70;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x50));
  piVar6 = (int *)(lVar4 + 0x2c);
  iVar3 = *piVar6 + -1;
  if ((0 < *piVar6) && (*piVar6 = iVar3, iVar3 == 0)) {
    if (DAT_04c487d4 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 1 & 1) != 0) && (*(long *)(DAT_05231900 + 0x100) != 0)) {
        FUN_015a30c0(*(long *)(DAT_05231900 + 0x100),lVar4);
      }
    }
    uVar2 = *(undefined2 *)PTR_DAT_04bb3170;
    *piVar6 = 0;
    *(undefined2 *)(lVar5 + (long)(int)param_2 * 0x70 + 0x28) = uVar2;
  }
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x50));
  return;
}

