
/* WARNING: Removing unreachable block (ram,0x02a7c954) */
/* WARNING: Removing unreachable block (ram,0x02a7c908) */
/* WARNING: Removing unreachable block (ram,0x02a7c9d4) */

bool FUN_02a7c8c0(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  uint local_2c;
  uint auStack_28 [2];
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    auStack_28[1] = 1;
    lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0xd0);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x48) != '\0')) {
      uVar1 = FUN_02ad8220(param_1 + 0xb8,auStack_28,&local_2c,param_2,1);
      if ((uVar1 & 1) == 0) {
        return true;
      }
      auStack_28[1] = 1;
      lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0xd0);
      if (lVar3 == 0) {
        return true;
      }
      if (*(char *)(lVar3 + 0x48) == '\0') {
        return true;
      }
      if (*(uint *)(lVar3 + 0x30) <= auStack_28[0]) {
        return true;
      }
      if (local_2c < *(uint *)(lVar3 + 0x34)) {
        pcVar2 = (char *)(**(code **)(**(long **)(*(long *)(lVar3 + 0x90) +
                                                 (long)(int)(auStack_28[0] +
                                                            *(uint *)(lVar3 + 0x30) * local_2c) * 8)
                                     + 0xf0))();
        return *pcVar2 == '\0';
      }
      return true;
    }
  }
  if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
    param_1 = param_1 + 0x18;
  }
  else {
    param_1 = param_1 + 0x350;
  }
  if ((*(int *)(param_2 + 8) < *(int *)(param_1 + 0x10) ||
       *(int *)(param_1 + 0x20) < *(int *)(param_2 + 8)) ||
     (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0x14))) {
    return true;
  }
  return *(int *)(param_1 + 0x24) < *(int *)(param_2 + 0xc);
}

