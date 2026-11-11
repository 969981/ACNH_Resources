
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d2c20(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  *param_1 = &PTR_LAB_048df7d8;
  param_1[1] = 0xffffffff;
  param_1[4] = 0x8000000000000000;
  param_1[2] = 1;
  param_1[3] = 0;
  uVar3 = DAT_0413f500;
  fVar4 = (float)DAT_0413f500;
  uVar1 = (ulong)DAT_0413f500 >> 0x20;
  fVar5 = (float)_DAT_0413f508;
  uVar2 = (ulong)_DAT_0413f508 >> 0x20;
  param_1[7] = _DAT_0413f508;
  param_1[6] = uVar3;
  param_1[9] = CONCAT44(-(float)uVar2,-fVar5);
  param_1[8] = CONCAT44(-(float)uVar1,-fVar4);
  return;
}

