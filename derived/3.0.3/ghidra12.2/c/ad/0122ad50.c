
void FUN_0122ad50(undefined8 param_1)

{
  uint *puVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      uVar4 = 0;
      goto LAB_0122adc8;
    }
  }
  uVar3 = FUN_0122a4e0();
  uVar4 = 1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
LAB_0122adc8:
  FUN_0122ade0(param_1,uVar4);
  return;
}

