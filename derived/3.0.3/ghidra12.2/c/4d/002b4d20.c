
void FUN_002b4d20(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      do {
        FUN_00223704((long *)(param_1 + 0x18),lVar1);
        FUN_002236e0(param_1 + 0x30,param_1 + 0x30,lVar1 + *(int *)(param_1 + 0x44));
        if (*(int *)(param_1 + 0x28) == 0) break;
        lVar1 = *(long *)(param_1 + 0x18);
      } while (lVar1 != 0);
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 != 0) {
      do {
        FUN_00223704((long *)(param_1 + 0x58),lVar1);
        FUN_002236e0(param_1 + 0x70,param_1 + 0x70,lVar1 + *(int *)(param_1 + 0x84));
        if (*(int *)(param_1 + 0x68) == 0) break;
        lVar1 = *(long *)(param_1 + 0x58);
      } while (lVar1 != 0);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

