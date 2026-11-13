
undefined * FUN_01301f64(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  
  sVar3 = *(short *)(param_1 + 0x3c);
  if (*(short *)(param_1 + 0x40) <= *(short *)(param_1 + 0x3c)) {
    sVar3 = *(short *)(param_1 + 0x40);
  }
  sVar4 = *(short *)(param_1 + 0x3e);
  if (*(short *)(param_1 + 0x42) <= *(short *)(param_1 + 0x3e)) {
    sVar4 = *(short *)(param_1 + 0x42);
  }
  uVar5 = *(int *)(param_2 + 0xc) - (int)sVar4;
  uVar6 = *(int *)(param_2 + 8) - (int)sVar3;
  puVar1 = (undefined *)(param_1 + (ulong)(uVar5 * 3 + uVar6) * 0xe + 0x44);
  if (2 < uVar5 || 2 < uVar6) {
    puVar1 = PTR_DAT_04bbc2f8;
  }
  puVar2 = puVar1 + (ulong)*(uint *)(param_1 + 8) * 6;
  if (1 < *(uint *)(param_1 + 8)) {
    puVar2 = puVar1;
  }
  return puVar2;
}

