
void FUN_03ac9c00(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = (long)&PTR_FUN_04b71308;
  FUN_03a0f88c(param_1 + 0x70);
  lVar10 = param_1[0x6f];
  puVar7 = PTR_DAT_04bbd578;
  puVar8 = PTR_DAT_04bd1068;
  plVar4 = (long *)PTR_DAT_04bb2698;
  if (lVar10 != 0) {
    plVar5 = (long *)(lVar10 + -8);
    if (*plVar5 != 0) {
      lVar9 = *plVar5 * 0x5d0;
      puVar7 = PTR_DAT_04bd1488 + 0x10;
      puVar8 = PTR_DAT_04bbd578 + 0x10;
      puVar1 = PTR_DAT_04bd1068 + 0x10;
      do {
        lVar2 = lVar10 + lVar9;
        *(long *)(lVar2 + -0x5d0) = (long)puVar7;
        FUN_03ad1490(lVar2 + -0x528);
        FUN_03ad1490(lVar2 + -0x540);
        FUN_03ad1490(lVar2 + -0x558);
        lVar9 = lVar9 + -0x5d0;
        *(long *)(lVar2 + -0x5d0) = (long)puVar1;
        *(undefined **)(lVar2 + -0x580) = puVar8;
      } while (lVar9 != 0);
    }
    plVar4 = (long *)PTR_DAT_04bb2698;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar5);
      puVar7 = PTR_DAT_04bbd578;
      puVar8 = PTR_DAT_04bd1068;
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar5);
      puVar8 = PTR_DAT_04bd1068;
      puVar7 = PTR_DAT_04bbd578;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar5);
      }
    }
    param_1[0x6f] = 0;
    *(undefined4 *)(param_1 + 0x6e) = 0;
  }
  FUN_03a0f48c(param_1 + 0x70);
  puVar1 = PTR_DAT_04bd1358 + 0x10;
  param_1[0x69] = (long)puVar1;
  if (*(char *)((long)param_1 + 0x36c) != '\0') {
    pvVar6 = (void *)param_1[0x6c];
    if (pvVar6 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar6);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*plVar4,pvVar6);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x36c) = 0;
  }
  puVar7 = puVar7 + 0x10;
  param_1[0x60] = (long)puVar1;
  param_1[0x69] = (long)puVar7;
  param_1[0x65] = (long)puVar7;
  if (*(char *)((long)param_1 + 0x324) != '\0') {
    pvVar6 = (void *)param_1[99];
    if (pvVar6 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*plVar4,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x324) = 0;
  }
  param_1[0x60] = (long)puVar7;
  param_1[0x5c] = (long)puVar7;
  param_1[0x58] = (long)puVar7;
  param_1[0x54] = (long)puVar7;
  param_1[0x50] = (long)puVar7;
  param_1[0x4c] = (long)puVar7;
  param_1[0x48] = (long)puVar7;
  param_1[0x44] = (long)puVar7;
  puVar7 = PTR_DAT_04bd1070;
  param_1[0x3e] = (long)(puVar8 + 0x10);
  *param_1 = (long)(puVar7 + 0x10);
  return;
}

