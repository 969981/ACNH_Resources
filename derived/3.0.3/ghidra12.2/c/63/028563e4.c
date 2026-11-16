
void FUN_028563e4(long param_1,undefined4 param_2)

{
  byte bVar1;
  
  switch(param_2) {
  case 0:
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined2 *)(param_1 + 0x26) = 0x101;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined1 **)(param_1 + 0x2c) = &LAB_01010000;
    *(undefined2 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0xff;
    *(undefined1 *)(param_1 + 0x36) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x37) = 0;
    break;
  case 1:
    FUN_0284f760(param_1 + 0x44,0);
    return;
  case 2:
    if ((*(char *)(param_1 + 0xaf) == '\x02') && ((*(ushort *)(param_1 + 0xbe) >> 8 & 1) == 0)) {
      FUN_028483f0();
      bVar1 = *(byte *)(param_1 + 0xbc);
      if ((bVar1 < 10) && ((&DAT_053fee41)[((long)(char)bVar1 & 0xffffffffU) * 0xba0] != '\0')) {
        FUN_0214e870(&DAT_053febf8 + (ulong)(uint)(int)(char)bVar1 * 0xba0);
      }
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)(param_1 + 0xae) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined2 *)(param_1 + 0x9e) = 0x101;
    *(undefined1 **)(param_1 + 0xa4) = &LAB_01010000;
    *(undefined1 *)(param_1 + 0xac) = 0xff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0xaf) = 0;
    break;
  case 3:
    FUN_02850410(param_1 + 0xc0,0);
    return;
  case 4:
    FUN_0285090c(param_1 + 0xfc,1);
    return;
  case 5:
    FUN_028510f4(param_1 + 0x134,1);
    return;
  case 6:
    FUN_0284c3b0(param_1 + 0x16c,0);
    return;
  }
  return;
}

