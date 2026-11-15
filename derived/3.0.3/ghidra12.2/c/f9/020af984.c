
void FUN_020af984(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xa20) == iVar1) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0xa24) == iVar1) {
      lVar2 = 1;
    }
    else if (*(int *)(param_1 + 0xa28) == iVar1) {
      lVar2 = 2;
    }
    else if (*(int *)(param_1 + 0xa2c) == iVar1) {
      lVar2 = 3;
    }
    else if (*(int *)(param_1 + 0xa30) == iVar1) {
      lVar2 = 4;
    }
    else if (*(int *)(param_1 + 0xa34) == iVar1) {
      lVar2 = 5;
    }
    else if (*(int *)(param_1 + 0xa38) == iVar1) {
      lVar2 = 6;
    }
    else if (*(int *)(param_1 + 0xa3c) == iVar1) {
      lVar2 = 7;
    }
    else if (*(int *)(param_1 + 0xa40) == iVar1) {
      lVar2 = 8;
    }
    else if (*(int *)(param_1 + 0xa44) == iVar1) {
      lVar2 = 9;
    }
    else if (*(int *)(param_1 + 0xa48) == iVar1) {
      lVar2 = 10;
    }
    else if (*(int *)(param_1 + 0xa4c) == iVar1) {
      lVar2 = 0xb;
    }
    else if (*(int *)(param_1 + 0xa50) == iVar1) {
      lVar2 = 0xc;
    }
    else if (*(int *)(param_1 + 0xa54) == iVar1) {
      lVar2 = 0xd;
    }
    else if (*(int *)(param_1 + 0xa58) == iVar1) {
      lVar2 = 0xe;
    }
    else if (*(int *)(param_1 + 0xa5c) == iVar1) {
      lVar2 = 0xf;
    }
    else if (*(int *)(param_1 + 0xa60) == iVar1) {
      lVar2 = 0x10;
    }
    else {
      if (*(int *)(param_1 + 0xa64) != iVar1) {
        return;
      }
      lVar2 = 0x11;
    }
    *(undefined4 *)(param_1 + 0xa20 + lVar2 * 4) = 0;
  }
  return;
}

