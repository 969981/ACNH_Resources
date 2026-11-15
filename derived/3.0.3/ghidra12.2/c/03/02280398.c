
bool FUN_02280398(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  if ((*(byte *)(param_1 + 0x29d) >> 2 & 1) == 0) {
    local_30 = PTR_DAT_04bb2018 + 0x10;
    fVar4 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar5 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    local_28 = (int)((float)(int)fVar4 / 10.0) - (uint)(fVar4 < 0.0);
    iStack_24 = (int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0);
    uVar2 = FUN_013191c0(&local_30);
    if ((uVar2 & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x90);
      if (plVar3 != (long *)0x0) {
        if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb5b58);
        }
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb5b50);
        if (((uVar2 & 1) != 0) && ((*(byte *)(plVar3[0x4f] + 0x6d) & 0x18) != 0)) {
          return false;
        }
      }
      if ((((*(byte *)(param_1 + 0x29c) >> 3 & 1) == 0) &&
          ((*(byte *)(param_1 + 0x29c) >> 4 & 1) == 0)) && (*(long *)(param_1 + 0x70) != 0)) {
        return *(uint *)(*(long *)(param_1 + 0x70) + 0x280) < 2;
      }
    }
  }
  return false;
}

