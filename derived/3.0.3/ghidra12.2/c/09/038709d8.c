
void FUN_038709d8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 100)) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x70) = *puVar1;
    }
    *puVar1 = 0;
    if (*(int *)(param_1 + 0x60) < *(int *)(param_1 + 100)) {
      *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x60) * 8) = puVar1;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    *puVar1 = *param_2;
    return;
  }
  lVar2 = *(long *)(DAT_05ae6a60 + 0x30);
  if (*(char *)(lVar2 + 0x80) == '\0') {
    *(undefined1 *)(lVar2 + 0x80) = 1;
    *(undefined8 *)(lVar2 + 0x84) = 9;
    return;
  }
  return;
}

