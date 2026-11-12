
undefined8 FUN_00a8f418(undefined8 param_1,long param_2)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      return 0;
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      return 0;
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x78855454) {
      return 0;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) != 0) goto LAB_00a8f504;
  }
  uVar3 = FUN_00a8117c(param_2);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
LAB_00a8f504:
  if (*(byte *)(param_2 + 4) - 4 < 0xf) {
    return 0;
  }
  uVar4 = FUN_00a8fb10(param_1);
  return uVar4;
}

