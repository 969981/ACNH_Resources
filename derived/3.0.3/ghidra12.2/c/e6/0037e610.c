
uint * FUN_0037e610(long param_1,char *param_2)

{
  uint *puVar1;
  char *__s2;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 != 0) {
    if (*(int *)(param_1 + 0x60) == 0) {
      uVar2 = *(ushort *)(lVar5 + 8);
      puVar1 = (uint *)(lVar5 + 0xc);
    }
    else {
      if (*(short *)(lVar5 + 8) == 1) {
        return (uint *)0x0;
      }
      puVar1 = (uint *)(lVar5 + 0x18);
      uVar2 = *(short *)(lVar5 + 8) - (ushort)(*(int *)(param_1 + 0x60) != 0);
    }
    for (uVar3 = (uint)uVar2; uVar3 != 0; uVar3 = uVar3 - 1) {
      __s2 = (char *)0x0;
      if (*puVar1 != 0) {
        __s2 = (char *)((long)puVar1 + (ulong)*puVar1);
      }
      iVar4 = strcmp(param_2,__s2);
      if (iVar4 == 0) {
        return puVar1;
      }
      puVar1 = puVar1 + 3;
    }
  }
  return (uint *)0x0;
}

