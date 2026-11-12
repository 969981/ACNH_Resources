
void FUN_009c25ac(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x78855454) {
    return;
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x28) = 0x100000001;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x50) = 1;
  lVar3 = *DAT_0537d558;
  if (1 < *(byte *)(lVar3 + 0x476)) {
    bVar2 = *(byte *)(lVar3 + 0x473);
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar3 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
      if (7 < bVar2) {
        pbVar1 = (byte *)(lVar3 + 0x48);
      }
      if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar3 + 0x472) != bVar2)) goto LAB_009c26a4;
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x5c) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  }
LAB_009c26a4:
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x202020202020202;
  return;
}

