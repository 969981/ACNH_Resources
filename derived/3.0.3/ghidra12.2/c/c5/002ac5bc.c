
undefined4 FUN_002ac5bc(char *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != '\0' && *(long *)(param_1 + 8) == param_2) {
    return 0;
  }
  if ((param_1[0x28] != '\0') && (*(long *)(param_1 + 0x30) == param_2)) {
    return 1;
  }
  if ((param_1[0x50] != '\0') && (*(long *)(param_1 + 0x58) == param_2)) {
    return 2;
  }
  if ((param_1[0x78] != '\0') && (*(long *)(param_1 + 0x80) == param_2)) {
    return 3;
  }
  if ((param_1[0xa0] != '\0') && (*(long *)(param_1 + 0xa8) == param_2)) {
    return 4;
  }
  if ((param_1[200] != '\0') && (*(long *)(param_1 + 0xd0) == param_2)) {
    return 5;
  }
  if ((param_1[0xf0] != '\0') && (*(long *)(param_1 + 0xf8) == param_2)) {
    return 6;
  }
  if ((param_1[0x118] != '\0') && (*(long *)(param_1 + 0x120) == param_2)) {
    return 7;
  }
  if ((param_1[0x140] != '\0') && (*(long *)(param_1 + 0x148) == param_2)) {
    return 8;
  }
  if ((param_1[0x168] != '\0') && (*(long *)(param_1 + 0x170) == param_2)) {
    return 9;
  }
  if ((param_1[400] != '\0') && (*(long *)(param_1 + 0x198) == param_2)) {
    return 10;
  }
  if ((param_1[0x1b8] != '\0') && (*(long *)(param_1 + 0x1c0) == param_2)) {
    return 0xb;
  }
  if ((param_1[0x1e0] != '\0') && (*(long *)(param_1 + 0x1e8) == param_2)) {
    return 0xc;
  }
  if ((param_1[0x208] != '\0') && (*(long *)(param_1 + 0x210) == param_2)) {
    return 0xd;
  }
  if ((param_1[0x230] != '\0') && (*(long *)(param_1 + 0x238) == param_2)) {
    return 0xe;
  }
  if ((param_1[600] != '\0') && (*(long *)(param_1 + 0x260) == param_2)) {
    return 0xf;
  }
  if ((param_1[0x280] != '\0') && (*(long *)(param_1 + 0x288) == param_2)) {
    return 0x10;
  }
  if ((param_1[0x2a8] != '\0') && (*(long *)(param_1 + 0x2b0) == param_2)) {
    return 0x11;
  }
  if ((param_1[0x2d0] != '\0') && (*(long *)(param_1 + 0x2d8) == param_2)) {
    return 0x12;
  }
  if ((param_1[0x2f8] != '\0') && (*(long *)(param_1 + 0x300) == param_2)) {
    return 0x13;
  }
  if ((param_1[800] != '\0') && (*(long *)(param_1 + 0x328) == param_2)) {
    return 0x14;
  }
  if ((param_1[0x348] != '\0') && (*(long *)(param_1 + 0x350) == param_2)) {
    return 0x15;
  }
  if ((param_1[0x370] != '\0') && (*(long *)(param_1 + 0x378) == param_2)) {
    return 0x16;
  }
  if ((param_1[0x398] != '\0') && (*(long *)(param_1 + 0x3a0) == param_2)) {
    return 0x17;
  }
  if ((param_1[0x3c0] != '\0') && (*(long *)(param_1 + 0x3c8) == param_2)) {
    return 0x18;
  }
  if ((param_1[1000] != '\0') && (*(long *)(param_1 + 0x3f0) == param_2)) {
    return 0x19;
  }
  if ((param_1[0x410] != '\0') && (*(long *)(param_1 + 0x418) == param_2)) {
    return 0x1a;
  }
  if ((param_1[0x438] != '\0') && (*(long *)(param_1 + 0x440) == param_2)) {
    return 0x1b;
  }
  if ((param_1[0x460] != '\0') && (*(long *)(param_1 + 0x468) == param_2)) {
    return 0x1c;
  }
  if ((param_1[0x488] != '\0') && (*(long *)(param_1 + 0x490) == param_2)) {
    return 0x1d;
  }
  if ((param_1[0x4b0] != '\0') && (*(long *)(param_1 + 0x4b8) == param_2)) {
    return 0x1e;
  }
  uVar1 = 0x1f;
  if (*(long *)(param_1 + 0x4e0) != param_2 || param_1[0x4d8] == '\0') {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

