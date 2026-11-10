
long FUN_001f3a7c(int *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x76);
  (**(code **)(*(long *)(param_1 + 0x76) + 0x10))(plVar1);
  if (*param_1 == 0) {
    iVar2 = FUN_001f62f0(*(undefined8 *)(param_1 + 0x56));
    if (iVar2 == 0) {
      iVar2 = FUN_001f6340(*(undefined8 *)(param_1 + 0x56));
      lVar3 = (ulong)(iVar2 == 0) << 2;
      goto LAB_001f3aa8;
    }
    FUN_001f5e80();
    iVar2 = FUN_001f6360(*(undefined8 *)(param_1 + 0x56));
    if (iVar2 == 0) {
      lVar3 = 0;
      goto LAB_001f3aa8;
    }
    *(undefined1 *)((long)param_1 + 0x1c9) = 1;
    *param_1 = 3;
  }
  lVar3 = 4;
LAB_001f3aa8:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return lVar3;
}

