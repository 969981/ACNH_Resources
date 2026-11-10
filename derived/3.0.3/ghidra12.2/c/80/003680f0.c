
undefined4 FUN_003680f0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x16) == '\x03')) {
    uVar2 = *(uint *)(lVar4 + 0x10);
    lVar1 = lVar4 + 0xc;
    uVar3 = (ulong)*(ushort *)(lVar1 + (ulong)uVar2 + 2);
    if (uVar3 != 0) {
      piVar5 = (int *)((ulong)uVar2 + lVar4 + 0x10);
      do {
        if (*(int *)(lVar1 + (ulong)(*piVar5 + uVar2)) == 0) {
          return *(undefined4 *)(lVar1 + (ulong)(*piVar5 + uVar2) + 4);
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return 0;
}

