
void FUN_01a45128(undefined4 *param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(&DAT_052e0120 + (ulong)param_3 * 4);
  if (0x752 < param_3 >> 3) {
    puVar1 = (undefined4 *)&DAT_052e0120;
  }
  puVar2 = (undefined4 *)PTR_DAT_04bb37e0;
  if (param_3 < 0x3a99) {
    puVar2 = puVar1;
  }
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return;
}

