
void FUN_032dcca8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x61) != '\0') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x1d8) + 0x18);
    FUN_00355d50(lVar1);
    if (*(int *)(lVar1 + 0x1bcc) != 0) {
      FUN_00351eac(lVar1 + 0x30);
      *(undefined4 *)(lVar1 + 0x1bcc) = 0;
    }
    if (*(char *)(param_1 + 400) != '\0') {
      lVar1 = *(long *)(*(long *)(param_1 + 0x1e0) + 0x18);
      FUN_00355d50(lVar1);
      if (*(int *)(lVar1 + 0x1bcc) != 0) {
        FUN_00351eac(lVar1 + 0x30);
        *(undefined4 *)(lVar1 + 0x1bcc) = 0;
        FUN_00355e80(lVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}

