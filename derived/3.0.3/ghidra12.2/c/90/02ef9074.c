
undefined8 FUN_02ef9074(long param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x214);
  if ((*(int *)(param_1 + 0x210) != -1 || bVar1 < 8) && (*(int *)(param_1 + 0x210) == param_2)) {
    bVar2 = *param_3;
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (bVar1 == bVar2) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x228);
  if (((*(int *)(param_1 + 0x224) != -1) || (bVar1 < 8)) && (*(int *)(param_1 + 0x224) == param_2))
  {
    bVar2 = *param_3;
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (bVar1 == bVar2) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x23c);
  if (((*(int *)(param_1 + 0x238) != -1) || (bVar1 < 8)) && (*(int *)(param_1 + 0x238) == param_2))
  {
    bVar2 = *param_3;
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (bVar1 == bVar2) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x250);
  if (((*(int *)(param_1 + 0x24c) != -1) || (bVar1 < 8)) && (*(int *)(param_1 + 0x24c) == param_2))
  {
    bVar2 = *param_3;
    if (7 < bVar1) {
      bVar1 = 0xff;
    }
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (bVar1 == bVar2) {
      return 0;
    }
  }
  return 1;
}

