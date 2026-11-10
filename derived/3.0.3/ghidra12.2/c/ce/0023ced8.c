
void FUN_0023ced8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_a0 [128];
  
  if (*(char *)(param_1 + 0x4d) != '\0') {
    *(undefined1 *)(param_1 + 0x4d) = 0;
    lVar1 = *(long *)(param_1 + 200);
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00227860(lVar1,5);
    FUN_0023ecfc(*(undefined8 *)(param_1 + 200));
    *(undefined1 *)(param_1 + 0x13b8) = 0;
    *(undefined1 *)(param_1 + 0x13ba) = 0;
    FUN_0022be38(*(undefined8 *)(param_1 + 0xb8));
    FUN_0022be38(*(undefined8 *)(param_1 + 0xc0));
    if (0 < *(int *)(*(long *)(param_1 + 0xa0) + 4)) {
      FUN_002269b8(auStack_a0);
    }
    if (0 < *(int *)(*(long *)(param_1 + 0xa8) + 4)) {
      FUN_002269b8(auStack_a0);
    }
    FUN_0022e6c8(*(undefined8 *)(param_1 + 0xc0));
    if ((DAT_04c61168 != 0) && (lVar1 = FUN_002ba788(), lVar1 != 0)) {
      FUN_002b3fa8(auStack_a0);
      plVar2 = (long *)FUN_002ba788(DAT_04c61168);
      (**(code **)(*plVar2 + 0x58))(plVar2,auStack_a0);
      FUN_002b4104(auStack_a0);
    }
  }
  return;
}

