
int FUN_03f59b98(long param_1,ulong param_2,void *param_3,void *param_4,size_t param_5)

{
  void *__s1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 & 0xff000000) != 0) {
    return -1;
  }
  uVar4 = (uint)(param_2 >> 0x10) & 0xffff;
  bVar1 = *(byte *)(*(long *)(param_1 + 0x30) + 0x3cbcf9);
  uVar3 = (uint)param_2;
  if (bVar1 == 0x23) {
    if (uVar3 < 0xc00000) {
      uVar5 = uVar4 - 0x80;
      if (uVar3 >> 0x17 == 0) {
        uVar5 = uVar4;
      }
      goto LAB_03f59c20;
    }
    uVar5 = uVar4 - 0x80;
  }
  else {
    uVar5 = uVar4 - 0x80;
    if (uVar3 >> 0x17 == 0) {
      uVar5 = uVar4;
    }
    if (bVar1 != 0x32 && (bVar1 & 1) == 0) {
LAB_03f59c20:
      uVar4 = uVar3 & 0x7fff | uVar5 << 0xf;
      goto LAB_03f59c48;
    }
  }
  uVar4 = uVar5 * 0x10000 - 0x400000;
  if ((int)uVar5 < 0x40) {
    uVar4 = uVar5 * 0x10000;
  }
  uVar4 = uVar4 | uVar3 & 0xffff;
  if ((int)uVar4 < 0) {
    return -1;
  }
LAB_03f59c48:
  __s1 = (void *)(*(long *)(*(long *)(param_1 + 0x30) + 0x34e160) + (ulong)uVar4);
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar2 = memcmp(__s1,param_3,param_5);
    if (iVar2 == 0) {
      memcpy(__s1,param_4,param_5);
      return 0;
    }
  }
  else {
    iVar2 = memcmp(__s1,param_4,param_5);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = -1;
  }
  return iVar2;
}

