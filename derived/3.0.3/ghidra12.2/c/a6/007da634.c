
undefined8 FUN_007da634(long param_1,int param_2,byte *param_3)

{
  byte bVar1;
  
  if (((param_2 != 0) && (DAT_04cd19d8 != 0)) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
    if (*(byte *)(param_1 + 0x40) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x44) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x4c) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x4c)) && (*(int *)(param_1 + 0x50) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x58) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x58)) && (*(int *)(param_1 + 0x5c) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 100) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 100)) && (*(int *)(param_1 + 0x68) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x70) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x70)) && (*(int *)(param_1 + 0x74) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x7c) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x7c)) && (*(int *)(param_1 + 0x80) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x88) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x88)) && (*(int *)(param_1 + 0x8c) == param_2)) {
        return 1;
      }
    }
    if (*(byte *)(param_1 + 0x94) < 8) {
      bVar1 = *param_3;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      if ((bVar1 != *(byte *)(param_1 + 0x94)) && (*(int *)(param_1 + 0x98) == param_2)) {
        return 1;
      }
    }
  }
  return 0;
}

