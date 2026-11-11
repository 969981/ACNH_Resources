
ulong FUN_004a1850(ulong *param_1,undefined4 *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  bVar1 = (byte)*param_1;
  if (-1 < (char)bVar1) {
    *param_2 = 1;
    return (ulong)bVar1;
  }
  if (0xf < (bVar1 >> 3) - 0x10) {
    return 0;
  }
  uVar2 = (*param_1 & 0xff00ff00ff00ff00) >> 8 | (*param_1 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar2 >> 0x20 | uVar2 << 0x20;
  switch((uint)(bVar1 >> 3)) {
  default:
    *param_2 = 2;
    return (uVar2 & 0xffffffff) >> 0x10 & 0x3fff;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    *param_2 = 3;
    return (uVar2 & 0xffffffff) >> 8 & 0x1fffff;
  case 0x1c:
    *param_2 = 4;
    return uVar2 & 0x7ffffff;
  case 0x1d:
    *param_2 = 5;
    return uVar3 >> 0x18 & 0x7ffffffff;
  case 0x1e:
    *param_2 = 8;
    return uVar2 >> 0x20 | uVar2 << 0x20 & 0x7ffffffffffffff;
  case 0x1f:
    break;
  }
  if ((bVar1 & 7) == 1) {
    uVar2 = (*(ulong *)((long)param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)((long)param_1 + 1) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *param_2 = 9;
    return uVar2 >> 0x20 | uVar2 << 0x20;
  }
  if ((bVar1 & 7) == 0) {
    *param_2 = 6;
    return uVar3 >> 0x10 & 0xffffffffff;
  }
  *param_2 = 0;
  return 0;
}

