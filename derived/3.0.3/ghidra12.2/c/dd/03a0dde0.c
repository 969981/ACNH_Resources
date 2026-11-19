
void FUN_03a0dde0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *__ptr;
  long lVar7;
  
  puVar3 = PTR_DAT_04bd11b8;
  puVar2 = PTR_DAT_04bb2698;
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar7 = *plVar6 * 200;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      do {
        *(undefined **)(lVar5 + -0x78 + lVar7) = puVar1;
        FUN_0390d560();
        lVar7 = lVar7 + -200;
      } while (lVar7 != 0);
    }
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  __ptr = *(void **)(param_1 + 0x10);
  if (__ptr != (void *)0x0) {
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(lVar5,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(long *)(param_1 + 0x18) = (long)(puVar3 + 0x10);
  FUN_0390d560((long *)(param_1 + 0x18));
  return;
}

