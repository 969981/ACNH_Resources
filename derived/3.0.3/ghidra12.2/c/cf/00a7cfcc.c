
void FUN_00a7cfcc(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar3 = *DAT_0537d558;
  if (1 < *(byte *)(lVar3 + 0x476)) {
    bVar2 = *(byte *)(lVar3 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar3 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar3 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar3 + 0x472) != bVar2)) {
        DAT_04da5750 = *param_2;
        DAT_04da5748 = 0xffffffffffffffff;
        DAT_04da5751 = 3;
        DAT_04da5754 = 0x13;
        local_18 = 0;
        local_12 = 0;
        if (7 < DAT_04da5750) {
          DAT_04da5750 = 0xff;
        }
        local_14 = 0xff01;
        if (DAT_04da5720 < 0) {
          DAT_04da5748 = 0xffffffffffffffff;
          DAT_04da5751 = 3;
          DAT_04da5754 = 0x13;
          return;
        }
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04da5720,&local_18,&DAT_04da5748,0x10,0);
        return;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x260) < 8) && (*(long *)(param_1 + 0x268) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x260) == bVar2) {
      *(undefined1 *)(param_1 + 0x260) = 0xff;
      *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x270) < 8) && (*(long *)(param_1 + 0x278) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x270) == bVar2) {
      *(undefined1 *)(param_1 + 0x270) = 0xff;
      *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x280) < 8) && (*(long *)(param_1 + 0x288) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x280) == bVar2) {
      *(undefined1 *)(param_1 + 0x280) = 0xff;
      *(undefined8 *)(param_1 + 0x288) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x290) < 8) && (*(long *)(param_1 + 0x298) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x290) == bVar2) {
      *(undefined1 *)(param_1 + 0x290) = 0xff;
      *(undefined8 *)(param_1 + 0x298) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x2a0) < 8) && (*(long *)(param_1 + 0x2a8) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x2a0) == bVar2) {
      *(undefined1 *)(param_1 + 0x2a0) = 0xff;
      *(undefined8 *)(param_1 + 0x2a8) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x2b0) < 8) && (*(long *)(param_1 + 0x2b8) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x2b0) == bVar2) {
      *(undefined1 *)(param_1 + 0x2b0) = 0xff;
      *(undefined8 *)(param_1 + 0x2b8) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x2c0) < 8) && (*(long *)(param_1 + 0x2c8) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x2c0) == bVar2) {
      *(undefined1 *)(param_1 + 0x2c0) = 0xff;
      *(undefined8 *)(param_1 + 0x2c8) = 0xffffffffffffffff;
    }
  }
  if ((*(byte *)(param_1 + 0x2d0) < 8) && (*(long *)(param_1 + 0x2d8) != -1)) {
    bVar2 = *param_2;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (*(byte *)(param_1 + 0x2d0) == bVar2) {
      *(undefined1 *)(param_1 + 0x2d0) = 0xff;
      *(undefined8 *)(param_1 + 0x2d8) = 0xffffffffffffffff;
      return;
    }
  }
  return;
}

