
void FUN_03bf3c20(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar2 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x10))();
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
    lVar7 = (long)*(int *)(param_1 + 0x1c);
    lVar8 = (long)*(undefined8 **)(param_1 + 0x10) - lVar7;
    do {
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x30;
      if (*(long *)(lVar8 + 0x28) != 0) {
        plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x30) + 0x18)
                                     + 0x20))();
        plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
        (**(code **)(*plVar3 + 0x10))();
        if (*(long **)(lVar8 + 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0x58) + 0x40))();
        }
        if (*(long *)(lVar8 + 0x80) != lVar8 + 0x78) {
          lVar9 = (long)*(int *)(lVar8 + 0x8c);
          plVar6 = (long *)(*(long *)(lVar8 + 0x80) - lVar9);
          do {
            (**(code **)(*plVar6 + 0x28))(plVar6);
            plVar6 = (long *)(*(long *)((long)plVar6 + lVar9 + 8) - lVar9);
          } while (plVar6 != (long *)((lVar8 + 0x78) - lVar9));
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      lVar8 = *(long *)(lVar8 + lVar7 + 8) - lVar7;
    } while (lVar8 != (long)puVar1 - lVar7);
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != puVar1) {
    lVar7 = (long)*(int *)(param_1 + 0x1c);
    lVar8 = (long)puVar4 - lVar7;
    do {
      FUN_03be68a0(lVar8);
      lVar8 = *(long *)(lVar8 + lVar7 + 8) - lVar7;
    } while (lVar8 != (long)puVar1 - lVar7);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
  }
  while (puVar4 != puVar1) {
    puVar5 = (undefined8 *)puVar4[1];
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar5;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 8) = param_1 + 8;
  *(undefined8 **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x03bf3e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}

