
/* WARNING: Removing unreachable block (ram,0x032de7c0) */
/* WARNING: Removing unreachable block (ram,0x032de83c) */

void FUN_032de6a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_FUN_04bd0f78;
  if (0 < *(int *)(param_1 + 0x410)) {
    lVar7 = 0;
    plVar4 = (long *)(param_1 + 0x90);
    lVar1 = param_1 + 8;
    do {
      plVar4[2] = 0;
      lVar6 = plVar4[3];
      lVar2 = plVar4[4];
      plVar4[3] = 0;
      plVar4[4] = 0;
      if (plVar4 + 2 == *(long **)(param_1 + 0x418)) {
        *(long *)(param_1 + 0x418) = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar2;
      }
      plVar5 = *(long **)(lVar1 + lVar7 * 8);
      DAT_05ae78a0 = 0;
      DAT_05ae78a8 = (code *)puVar3;
      lVar6 = *plVar4;
      if (*(long *)(lVar6 + 0x18) != 0) {
        FUN_038f4360();
      }
      (*DAT_05ae78a8)(lVar6);
      *plVar4 = 0;
      *(undefined4 *)(plVar4 + 1) = 0;
      DAT_05ae78a0 = 0;
      DAT_05ae78a8 = (code *)0x0;
      (**(code **)(*plVar5 + 0x40))(plVar5);
      lVar6 = lVar7 * 8;
      (**(code **)(**(long **)(lVar1 + lVar6) + 0x40))();
      if (*(long **)(lVar1 + lVar6) != (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x428);
        (**(code **)(**(long **)(lVar1 + lVar6) + 0x10))();
        (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined8 *)(lVar1 + lVar6));
        *(undefined8 *)(lVar1 + lVar6) = 0;
      }
      lVar7 = lVar7 + 1;
      plVar4 = plVar4 + 7;
    } while (lVar7 < *(int *)(param_1 + 0x410));
  }
  plVar4 = *(long **)(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(long *)(param_1 + 0x438) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032de85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x428) + 0x20))();
  return;
}

