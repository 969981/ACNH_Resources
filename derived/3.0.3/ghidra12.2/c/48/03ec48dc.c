
bool FUN_03ec48dc(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  void *__s2;
  long lVar4;
  void *__s1;
  
  if (*(int *)(param_3 + 4) != *(int *)(param_5 + 4)) {
    return false;
  }
  if (*(uint *)(param_3 + 0xc) != *(uint *)(param_5 + 0xc)) {
    return false;
  }
  if (*(uint *)(param_5 + 0xc) == 0) {
    return false;
  }
  if (*(int *)(param_3 + 0x10) != *(int *)(param_5 + 0x10)) {
    return false;
  }
  iVar3 = *(int *)(param_3 + 8);
  if (iVar3 < 0x60000000) {
    piVar2 = (int *)(*(long *)(param_2 + 8) + (long)iVar3);
    if (*piVar2 < 1) {
      __s1 = (void *)0x0;
    }
    else {
      __s1 = (void *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(param_2 + 8) + 4);
    }
  }
  else {
    uVar1 = iVar3 + 0xa0000000;
    if (*(uint *)(param_1 + 0x80) <= uVar1) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x32;
    __s1 = (void *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
  }
  iVar3 = *(int *)(param_5 + 8);
  if (iVar3 < 0x60000000) {
    piVar2 = (int *)(*(long *)(param_4 + 8) + (long)iVar3);
    if (*piVar2 < 1) {
      __s2 = (void *)0x0;
      if (__s1 == (void *)0x0) {
        return true;
      }
      goto LAB_03ec49c4;
    }
    __s2 = (void *)(((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(param_4 + 8) + 4);
  }
  else {
    uVar1 = iVar3 + 0xa0000000;
    if (*(uint *)(param_1 + 0x80) <= uVar1) {
      uVar1 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x88) + (ulong)uVar1 * 0x32;
    __s2 = (void *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x20));
  }
  if (__s1 == __s2) {
    return true;
  }
LAB_03ec49c4:
  iVar3 = memcmp(__s1,__s2,(ulong)*(uint *)(param_3 + 0xc));
  return iVar3 == 0;
}

