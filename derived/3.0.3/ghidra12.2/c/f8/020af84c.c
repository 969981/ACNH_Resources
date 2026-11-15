
undefined8 FUN_020af84c(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xa20) == 0) {
    lVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xa24) == 0) {
    lVar1 = 1;
  }
  else if (*(int *)(param_1 + 0xa28) == 0) {
    lVar1 = 2;
  }
  else if (*(int *)(param_1 + 0xa2c) == 0) {
    lVar1 = 3;
  }
  else if (*(int *)(param_1 + 0xa30) == 0) {
    lVar1 = 4;
  }
  else if (*(int *)(param_1 + 0xa34) == 0) {
    lVar1 = 5;
  }
  else if (*(int *)(param_1 + 0xa38) == 0) {
    lVar1 = 6;
  }
  else if (*(int *)(param_1 + 0xa3c) == 0) {
    lVar1 = 7;
  }
  else if (*(int *)(param_1 + 0xa40) == 0) {
    lVar1 = 8;
  }
  else if (*(int *)(param_1 + 0xa44) == 0) {
    lVar1 = 9;
  }
  else if (*(int *)(param_1 + 0xa48) == 0) {
    lVar1 = 10;
  }
  else if (*(int *)(param_1 + 0xa4c) == 0) {
    lVar1 = 0xb;
  }
  else if (*(int *)(param_1 + 0xa50) == 0) {
    lVar1 = 0xc;
  }
  else if (*(int *)(param_1 + 0xa54) == 0) {
    lVar1 = 0xd;
  }
  else if (*(int *)(param_1 + 0xa58) == 0) {
    lVar1 = 0xe;
  }
  else if (*(int *)(param_1 + 0xa5c) == 0) {
    lVar1 = 0xf;
  }
  else if (*(int *)(param_1 + 0xa60) == 0) {
    lVar1 = 0x10;
  }
  else {
    if (*(int *)(param_1 + 0xa64) != 0) {
      return 0;
    }
    lVar1 = 0x11;
  }
  *(undefined4 *)(param_1 + 0xa20 + lVar1 * 4) = *param_2;
  return 1;
}

