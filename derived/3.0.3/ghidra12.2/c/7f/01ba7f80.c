
void FUN_01ba7f80(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__ptr;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_FUN_04bd0f78;
  plVar5 = *(long **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar6 = (long)*(int *)(param_1 + 0x10) << 3;
    do {
      lVar7 = *plVar5;
      lVar4 = *(long *)(lVar7 + 8);
      if (lVar4 != 0) {
        DAT_05ae78a0 = 0;
        DAT_05ae78a8 = (code *)puVar1;
        if (*(long *)(lVar4 + 0x18) != 0) {
          FUN_038f4360();
        }
        (*DAT_05ae78a8)(lVar4);
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined4 *)(lVar7 + 0x10) = 0;
        DAT_05ae78a0 = 0;
        DAT_05ae78a8 = (code *)0x0;
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    plVar5 = *(long **)(param_1 + 0x18);
  }
  if (plVar5 != (long *)0x0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar6 = 0;
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      do {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *puVar3 = puVar2;
        *(undefined8 **)(param_1 + 0x20) = puVar3;
        puVar2 = puVar3;
      } while (lVar6 < *(int *)(param_1 + 0x10));
    }
    __ptr = *(void **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

