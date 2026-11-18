
undefined4 FUN_031fd8dc(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    return 0xffffffff;
  }
  if (*plVar2 == param_2) {
    return 0;
  }
  if (plVar2[1] == param_2) {
    return 1;
  }
  if (plVar2[2] == param_2) {
    return 2;
  }
  if (plVar2[3] == param_2) {
    return 3;
  }
  if (plVar2[4] == param_2) {
    return 4;
  }
  if (plVar2[5] == param_2) {
    return 5;
  }
  if (plVar2[6] == param_2) {
    return 6;
  }
  if (plVar2[7] == param_2) {
    return 7;
  }
  if (plVar2[8] == param_2) {
    return 8;
  }
  if (plVar2[9] == param_2) {
    return 9;
  }
  if (plVar2[10] == param_2) {
    return 10;
  }
  if (plVar2[0xb] == param_2) {
    return 0xb;
  }
  if (plVar2[0xc] == param_2) {
    return 0xc;
  }
  if (plVar2[0xd] == param_2) {
    return 0xd;
  }
  if (plVar2[0xe] == param_2) {
    return 0xe;
  }
  if (plVar2[0xf] == param_2) {
    return 0xf;
  }
  if (plVar2[0x10] == param_2) {
    return 0x10;
  }
  if (plVar2[0x11] == param_2) {
    return 0x11;
  }
  if (plVar2[0x12] == param_2) {
    return 0x12;
  }
  if (plVar2[0x13] == param_2) {
    return 0x13;
  }
  if (plVar2[0x14] == param_2) {
    return 0x14;
  }
  if (plVar2[0x15] == param_2) {
    return 0x15;
  }
  if (plVar2[0x16] == param_2) {
    return 0x16;
  }
  uVar1 = 0x17;
  if (plVar2[0x17] != param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

