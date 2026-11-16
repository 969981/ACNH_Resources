
uint FUN_02612ca8(long param_1,short *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(short *)(param_1 + 8) == -2 || *param_2 == -2) {
    return 0;
  }
  if (*(char *)(param_1 + 0xbc) != '\0') {
    uVar2 = FUN_0277d7b4(param_1 + 0x2c);
    if ((uVar2 & 1) != 0) {
LAB_02612cf8:
      uVar1 = 1;
      goto LAB_02612dc4;
    }
    if (1 < *(byte *)(param_1 + 0xbc)) {
      uVar2 = FUN_0277d7b4(param_1 + 0x44,param_2);
      if ((uVar2 & 1) != 0) goto LAB_02612cf8;
      if (2 < *(byte *)(param_1 + 0xbc)) {
        uVar2 = FUN_0277d7b4(param_1 + 0x5c,param_2);
        if ((uVar2 & 1) != 0) goto LAB_02612cf8;
        if (3 < *(byte *)(param_1 + 0xbc)) {
          uVar2 = FUN_0277d7b4(param_1 + 0x74,param_2);
          if ((uVar2 & 1) != 0) goto LAB_02612cf8;
          if (4 < *(byte *)(param_1 + 0xbc)) {
            uVar2 = FUN_0277d7b4(param_1 + 0x8c,param_2);
            if ((uVar2 & 1) != 0) goto LAB_02612cf8;
            if (5 < *(byte *)(param_1 + 0xbc)) {
              uVar2 = FUN_0277d7b4(param_1 + 0xa4,param_2);
              if ((uVar2 & 1) != 0) goto LAB_02612cf8;
              if (6 < *(byte *)(param_1 + 0xbc)) {
                uVar2 = 6;
                do {
                  uVar1 = FUN_0277d7b4(param_1 + 0x2c,param_2);
                  if ((uVar1 & 1) != 0) break;
                  uVar2 = uVar2 + 1;
                } while (uVar2 < *(byte *)(param_1 + 0xbc));
                goto LAB_02612dc4;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_02612dc4:
  return uVar1 & 1;
}

