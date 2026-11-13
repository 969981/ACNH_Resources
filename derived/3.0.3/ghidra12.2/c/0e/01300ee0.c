
undefined * FUN_01300ee0(long param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  
  sVar2 = *(short *)(param_1 + 0x3c);
  if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
    sVar2 = *(short *)(param_1 + 0x40);
  }
  sVar3 = *(short *)(param_1 + 0x3e);
  if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
    sVar3 = *(short *)(param_1 + 0x42);
  }
  uVar4 = *(int *)(param_2 + 0xc) - (int)sVar3;
  uVar5 = *(int *)(param_2 + 8) - (int)sVar2;
  puVar1 = (undefined *)(param_1 + (ulong)(uVar4 * 3 + uVar5) * 0xe + 0x44);
  if (2 < uVar4 || 2 < uVar5) {
    puVar1 = PTR_DAT_04bbc2f8;
  }
  return puVar1;
}

