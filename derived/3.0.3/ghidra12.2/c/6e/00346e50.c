
long FUN_00346e50(int *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((param_3 == 0) || ((char)param_1[0xc] == '\0')) {
    return 0;
  }
  iVar4 = *param_1;
  lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6a + 0x74);
  uVar1 = (*(long *)(param_1 + (long)iVar4 * 0x6a + 0x68) + param_3 + -1 &
          -*(long *)(param_1 + (long)iVar4 * 0x6a + 0x68)) + lVar5;
  if (uVar1 <= *(ulong *)(param_1 + (long)iVar4 * 0x6a + 0x6a)) {
    *(ulong *)(param_1 + (long)iVar4 * 0x6a + 0x74) = uVar1;
    if (*(long *)(param_1 + (long)iVar4 * 0x6a + 0x76) != 0) {
      lVar5 = *(long *)(param_1 + (long)iVar4 * 0x6a + 0x76) + lVar5;
      lVar2 = *(long *)(param_1 + (long)iVar4 * 0x6a + 0x70);
      lVar3 = *(long *)(param_1 + (long)iVar4 * 0x6a + 0x72);
      *param_2 = lVar2;
      param_2[1] = lVar3;
      *param_2 = (lVar5 - *(long *)(param_1 + (long)iVar4 * 0x6a + 0x76)) + lVar2;
      iVar4 = *param_1;
      *(long *)(param_1 + (long)iVar4 * 2 + 4) =
           (*(long *)(param_1 + (long)iVar4 * 0x6a + 0x68) + param_3 + -1 &
           -*(long *)(param_1 + (long)iVar4 * 0x6a + 0x68)) +
           *(long *)(param_1 + (long)iVar4 * 2 + 4);
      return lVar5;
    }
  }
  FUN_0032c600(*(long *)(param_1 + 0x14c) + 0x8c,0,0x800);
  FUN_0032c410("TemporaryBuffer allocation failed. Allocation size : %d Bytes.\n",param_3);
  FUN_0032c410("Current temporaryBuffer allocation : %d/%d.\n",
               *(undefined8 *)(param_1 + (long)*param_1 * 2 + 4),*(undefined8 *)(param_1 + 10));
  return 0;
}

