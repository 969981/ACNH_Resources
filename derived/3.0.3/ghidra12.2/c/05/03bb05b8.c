
void FUN_03bb05b8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xd0) != 0) {
    if ((*(char *)(param_1 + 0x104) != '\0') && (*(char *)(param_1 + 0x105) != '\0')) {
      lVar1 = *(long *)(param_1 + 0xd8);
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x104) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
      else if (((*(int *)(param_1 + 0xe0) != *(int *)(lVar1 + 0x10)) || (*(int *)(lVar1 + 0xc) == 0)
               ) || (*(int *)(lVar1 + 0xc) == 7)) {
        *(undefined1 *)(param_1 + 0x104) = 0;
        *(undefined8 *)(param_1 + 0xf8) = 0;
        if (*(int *)(param_1 + 0xe0) == *(int *)(lVar1 + 0x10)) {
          FUN_03b45ec0(0,0);
        }
      }
    }
    lVar1 = *(long *)(param_1 + 0xd8);
    if (((lVar1 != 0) && (*(int *)(param_1 + 0xe0) == *(int *)(lVar1 + 0x10))) &&
       ((*(int *)(lVar1 + 0xc) != 0 &&
        ((*(int *)(lVar1 + 0xc) != 7 && (0.0 <= *(float *)(param_1 + 0x100))))))) {
      *(float *)(lVar1 + 0x90) = *(float *)(param_1 + 0x100);
    }
  }
  *(undefined1 *)(param_1 + 0x184) = 0;
  return;
}

