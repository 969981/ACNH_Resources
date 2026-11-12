
undefined4 FUN_00a8ee7c(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 3 & 1) != 0) && (*(int *)(param_1 + 0x653f4) != 0)) {
      uVar3 = *(undefined4 *)(param_1 + 0x653f8);
    }
  }
  return uVar3;
}

