
void FUN_039e8290(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *__ptr;
  long *plVar3;
  void *__ptr_00;
  long *__ptr_01;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)param_1[0x3c];
  *param_1 = (long)&PTR_FUN_04b6b570;
  puVar4 = PTR_DAT_04bd1070;
  if (plVar6 != (long *)0x0) {
    __ptr = plVar6 + -1;
    if (*__ptr != 0) {
      puVar4 = PTR_DAT_04bd1070 + 0x10;
      plVar3 = plVar6 + *__ptr * 0x5d;
      do {
        plVar7 = plVar3 + -0x5d;
        *plVar7 = (long)&PTR_FUN_04b6b5e8;
        if ((0 < (int)plVar3[-2]) && (lVar2 = plVar3[-1], lVar2 != 0)) {
          __ptr_01 = (long *)(lVar2 + -8);
          if (*__ptr_01 != 0) {
            lVar5 = *__ptr_01 * 0x168;
            do {
              FUN_03922a70(lVar2 + -0x168 + lVar5);
              lVar5 = lVar5 + -0x168;
            } while (lVar5 != 0);
          }
          if (DAT_05ae7600 == 0) {
            free(__ptr_01);
          }
          else {
            plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_01);
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 0x38))(plVar1,__ptr_01);
            }
          }
          plVar3[-1] = 0;
          *(undefined4 *)(plVar3 + -2) = 0;
        }
        plVar3[-0x4e] = (long)&PTR_LAB_04b67f18;
        plVar3[-0x54] = (long)&PTR_LAB_04b66680;
        *plVar7 = (long)puVar4;
        plVar3 = plVar7;
      } while (plVar7 != plVar6);
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      puVar4 = PTR_DAT_04bd1070;
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      puVar4 = PTR_DAT_04bd1070;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  __ptr_00 = (void *)param_1[0x3e];
  if (__ptr_00 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr_00);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr_00);
      }
    }
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  *param_1 = (long)(puVar4 + 0x10);
  return;
}

