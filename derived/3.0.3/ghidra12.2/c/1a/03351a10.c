
void FUN_03351a10(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x25d0);
  if (lVar3 != 0) {
    FUN_03ebb268(lVar3 + 0xf8);
    if (*(int *)(lVar3 + 0x140) != -1) {
      FUN_03ebb160(lVar3 + 0xf8);
      *(undefined4 *)(lVar3 + 0x140) = 0xffffffff;
    }
    if ((((*(int *)(lVar3 + 0x1a0) == 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
        (*(int *)(lVar3 + 0x100) != 1)) && (uVar1 = FUN_00817520(lVar3), (uVar1 & 1) != 0)) {
      *(undefined4 *)(lVar3 + 0x1a0) = 2;
    }
    if ((*(char *)(param_1 + 0x2698) != '\0') &&
       (lVar3 = *(long *)(param_1 + 0x25d0), *(int *)(lVar3 + 0x1a0) == 2)) {
      uVar1 = FUN_03463bdc(lVar3,lVar3 + 0x148,param_1 + 0x25e0);
      if ((uVar1 & 1) != 0) {
        FUN_03b137d0(param_1 + 0x2680,param_1 + 0x25e0,0);
        lVar3 = FUN_0037e530(*(undefined8 *)(param_1 + 0x25d8));
        *(long *)(*(long *)(lVar3 + 0x18) + 8) = param_1 + 0x2680;
      }
      *(char *)(param_1 + 0x2698) = '\0';
    }
  }
  lVar3 = *(long *)(param_1 + 0x26a0);
  if (lVar3 != 0) {
    FUN_03ebb268(lVar3 + 0xf8);
    if (*(int *)(lVar3 + 0x140) != -1) {
      FUN_03ebb160(lVar3 + 0xf8);
      *(undefined4 *)(lVar3 + 0x140) = 0xffffffff;
    }
    if (((*(int *)(lVar3 + 0x1a0) == 1) && ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0)) &&
       ((*(int *)(lVar3 + 0x100) != 1 && (uVar1 = FUN_00817520(lVar3), (uVar1 & 1) != 0)))) {
      *(undefined4 *)(lVar3 + 0x1a0) = 2;
    }
    if ((*(char *)(param_1 + 0x2768) != '\0') &&
       (lVar3 = *(long *)(param_1 + 0x26a0), *(int *)(lVar3 + 0x1a0) == 2)) {
      uVar1 = FUN_03463bdc(lVar3,lVar3 + 0x148,param_1 + 0x26b0);
      if ((uVar1 & 1) != 0) {
        FUN_03b137d0(param_1 + 0x2750,param_1 + 0x26b0,0);
        lVar3 = FUN_0037e530(*(undefined8 *)(param_1 + 0x26a8));
        *(long *)(*(long *)(lVar3 + 0x18) + 8) = param_1 + 0x2750;
      }
      *(undefined1 *)(param_1 + 0x2768) = 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x28) = lVar3;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
    }
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (plVar2 = *(long **)(*(long *)(param_1 + 0x28) + 0x50), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x28) = lVar3;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(long **)(lVar3 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03351c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar3 + 0x20) + 0x20))();
      return;
    }
  }
  return;
}

