
undefined8 FUN_022edb8c(long param_1)

{
  if (*(char *)(param_1 + 0x3c) == '\0') {
    if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x18) != 0)) {
      return 1;
    }
  }
  else if (*(uint *)(param_1 + 8) < 2) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x20) >> 1 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x20) >> 2 & 1) != 0) {
      return 2;
    }
    if ((*(uint *)(param_1 + 0x20) >> 3 & 1) != 0) {
      return 3;
    }
    if ((*(uint *)(param_1 + 0x20) >> 4 & 1) != 0) {
      return 4;
    }
    if ((*(uint *)(param_1 + 0x20) >> 5 & 1) != 0) {
      return 5;
    }
    if ((*(uint *)(param_1 + 0x20) >> 6 & 1) != 0) {
      return 6;
    }
    if ((*(uint *)(param_1 + 0x20) >> 7 & 1) != 0) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x20) >> 8 & 1) != 0) {
      return 8;
    }
    if ((*(uint *)(param_1 + 0x20) >> 9 & 1) != 0) {
      return 9;
    }
    if ((*(uint *)(param_1 + 0x20) >> 10 & 1) != 0) {
      return 10;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0xb & 1) != 0) {
      return 0xb;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0xc & 1) != 0) {
      return 0xc;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0xd & 1) != 0) {
      return 0xd;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0xe & 1) != 0) {
      return 0xe;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0xf & 1) != 0) {
      return 0xf;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0x10 & 1) != 0) {
      return 0x10;
    }
    if ((*(uint *)(param_1 + 0x20) >> 0x11 & 1) != 0) {
      return 0x11;
    }
  }
  return 1;
}

