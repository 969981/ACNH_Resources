
undefined8 FUN_01d50b20(byte *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *DAT_0537d558;
  cVar1 = *(char *)(lVar2 + 0x473);
  if (cVar1 == '\0') {
LAB_01d50b58:
    if (((*(byte *)(lVar2 + 200) >> 2 & 1) != 0) && ((*param_1 >> 1 & 1) == 0)) {
      return 0;
    }
    if (cVar1 != '\x02') goto LAB_01d50b78;
LAB_01d50b98:
    if (((*(byte *)(lVar2 + 0x1c8) >> 2 & 1) != 0) && ((*param_1 >> 3 & 1) == 0)) {
      return 0;
    }
    if (cVar1 != '\x04') goto LAB_01d50bb8;
LAB_01d50bd8:
    if (((*(byte *)(lVar2 + 0x2c8) >> 2 & 1) != 0) && ((*param_1 >> 5 & 1) == 0)) {
      return 0;
    }
    if (cVar1 == '\x06') goto LAB_01d50c18;
  }
  else {
    if (((*(byte *)(lVar2 + 0x48) >> 2 & 1) != 0) && ((*param_1 & 1) == 0)) {
      return 0;
    }
    if (cVar1 != '\x01') goto LAB_01d50b58;
LAB_01d50b78:
    if (((*(byte *)(lVar2 + 0x148) >> 2 & 1) != 0) && ((*param_1 >> 2 & 1) == 0)) {
      return 0;
    }
    if (cVar1 != '\x03') goto LAB_01d50b98;
LAB_01d50bb8:
    if (((*(byte *)(lVar2 + 0x248) >> 2 & 1) != 0) && ((*param_1 >> 4 & 1) == 0)) {
      return 0;
    }
    if (cVar1 != '\x05') goto LAB_01d50bd8;
  }
  if (((*(byte *)(lVar2 + 0x348) >> 2 & 1) != 0) && ((*param_1 >> 6 & 1) == 0)) {
    return 0;
  }
  if (cVar1 == '\a') {
    return 1;
  }
LAB_01d50c18:
  if (((*(byte *)(lVar2 + 0x3c8) >> 2 & 1) == 0) || ((char)*param_1 < '\0')) {
    return 1;
  }
  return 0;
}

