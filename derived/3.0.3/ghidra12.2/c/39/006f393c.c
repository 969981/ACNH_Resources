
undefined4 FUN_006f393c(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  
  if (*(short *)(param_1 + 0x20c) == 0) {
    plVar4 = *(long **)(param_1 + 0x210);
    if ((int)plVar4[2] != 0) {
      iVar3 = (int)plVar4[2] + *(int *)((long)plVar4 + 0xc) + -1;
      iVar2 = 0;
      if ((int)plVar4[1] <= iVar3) {
        iVar2 = (int)plVar4[1];
      }
      if ((*plVar4 != 0) &&
         (puVar1 = (undefined4 *)(*plVar4 + (long)(iVar3 - iVar2) * 8),
         *(byte *)(puVar1 + 1) - 2 < 5)) {
        return *puVar1;
      }
    }
  }
  return 0;
}

