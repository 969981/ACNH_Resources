
void FUN_03b60dec(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint6 uStack_1e;
  
  if (DAT_05aebc00 != '\0') {
    FUN_03b5fba8(param_1 + 0x50);
    return;
  }
  if (((*(long **)(param_1 + 0x48) != (long *)0x0) &&
      (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) && (**(long **)(param_1 + 0x48) != 0)) {
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x10) = 3;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar2 + 2) = 0xff;
    puVar2[5] = 0;
    *(ulong *)((long)puVar2 + 0x12) = (ulong)uStack_1e;
    *(undefined8 *)((long)puVar2 + 0x1a) = 0;
    *(undefined8 *)((long)puVar2 + 0x22) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x7f;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

