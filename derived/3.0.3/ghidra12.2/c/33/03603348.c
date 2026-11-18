
void FUN_03603348(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + param_2 * 8;
  FUN_03612b18(*(undefined8 *)(lVar3 + 0x140));
  if ((param_2 < 2) && (1 < *(byte *)(param_1 + 0x138))) {
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0xc78) = 0;
    }
    param_1 = param_1 + (param_2 ^ 1) * 8;
    plVar1 = (long *)(lVar3 + 0x140);
    plVar2 = (long *)(param_1 + 0x140);
    lVar3 = *(long *)(param_1 + 0x140);
    if (*(char *)(lVar3 + 0x264c) == '\x01') {
      lVar4 = *plVar1;
      *(long *)(lVar4 + 0x3fa8) = lVar3 + 0x2640;
      *(undefined1 *)(lVar4 + 0x264c) = 1;
      lVar3 = *plVar2;
      *(long *)(lVar3 + 0x3fa8) = *plVar1 + 0x2640;
      *(undefined1 *)(lVar3 + 0x264c) = 1;
      lVar3 = *plVar2;
    }
    lVar4 = *plVar1;
    if (((*(char *)(lVar3 + 0x40d2) != '\0') && (*(long *)(lVar3 + 0x40d8) == lVar4 + 0x40d0)) ||
       ((*(int *)(lVar3 + 0xf68) == 7 &&
        ((*(char *)(lVar3 + 0xf7a) != '\0' && (*(long *)(lVar3 + 0xf80) == lVar4 + 0xf78)))))) {
      *(long *)(lVar4 + 0x40d8) = lVar3 + 0x40d0;
      *(undefined1 *)(lVar4 + 0x40d2) = 1;
      lVar3 = *plVar2;
      *(long *)(lVar3 + 0x40d8) = *plVar1 + 0x40d0;
      *(undefined1 *)(lVar3 + 0x40d2) = 1;
      lVar3 = *plVar1;
      if (*(int *)(lVar3 + 0xf68) == 7) {
        lVar4 = *plVar2;
        *(undefined1 *)(lVar3 + 0xf7a) = 1;
        *(long *)(lVar3 + 0xf80) = lVar4 + 0xf78;
        lVar3 = *plVar1;
      }
      lVar4 = *plVar2;
      if (*(int *)(lVar4 + 0xf68) == 7) {
        *(long *)(lVar4 + 0xf80) = lVar3 + 0xf78;
        *(undefined1 *)(lVar4 + 0xf7a) = 1;
        lVar3 = *plVar1;
        lVar4 = *plVar2;
      }
      *(long *)(lVar3 + 0x4108) = lVar4 + 0x4100;
      *(undefined1 *)(lVar3 + 0x4100) = 1;
      lVar3 = *plVar1;
      lVar4 = *plVar2;
      *(undefined1 *)(lVar4 + 0x4100) = 1;
      *(long *)(lVar4 + 0x4108) = lVar3 + 0x4100;
    }
  }
  return;
}

