
void FUN_03f21880(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (long)*(int *)(param_1 + 0x10) << 3;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    do {
      (**(code **)(*(long *)*puVar1 + 0x10))();
      lVar2 = lVar2 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  lVar2 = *(long *)(param_1 + 0x60);
  if (*(char *)(lVar2 + 0x15) == '\0') {
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  else {
    lVar2 = (long)(DAT_05ae7888 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4))
                  * 5) / 1000 + *(long *)(lVar2 + 0x18);
  }
  *(long *)(param_1 + 0x58) = lVar2;
  return;
}

