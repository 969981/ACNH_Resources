
undefined8 FUN_01a1d250(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  puVar3 = PTR_DAT_04bbbb68;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) {
      uVar6 = *puVar1 >> 1 & 1;
      goto LAB_01a1d2ec;
    }
  }
  uVar6 = 0;
LAB_01a1d2ec:
  if (DAT_05146e18 != '\0') {
    uVar4 = FUN_011e09c0(param_1,PTR_DAT_04bbbb68 + 0x6030,param_2 & 1,uVar6);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (DAT_05146e18 != '\0') {
      uVar5 = FUN_011e09c0(param_1,puVar3 + 0x7038,param_2 & 1,uVar6);
      return uVar5;
    }
  }
  return 0;
}

