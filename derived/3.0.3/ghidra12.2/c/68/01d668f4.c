
undefined8 FUN_01d668f4(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  lVar4 = *DAT_0537d558;
  uVar2 = *(uint *)(param_1 + 0xa4);
  cVar3 = *(char *)(lVar4 + 0x473);
  if (cVar3 == '\0') {
LAB_01d66934:
    if ((((*(byte *)(lVar4 + 200) >> 3 & 1) != 0) && ((uVar1 >> 1 & 1) == 0)) &&
       ((uVar2 >> 1 & 1) == 0)) {
      return 0;
    }
    if (cVar3 != '\x02') goto LAB_01d66954;
LAB_01d66974:
    if ((((*(byte *)(lVar4 + 0x1c8) >> 3 & 1) != 0) && ((uVar1 >> 3 & 1) == 0)) &&
       ((uVar2 >> 3 & 1) == 0)) {
      return 0;
    }
    if (cVar3 != '\x04') goto LAB_01d66994;
LAB_01d669b4:
    if ((((*(byte *)(lVar4 + 0x2c8) >> 3 & 1) != 0) && ((uVar1 >> 5 & 1) == 0)) &&
       ((uVar2 >> 5 & 1) == 0)) {
      return 0;
    }
    if (cVar3 == '\x06') goto LAB_01d669f4;
  }
  else {
    if ((((*(byte *)(lVar4 + 0x48) >> 3 & 1) != 0) && ((uVar1 & 1) == 0)) && ((uVar2 & 1) == 0)) {
      return 0;
    }
    if (cVar3 != '\x01') goto LAB_01d66934;
LAB_01d66954:
    if ((((*(byte *)(lVar4 + 0x148) >> 3 & 1) != 0) && ((uVar1 >> 2 & 1) == 0)) &&
       ((uVar2 >> 2 & 1) == 0)) {
      return 0;
    }
    if (cVar3 != '\x03') goto LAB_01d66974;
LAB_01d66994:
    if ((((*(byte *)(lVar4 + 0x248) >> 3 & 1) != 0) && ((uVar1 >> 4 & 1) == 0)) &&
       ((uVar2 >> 4 & 1) == 0)) {
      return 0;
    }
    if (cVar3 != '\x05') goto LAB_01d669b4;
  }
  if ((((*(byte *)(lVar4 + 0x348) >> 3 & 1) != 0) && ((uVar1 >> 6 & 1) == 0)) &&
     ((uVar2 >> 6 & 1) == 0)) {
    return 0;
  }
  if (cVar3 == '\a') {
    return 1;
  }
LAB_01d669f4:
  if ((((*(byte *)(lVar4 + 0x3c8) >> 3 & 1) == 0) || ((uVar1 >> 7 & 1) != 0)) ||
     ((uVar2 >> 7 & 1) != 0)) {
    return 1;
  }
  return 0;
}

