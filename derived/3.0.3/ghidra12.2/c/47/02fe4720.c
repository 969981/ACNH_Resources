
void FUN_02fe4720(long param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  
  switch(param_2) {
  case 1:
  case 8:
    uVar3 = 0x101;
    cVar1 = *(char *)(param_1 + 0x11);
    goto joined_r0x02fe47e8;
  case 2:
    bVar2 = *(byte *)(param_1 + 0x14) & 0xfd | 1;
    break;
  case 3:
    bVar2 = *(byte *)(param_1 + 0x14) | 2;
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 0x14) & 0xfd;
    break;
  case 5:
    bVar2 = *(byte *)(param_1 + 0x14) | 4;
    break;
  case 6:
    bVar2 = *(byte *)(param_1 + 0x14) & 0xfb;
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x13) = 1;
    return;
  case 9:
    if ((*(byte *)(param_1 + 0x14) >> 3 & 1) == 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x14) & 0xe7;
    break;
  case 10:
    if ((*(byte *)(param_1 + 0x14) >> 3 & 1) != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x14) | 8;
    break;
  case 0xb:
    if ((*(byte *)(param_1 + 0x14) >> 4 & 1) != 0) {
      return;
    }
    bVar2 = *(byte *)(param_1 + 0x14) | 0x10;
    break;
  default:
    goto switchD_02fe474c_default;
  }
  *(byte *)(param_1 + 0x14) = bVar2;
switchD_02fe474c_default:
  uVar3 = 1;
  cVar1 = *(char *)(param_1 + 0x11);
joined_r0x02fe47e8:
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x11) = uVar3;
    return;
  }
  return;
}

