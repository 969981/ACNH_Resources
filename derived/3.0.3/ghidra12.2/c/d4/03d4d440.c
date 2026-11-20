
void FUN_03d4d440(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  void *__ptr;
  int iVar8;
  
  puVar1 = PTR_FUN_04bd0f58;
  if (*(long *)(param_1 + 8) == param_1) {
    return;
  }
  lVar3 = (long)*(int *)(param_1 + 0x14);
  plVar6 = (long *)(*(long *)(param_1 + 8) - lVar3);
  if (plVar6[0x17] != param_2) {
    lVar4 = (long)plVar6 + lVar3;
    do {
      lVar4 = *(long *)(lVar4 + 8);
      plVar6 = (long *)(lVar4 - lVar3);
      if (plVar6 == (long *)(param_1 - lVar3)) {
        return;
      }
    } while (plVar6[0x17] != param_2);
  }
  lVar4 = plVar6[0x13];
  lVar3 = plVar6[0x12];
  if ((int)lVar3 != 0) {
    iVar8 = 0;
    do {
      lVar5 = lVar4 + (long)iVar8 * 0x18;
      DAT_05ae78a0 = 0;
      DAT_05ae78a8 = (code *)puVar1;
      lVar7 = *(long *)(lVar5 + 8);
      if (*(long *)(lVar7 + 0x18) != 0) {
        FUN_03d4e1a8();
      }
      (*DAT_05ae78a8)(lVar7);
      iVar8 = iVar8 + 1;
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined4 *)(lVar5 + 0x10) = 0;
      DAT_05ae78a0 = 0;
      DAT_05ae78a8 = (code *)0x0;
    } while ((int)lVar3 != iVar8);
    lVar4 = plVar6[0x13];
  }
  if (lVar4 != 0) {
    __ptr = (void *)(lVar4 + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    plVar6[0x13] = 0;
    *(undefined4 *)(plVar6 + 0x12) = 0;
  }
  if ((long *)plVar6[6] != (long *)0x0) {
    (**(code **)(*(long *)plVar6[6] + 0x18))();
    plVar6[6] = 0;
  }
  plVar2 = (long *)((long)plVar6 + (long)*(int *)(param_1 + 0x14));
  if (*plVar2 != 0) {
    *(long *)(*plVar2 + 8) = plVar2[1];
  }
  if ((long *)plVar2[1] != (long *)0x0) {
    *(long *)plVar2[1] = *plVar2;
  }
  *plVar2 = 0;
  plVar2[1] = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
                    /* WARNING: Could not recover jumptable at 0x03d4d618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 8))(plVar6);
  return;
}

