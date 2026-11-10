
void FUN_00219800(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_002198f0();
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN_00285dc0(puVar1);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) goto LAB_002198a0;
  if (*(ushort *)(param_1 + 0x60) < 2) {
LAB_0021988c:
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  else {
    lVar2 = 0;
    do {
      FUN_00219550(*(long *)(param_1 + 0x50) + lVar2 * 0x30);
      lVar2 = lVar2 + 1;
    } while ((int)((uint)lVar2 & 0xffff) < (int)(*(ushort *)(param_1 + 0x60) - 1));
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 != 0) goto LAB_0021988c;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_002198a0:
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  return;
}

