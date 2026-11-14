
undefined8 FUN_01d66b38(long param_1,int *param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *DAT_0537d558;
  cVar1 = *(char *)(lVar2 + 0x473);
  if (cVar1 == '\0') {
LAB_01d66b74:
    if (((*(byte *)(lVar2 + 200) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x7c) != *param_2)) {
      return 0;
    }
    if (cVar1 != '\x02') goto LAB_01d66b94;
LAB_01d66bb4:
    if (((*(byte *)(lVar2 + 0x1c8) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x84) != *param_2)) {
      return 0;
    }
    if (cVar1 != '\x04') goto LAB_01d66bd4;
LAB_01d66bf4:
    if (((*(byte *)(lVar2 + 0x2c8) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x8c) != *param_2)) {
      return 0;
    }
    if (cVar1 == '\x06') goto LAB_01d66c34;
  }
  else {
    if (((*(byte *)(lVar2 + 0x48) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x78) != *param_2)) {
      return 0;
    }
    if (cVar1 != '\x01') goto LAB_01d66b74;
LAB_01d66b94:
    if (((*(byte *)(lVar2 + 0x148) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x80) != *param_2)) {
      return 0;
    }
    if (cVar1 != '\x03') goto LAB_01d66bb4;
LAB_01d66bd4:
    if (((*(byte *)(lVar2 + 0x248) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x88) != *param_2)) {
      return 0;
    }
    if (cVar1 != '\x05') goto LAB_01d66bf4;
  }
  if (((*(byte *)(lVar2 + 0x348) >> 2 & 1) != 0) && (*(int *)(param_1 + 0x90) != *param_2)) {
    return 0;
  }
  if (cVar1 == '\a') {
    return 1;
  }
LAB_01d66c34:
  if (((*(byte *)(lVar2 + 0x3c8) >> 2 & 1) == 0) || (*(int *)(param_1 + 0x94) == *param_2)) {
    return 1;
  }
  return 0;
}

