
void FUN_03f5b160(undefined4 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(long *)(param_1 + 0x1a) = param_5;
  uVar3 = 0x138;
  if ((param_2 & 1) == 0) {
    uVar3 = 0x106;
  }
  *param_1 = uVar3;
  param_1[1] = param_2 & 1;
  if (*(byte *)(param_5 + 0x21) == 2 || 4 < *(byte *)(param_5 + 0x21)) {
    param_1[4] = 0;
    iVar2 = (uint)(5 < *(byte *)(param_5 + 0x21)) << 0xd;
    param_1[4] = iVar2;
    if ((6 < *(byte *)(param_5 + 0x21)) &&
       (*(undefined1 *)(param_1 + 2) = 1, 8 < *(byte *)(param_5 + 0x21))) {
      param_1[3] = 1;
    }
    if (-1 < *(int *)(param_5 + 0x24)) {
      iVar2 = *(int *)(param_5 + 0x24) << 8;
      param_1[4] = iVar2;
    }
    param_1[5] = -iVar2 + 0x21800;
    param_1[6] = -iVar2 + 0x44800;
    param_1[8] = *(int *)(param_5 + 0x28) * 0x100 + 0x55400;
    if (*(int *)(param_5 + 0x2c) != 0) {
      param_1[10] = *(int *)(param_5 + 0x2c);
    }
    if (-1 < *(int *)(param_5 + 0x50)) {
      param_1[3] = *(int *)(param_5 + 0x50);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = 0x1c00000005800;
    param_1[6] = 0x3a800;
    param_1[7] = 0x2f00;
    param_1[8] = 0x55500;
    if (*(char *)(param_5 + 0x21) == '\x01') {
      *(undefined8 *)(param_1 + 10) = 0x14f951700001230;
    }
  }
  param_1[0xc] = 0;
  if ((*(int *)(param_5 + 0x10) != 0x1018) && (*(int *)(param_5 + 0x10) != 0x1074)) {
    *(undefined8 *)(param_1 + 0xd) = 0x100000001;
    *(undefined8 *)(param_1 + 0xf) = 0x100000001;
    param_1[0x11] = 1;
  }
  if (*(byte *)(param_5 + 0x21) < 8) {
    param_1[0x17] = 1;
  }
  else {
    param_1[0x18] = 1;
  }
  uVar1 = *(uint *)(param_5 + 0x3c);
  if (uVar1 != 0xf0000000) {
    param_1[0x17] = uVar1 & 1;
    param_1[0x18] = uVar1 >> 7 & 1;
  }
  return;
}

