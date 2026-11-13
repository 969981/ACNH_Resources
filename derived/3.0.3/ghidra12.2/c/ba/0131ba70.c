
undefined * FUN_0131ba70(long param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  sVar2 = *(short *)(param_1 + 4);
  if (*(short *)(param_1 + 8) <= *(short *)(param_1 + 4)) {
    sVar2 = *(short *)(param_1 + 8);
  }
  sVar3 = *(short *)(param_1 + 6);
  if (*(short *)(param_1 + 10) <= *(short *)(param_1 + 6)) {
    sVar3 = *(short *)(param_1 + 10);
  }
  uVar4 = *(int *)(param_2 + 0xc) - (int)sVar3;
  uVar5 = *(int *)(param_2 + 8) - (int)sVar2;
  puVar1 = (undefined *)(param_1 + (ulong)(uVar4 * 3 + uVar5) * 0xe + 0xc);
  if (2 < uVar4 || 2 < uVar5) {
    puVar1 = PTR_DAT_04bbc2f8;
  }
  return puVar1;
}

