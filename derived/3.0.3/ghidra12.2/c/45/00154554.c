
undefined8 FUN_00154554(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uVar1 = (*(uint *)(param_1 + 0x80) & 2) << 1;
  if (uVar1 < *(uint *)(param_1 + 0x88)) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      uVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),0,0);
      iVar2 = (int)uVar3;
      if (iVar2 - 1U < 2) {
        return uVar3;
      }
      if (iVar2 != -1) {
        if (iVar2 != 0) {
          return 1;
        }
        goto LAB_001545b4;
      }
    }
    uVar3 = 2;
  }
  else {
LAB_001545b4:
    uVar3 = 0;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  return uVar3;
}

