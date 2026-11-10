
int * FUN_0035c2f0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x10);
  if (*(ushort *)(param_1 + 0x10) != 0) {
    piVar2 = (int *)(param_1 + (ulong)*(ushort *)(param_1 + 6));
    do {
      if (*piVar2 == param_2) {
        return piVar2 + 2;
      }
      uVar1 = uVar1 - 1;
      piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
    } while (uVar1 != 0);
  }
  return (int *)0x0;
}

