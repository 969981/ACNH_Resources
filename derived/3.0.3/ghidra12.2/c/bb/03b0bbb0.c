
void FUN_03b0bbb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_04bc8e38;
  lVar10 = *(long *)(param_1 + 0x28);
  plVar8 = (long *)PTR_DAT_04bb2698;
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + -8);
    if (*plVar9 != 0) {
      lVar11 = *plVar9 * 0x150;
      puVar1 = PTR_DAT_04bd17b0 + 0x10;
      puVar2 = PTR_DAT_04bd17b8 + 0x10;
      puVar3 = PTR_DAT_04bd1498 + 0x10;
      puVar4 = PTR_DAT_04bd14c0 + 0x10;
      do {
        lVar5 = lVar10 + lVar11;
        *(undefined **)(lVar5 + -0x138) = puVar1;
        if (*(undefined8 **)(lVar5 + -0x90) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar5 + -0x90))();
        }
        if ((*(short *)(lVar5 + -0x18) == 0) && (*(long **)(lVar5 + -0x128) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar5 + -0x128) + 8))();
        }
        *(undefined **)(lVar5 + -0x10) = puVar2;
        *(undefined **)(lVar5 + -0x118) = puVar3;
        (**(code **)puVar6)(lVar5 + -0x108);
        *(long *)(lVar5 + -0xd8) = (long)puVar4;
        FUN_038f4940((long *)(lVar5 + -0xd8));
        lVar11 = lVar11 + -0x150;
      } while (lVar11 != 0);
    }
    plVar8 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 != 0) {
    plVar9 = (long *)(lVar10 + -8);
    if (*plVar9 != 0) {
      lVar11 = *plVar9 * 0xb0;
      do {
        FUN_03b0baf4(lVar10 + -0xb0 + lVar11);
        lVar11 = lVar11 + -0xb0;
      } while (lVar11 != 0);
    }
    if (*plVar8 == 0) {
      free(plVar9);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*plVar8,plVar9);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

