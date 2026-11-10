
undefined8 FUN_001fb2f0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  
  if (999 < *(int *)(param_2 + 0x18) - 4000U) {
    return 1;
  }
  uVar2 = FUN_0018b44c(*(undefined8 *)(param_2 + 0x48),&DAT_0407ebb1);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_0018bf90(param_2 + 0x30), uVar2 != 0)) {
    plVar6 = *(long **)(param_1 + 0xb0);
    plVar5 = (long *)(param_1 + 0xa8);
    if (plVar6 != plVar5) {
      do {
        if (*(long *)(param_2 + 0x20) == plVar6[6]) {
          uVar3 = FUN_0018bf90(plVar6 + 8);
          if (uVar2 <= uVar3) {
            return 0;
          }
          lVar1 = *plVar6;
          *(long *)(lVar1 + 8) = plVar6[1];
          *(long *)plVar6[1] = lVar1;
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
          (**(code **)plVar6[2])();
          FUN_00187e4c(plVar6);
          FUN_001fb450(plVar5,param_2);
          uVar2 = *(ulong *)(param_1 + 0xb8);
          if (uVar2 < 6) {
            return 1;
          }
          goto LAB_001fb380;
        }
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != plVar5);
    }
    FUN_001fb450(plVar5,param_2);
    uVar2 = *(ulong *)(param_1 + 0xb8);
    if (5 < uVar2) {
LAB_001fb380:
      plVar5 = *(long **)(param_1 + 0xa8);
      *(ulong *)(param_1 + 0xb8) = uVar2 - 1;
      lVar1 = *plVar5;
      puVar4 = (undefined8 *)plVar5[2];
      *(long *)(lVar1 + 8) = plVar5[1];
      *(long *)plVar5[1] = lVar1;
      (*(code *)*puVar4)();
      FUN_00187e4c(plVar5);
    }
  }
  return 1;
}

