
void FUN_032dc9f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x230));
  (**(code **)(**(long **)(param_1 + 0x58) + 0x50))(*(long **)(param_1 + 0x58),0);
  pvVar7 = *(void **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar4 = PTR_DAT_04bb2698;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_032dbbe0(*(undefined8 *)(param_1 + 0x1d8));
  pvVar7 = *(void **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (pvVar7 != (void *)0x0) {
    *(undefined8 *)((long)pvVar7 + 0x20) = 0;
    if (*(long **)((long)pvVar7 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar7 + 0x18) + 8))();
    }
    if (*(long *)puVar4 == 0) {
      free(pvVar7);
      lVar9 = *(long *)(param_1 + 0x20);
      plVar5 = (long *)PTR_DAT_04bb28c8;
      goto joined_r0x032dcadc;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  plVar5 = (long *)PTR_DAT_04bb28c8;
joined_r0x032dcadc:
  PTR_DAT_04bb28c8 = (undefined *)plVar5;
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + -8);
    if (*plVar8 != 0) {
      lVar10 = *plVar8 * 0x110;
      puVar1 = PTR_DAT_04bc95f0 + 0x10;
      puVar2 = PTR_DAT_04bc9600 + 0x10;
      do {
        lVar3 = lVar9 + lVar10;
        plVar6 = *(long **)(lVar3 + -8);
        *(undefined8 *)(lVar3 + -8) = 0;
        *(undefined **)(lVar3 + -0x110) = puVar1;
        if (plVar6 != (long *)0x0 && *plVar5 != 0) {
          (**(code **)(*plVar6 + 0x18))();
          if ((*(long **)(lVar3 + -8) != (long *)0x0) && (*plVar5 != 0)) {
            (**(code **)(**(long **)(lVar3 + -8) + 0x18))();
          }
        }
        *(long *)(lVar3 + -0xb0) = (long)puVar2;
        if (*(long **)(lVar3 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + -0x30) + 8))();
        }
        FUN_032e25f0((long *)(lVar3 + -0xb0));
        if (*(long **)(lVar3 + -0xe0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + -0xe0) + 8))();
        }
        lVar10 = lVar10 + -0x110;
      } while (lVar10 != 0);
    }
    if (*(long *)puVar4 == 0) {
      free(plVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar4,plVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
      }
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pvVar7 = *(void **)(param_1 + 0x30);
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  plVar5 = *(long **)(param_1 + 8);
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if ((plVar8 == (long *)0x0) || (plVar8 == plVar5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032dcc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

