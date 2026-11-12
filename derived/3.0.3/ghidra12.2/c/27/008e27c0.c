
void FUN_008e27c0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar1 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar1 * 8);
      if (*(char *)(puVar2 + 0x14) != '\0') {
        *(undefined1 *)(puVar2 + 0x14) = 0;
      }
      if (*(char *)(puVar2 + 0x13) != '\0') {
        *(undefined1 *)(puVar2 + 0x13) = 0;
      }
      if (*(char *)((long)puVar2 + 0x84) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x84) = 0;
      }
      if (*(char *)((long)puVar2 + 0x7c) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x7c) = 0;
      }
      lVar1 = lVar1 + 1;
      *puVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x18) = puVar2;
    } while (lVar1 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0 < *(int *)(param_1 + 0x708)) {
    lVar1 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x710) + lVar1 * 8);
      if (*(char *)(puVar2 + 0x14) != '\0') {
        *(undefined1 *)(puVar2 + 0x14) = 0;
      }
      if (*(char *)(puVar2 + 0x13) != '\0') {
        *(undefined1 *)(puVar2 + 0x13) = 0;
      }
      if (*(char *)((long)puVar2 + 0x84) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x84) = 0;
      }
      if (*(char *)((long)puVar2 + 0x7c) != '\0') {
        *(undefined1 *)((long)puVar2 + 0x7c) = 0;
      }
      lVar1 = lVar1 + 1;
      *puVar2 = *(undefined8 *)(param_1 + 0x718);
      *(undefined8 **)(param_1 + 0x718) = puVar2;
    } while (lVar1 < *(int *)(param_1 + 0x708));
  }
  *(undefined4 *)(param_1 + 0x708) = 0;
  if (0 < *(int *)(param_1 + 0xe08)) {
    lVar1 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0xe18);
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0xe10) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *puVar3 = puVar2;
      *(undefined8 **)(param_1 + 0xe18) = puVar3;
      puVar2 = puVar3;
    } while (lVar1 < *(int *)(param_1 + 0xe08));
  }
  *(undefined4 *)(param_1 + 0xe08) = 0;
  *(undefined1 *)(param_1 + 0x65a8) = 0;
  if (*(char *)(param_1 + 0x65b0) != '\0') {
    *(undefined1 *)(param_1 + 0x65b0) = 0;
  }
  if (*(char *)(param_1 + 0x65b8) != '\0') {
    *(undefined1 *)(param_1 + 0x65b8) = 0;
  }
  *(undefined4 *)(param_1 + 0x65bc) = 0x7fc00000;
  return;
}

