
void FUN_03344eb0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  (**(code **)(*(long *)param_1[3] + 0x10))();
  (**(code **)(*(long *)(param_1[3] + (ulong)(1 < *(uint *)(param_1 + 2)) * 0x158) + 0x10))();
  lVar8 = 0x2b0;
  if (*(uint *)(param_1 + 2) < 3) {
    lVar8 = 0;
  }
  (**(code **)(*(long *)(param_1[3] + lVar8) + 0x10))();
  lVar8 = 0x408;
  if (*(uint *)(param_1 + 2) < 4) {
    lVar8 = 0;
  }
  (**(code **)(*(long *)(param_1[3] + lVar8) + 0x10))();
  lVar8 = 0x560;
  if (*(uint *)(param_1 + 2) < 5) {
    lVar8 = 0;
  }
  (**(code **)(*(long *)(param_1[3] + lVar8) + 0x10))();
  puVar5 = PTR_DAT_04bb28c8;
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    plVar7 = (long *)(lVar8 + -8);
    if (*plVar7 != 0) {
      lVar9 = *plVar7 * 0x158;
      puVar1 = PTR_DAT_04bc9430 + 0x10;
      puVar2 = PTR_DAT_04bc95f0 + 0x10;
      puVar3 = PTR_DAT_04bc9600 + 0x10;
      do {
        lVar4 = lVar8 + lVar9;
        *(undefined **)(lVar4 + -0x158) = puVar1;
        if (*(long **)(lVar4 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x30) + 8))();
        }
        plVar6 = *(long **)(lVar4 + -0x40);
        *(undefined8 *)(lVar4 + -0x40) = 0;
        *(undefined **)(lVar4 + -0x148) = puVar2;
        if ((plVar6 != (long *)0x0) && (*(long *)puVar5 != 0)) {
          (**(code **)(*plVar6 + 0x18))();
          if ((*(long **)(lVar4 + -0x40) != (long *)0x0) && (*(long *)puVar5 != 0)) {
            (**(code **)(**(long **)(lVar4 + -0x40) + 0x18))();
          }
        }
        *(long *)(lVar4 + -0xe8) = (long)puVar3;
        if (*(long **)(lVar4 + -0x68) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x68) + 8))();
        }
        FUN_032e25f0((long *)(lVar4 + -0xe8));
        if (*(long **)(lVar4 + -0x118) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x118) + 8))();
        }
        if (*(long **)(lVar4 + -0x150) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x150) + 8))();
        }
        lVar9 = lVar9 + -0x158;
      } while (lVar9 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar7);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  plVar7 = (long *)*param_1;
  plVar6 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if ((plVar6 == (long *)0x0) || (plVar6 == plVar7)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03345110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

