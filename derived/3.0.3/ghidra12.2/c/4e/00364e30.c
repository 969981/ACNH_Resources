
long FUN_00364e30(long param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  if ((ulong)uVar1 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  lVar3 = 0;
  do {
    iVar2 = strcmp((char *)(lVar4 + (ulong)*(uint *)(lVar4 + lVar3)),param_2);
    if (iVar2 == 0) {
      return *(long *)(param_1 + 0x20) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + lVar3);
    }
    lVar3 = lVar3 + 4;
  } while ((ulong)uVar1 * 4 != lVar3);
  return 0;
}

