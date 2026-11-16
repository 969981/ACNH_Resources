
undefined4 FUN_0250b360(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if ((*(char *)(param_1 + 0x13d4) != '\0') && (*(char *)(param_1 + 0x13d6) != '\0')) {
    if (param_2 == 0) {
      return 0;
    }
    iVar1 = 1;
  }
  if ((*(char *)(param_1 + 0x27c4) != '\0') && (*(char *)(param_1 + 0x27c6) != '\0')) {
    if (iVar1 == param_2) {
      return 1;
    }
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(param_1 + 0x3bb4) != '\0') && (*(char *)(param_1 + 0x3bb6) != '\0')) {
    if (iVar1 == param_2) {
      return 2;
    }
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(param_1 + 0x4fa4) != '\0') && (*(char *)(param_1 + 0x4fa6) != '\0')) {
    if (iVar1 == param_2) {
      return 3;
    }
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(param_1 + 0x6394) != '\0') && (*(char *)(param_1 + 0x6396) != '\0')) {
    if (iVar1 == param_2) {
      return 4;
    }
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(param_1 + 0x7784) != '\0') && (*(char *)(param_1 + 0x7786) != '\0')) {
    if (iVar1 == param_2) {
      return 5;
    }
    iVar1 = iVar1 + 1;
  }
  if ((*(char *)(param_1 + 0x8b74) != '\0') && (*(char *)(param_1 + 0x8b76) != '\0')) {
    if (iVar1 == param_2) {
      return 6;
    }
    iVar1 = iVar1 + 1;
  }
  uVar2 = 7;
  if ((iVar1 != param_2 || *(char *)(param_1 + 0x9f66) == '\0') ||
      *(char *)(param_1 + 0x9f64) == '\0') {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

