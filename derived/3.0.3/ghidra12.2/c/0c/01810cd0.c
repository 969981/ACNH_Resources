
undefined8 FUN_01810cd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((1 < param_1) && (param_1 < 0x32)) {
    uVar3 = FUN_0266ca90((param_1 + -2) / 6);
    uVar2 = (param_1 + -2) % 6;
    uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar4 = 1;
    switch(uVar3) {
    case 1:
    case 2:
    case 3:
      if ((int)uVar2 < 1) {
        return 1;
      }
      break;
    case 4:
      if (uVar1 < 2) {
        return 1;
      }
      break;
    case 5:
      if (uVar1 < 3) {
        return 1;
      }
      break;
    case 6:
      if (uVar1 < 4) {
        return 1;
      }
      break;
    case 7:
      if (uVar1 < 4) {
        return 1;
      }
      if (uVar1 == 4) {
        return 1;
      }
      break;
    case 8:
      goto switchD_01810d84_caseD_8;
    }
  }
  uVar4 = 0;
switchD_01810d84_caseD_8:
  return uVar4;
}

