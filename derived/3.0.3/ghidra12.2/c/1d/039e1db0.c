
void FUN_039e1db0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *__ptr;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 2);
  if (lVar5 != 0) {
    __ptr = (long *)(lVar5 + -8);
    if (*__ptr != 0) {
      lVar7 = *__ptr * 0x620;
      lVar6 = 0;
      puVar1 = PTR_DAT_04bd11b8 + 0x10;
      puVar2 = PTR_DAT_04bbd508 + 0x10;
      do {
        lVar3 = lVar5 + lVar7;
        *(long *)(lVar3 + -0x78) = (long)puVar1;
        FUN_0390d560((long *)(lVar3 + -0x78));
        *(undefined **)(lVar3 + -0x158) = puVar2;
        FUN_038fd0e0(lVar3 + -0x100);
        *(undefined **)(lVar3 + -0x238) = puVar2;
        FUN_038fd0e0(lVar3 + -0x1e0);
        *(undefined **)(lVar3 + -0x318) = puVar2;
        FUN_038fd0e0(lVar3 + -0x2c0);
        *(undefined **)(lVar3 + -0x3f8) = puVar2;
        FUN_038fd0e0(lVar3 + -0x3a0);
        *(undefined **)(lVar3 + -0x4d8) = puVar2;
        FUN_038fd0e0(lVar3 + -0x480);
        *(undefined **)(lVar3 + -0x5b8) = puVar2;
        FUN_038fd0e0(lVar3 + -0x560);
        lVar6 = lVar6 + 0x620;
        lVar5 = lVar5 + -0x620;
      } while (lVar7 != lVar6);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  return;
}

