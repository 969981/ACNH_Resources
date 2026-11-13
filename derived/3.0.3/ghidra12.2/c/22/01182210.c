
void FUN_01182210(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[5];
  param_1[0x11] = -1;
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    if ((int)param_1[6] != 0) {
      lVar4 = lVar1 + 8;
      lVar3 = (long)(int)param_1[6] * 0x30;
      do {
        FUN_01184030(lVar4);
        lVar3 = lVar3 + -0x30;
        lVar4 = lVar4 + 0x30;
      } while (lVar3 != 0);
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)(*param_1 + 0x18))(param_1,lVar1);
  }
  plVar2 = param_1 + 7;
  lVar1 = *plVar2;
  if ((int)param_1[8] != 0) {
    lVar4 = (long)(int)param_1[8] << 5;
    do {
      FUN_0068d428(param_1,lVar1);
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    lVar1 = *plVar2;
  }
  *plVar2 = 0;
  param_1[8] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],lVar1);
  }
  *plVar2 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((int)param_1[6] != 0) {
    lVar4 = (long)(int)param_1[6] * 0x30;
    lVar1 = param_1[5] + 8;
    do {
      FUN_01184030(lVar1);
      lVar4 = lVar4 + -0x30;
      lVar1 = lVar1 + 0x30;
    } while (lVar4 != 0);
  }
  return;
}

