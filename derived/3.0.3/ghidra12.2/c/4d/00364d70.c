
long FUN_00364d70(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((ulong)uVar1 == 0) {
    return 0;
  }
  puVar4 = *(uint **)(param_1 + 0x28);
  lVar3 = 0;
  puVar5 = puVar4;
  do {
    iVar2 = strcmp((char *)((long)puVar4 + (ulong)*puVar5),param_2);
    if (iVar2 == 0) {
      return *(long *)(param_1 + 0x18) + lVar3;
    }
    lVar3 = lVar3 + 0x18;
    puVar5 = puVar5 + 1;
  } while ((ulong)uVar1 * 0x18 != lVar3);
  return 0;
}

