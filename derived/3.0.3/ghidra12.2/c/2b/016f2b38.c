
undefined8 FUN_016f2b38(undefined8 param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)FUN_016e026c(0,param_1,0,0);
  if ((fVar3 <= 44.5) || (DAT_04c487d4 == -1)) {
LAB_016f2c20:
    uVar2 = 0;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((puVar1[1] & 1) == 0) || ((*puVar1 >> 1 & 1) == 0)) goto LAB_016f2c20;
    }
    uVar2 = 1;
  }
  return uVar2;
}

