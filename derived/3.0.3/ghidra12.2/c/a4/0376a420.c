
undefined8 FUN_0376a420(undefined4 *param_1,int param_2)

{
  long lVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_05ac0a90 == param_2) {
    lVar1 = 0;
  }
  else if (DAT_05ac0aa0 == param_2) {
    lVar1 = 1;
  }
  else if (DAT_05ac0ab0 == param_2) {
    lVar1 = 2;
  }
  else if (DAT_05ac0ac0 == param_2) {
    lVar1 = 3;
  }
  else if (DAT_05ac0ad0 == param_2) {
    lVar1 = 4;
  }
  else if (DAT_05ac0ae0 == param_2) {
    lVar1 = 5;
  }
  else if (DAT_05ac0af0 == param_2) {
    lVar1 = 6;
  }
  else if (DAT_05ac0b00 == param_2) {
    lVar1 = 7;
  }
  else if (DAT_05ac0b10 == param_2) {
    lVar1 = 8;
  }
  else {
    if (DAT_05ac0b20 != param_2) {
      return 0;
    }
    lVar1 = 9;
  }
  *param_1 = (&DAT_05ac0a98)[lVar1 * 4];
  return 1;
}

