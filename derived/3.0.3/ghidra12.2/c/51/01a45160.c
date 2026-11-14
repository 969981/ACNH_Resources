
void FUN_01a45160(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  puVar1 = (undefined4 *)(&DAT_052e0120 + (ulong)uVar4 * 4);
  if (0x752 < uVar4 >> 3) {
    puVar1 = (undefined4 *)&DAT_052e0120;
  }
  puVar2 = (undefined4 *)PTR_DAT_04bb37e0;
  if (uVar4 < 0x3a99) {
    puVar2 = puVar1;
  }
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return;
}

