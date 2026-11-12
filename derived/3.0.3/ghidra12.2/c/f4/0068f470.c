
void FUN_0068f470(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  lVar1 = param_1[5];
  param_1[0x11] = -1;
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    if ((int)param_1[6] != 0) {
      lVar3 = lVar1 + 8;
      lVar4 = (long)(int)param_1[6] * 0x30;
      do {
        FUN_01184030(lVar3);
        lVar4 = lVar4 + -0x30;
        lVar3 = lVar3 + 0x30;
      } while (lVar4 != 0);
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)(*param_1 + 0x18))(param_1,lVar1);
  }
  plVar2 = param_1 + 7;
  lVar1 = *plVar2;
  if ((int)param_1[8] != 0) {
    lVar3 = (long)(int)param_1[8] << 5;
    pcVar5 = (char *)(lVar1 + 0x1b);
    do {
      if (*(long *)(pcVar5 + -0x13) != 0 && *pcVar5 != '\0') {
        FUN_0068c2b0();
        (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(pcVar5 + -0x13));
      }
      pcVar5[-0x13] = '\0';
      pcVar5[-0x12] = '\0';
      pcVar5[-0x11] = '\0';
      pcVar5[-0x10] = '\0';
      pcVar5[-0xf] = '\0';
      pcVar5[-0xe] = '\0';
      pcVar5[-0xd] = '\0';
      pcVar5[-0xc] = '\0';
      lVar3 = lVar3 + -0x20;
      *pcVar5 = '\0';
      pcVar5 = pcVar5 + 0x20;
    } while (lVar3 != 0);
    lVar1 = *plVar2;
  }
  *plVar2 = 0;
  param_1[8] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)param_1[9] + 0x18))();
  }
  param_1[9] = 0;
  return;
}

