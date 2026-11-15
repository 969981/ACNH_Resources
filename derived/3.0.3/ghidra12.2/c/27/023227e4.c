
undefined8 FUN_023227e4(undefined8 param_1)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((*DAT_055c10d8 != '\0') || (*DAT_055cdb40 != '\0')) {
    return 0;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 1 & 1) != 0) && (uVar3 = FUN_02430730(param_1,0,0,0), (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  uVar4 = FUN_0245c480(param_1,0);
  return uVar4;
}

