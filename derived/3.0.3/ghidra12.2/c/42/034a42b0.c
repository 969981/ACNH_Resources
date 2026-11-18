
void FUN_034a42b0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  void *__ptr;
  
  puVar5 = PTR_DAT_04bb2698;
  plVar9 = (long *)param_1[0x49];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
    __ptr = (void *)plVar9[2];
    if (__ptr != (void *)0x0) {
      lVar6 = *(long *)puVar5;
      if (lVar6 == 0) {
        free(__ptr);
      }
      else {
        plVar7 = (long *)FUN_038cb610(lVar6,__ptr);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
        }
      }
      plVar9[1] = 0;
      plVar9[2] = 0;
    }
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  plVar9 = (long *)param_1[0x39bd];
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[-1];
    plVar7 = plVar9 + -2;
    if (lVar6 != 0) {
      plVar2 = plVar9 + lVar6 * 0x6506;
      uVar3 = lVar6 * 0x32830 - 0x32830;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar3 >> 4;
      plVar8 = plVar2;
      if ((SUB164(auVar4 * ZEXT816(0x1445c417d6079007),8) >> 10 & 1) == 0) {
        *(undefined4 *)(plVar2 + -2) = 0;
        *(undefined4 *)(plVar2 + -0x3284) = 0;
        plVar8 = plVar2 + -0x6506;
        *plVar8 = (long)&PTR_LAB_04b2b2b0;
        plVar2[-0x6505] = 0;
      }
      if (0x3282f < uVar3) {
        puVar1 = PTR_DAT_04bc9cc0 + 0x10;
        do {
          *(undefined4 *)(plVar8 + -0x3284) = 0;
          *(undefined4 *)(plVar8 + -2) = 0;
          *(undefined4 *)(plVar8 + -0x978a) = 0;
          plVar2 = plVar8 + -0xca0c;
          *(undefined4 *)(plVar8 + -0x6508) = 0;
          plVar8[-0x6506] = (long)puVar1;
          plVar8[-0x6505] = 0;
          *plVar2 = (long)puVar1;
          plVar8[-0xca0b] = 0;
          plVar8 = plVar2;
        } while (plVar2 != plVar9);
      }
    }
    lVar6 = *(long *)puVar5;
    if (lVar6 == 0) {
      free(plVar7);
    }
    else {
      plVar9 = (long *)FUN_038cb610(lVar6,plVar7);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,plVar7);
      }
    }
    param_1[0x39bd] = 0;
    *(undefined4 *)(param_1 + 0x39bc) = 0;
  }
  FUN_03465b80(param_1 + 0x3836);
  FUN_034129e0(param_1 + 0x4b);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

