
void FUN_036483c0(char *param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  
  bVar2 = param_1[0x3a];
  cVar3 = param_1[0x38];
  if ((*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x18)) &&
     (uVar4 = *(int *)(param_1 + 0x24) - 1, uVar4 < 0x100 && *(int *)(param_1 + 0x1c) == 1)) {
    uVar1 = *(uint *)(param_1 + 0xf1a8);
    memset(param_1 + (ulong)(uVar1 + *(uint *)(param_1 + 0x20) * 0x100) + 0x1a8,bVar2 & 0xffffffe1,
           (ulong)(uVar4 - uVar1));
    *(uint *)(param_1 + 0xf1a8) = uVar4;
  }
  uVar4 = param_2 & 0x18;
  *(uint *)(param_1 + 0xf330) = param_2;
  param_1[0x3a] = (char)param_2;
  *(undefined8 *)(param_1 + 0xf328) = *(undefined8 *)(param_1 + 0x70);
  param_1[0x38] = uVar4 != 0;
  if ((*param_1 != '\0') && (*(int *)(param_1 + 0x68) == 0x15cfc)) {
    if (((param_2 & 0xff) >> 3 & 1) == 0) {
      if ((bVar2 >> 3 & 1) != 0) {
        param_1[1] = '\x01';
      }
    }
    else {
      param_1[2] = '\x01';
    }
  }
  if ((*(int *)(param_1 + 0x24) - 0xffU < 2) && (*(uint *)(param_1 + 0x20) < 0xf0)) {
    if ((cVar3 == '\0') || (uVar4 != 0)) {
      if (cVar3 == '\0' && uVar4 != 0) {
        param_1[4] = '\x01';
      }
    }
    else {
      param_1[3] = '\x01';
    }
  }
  return;
}

