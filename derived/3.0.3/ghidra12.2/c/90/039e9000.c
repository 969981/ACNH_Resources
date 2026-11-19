
void FUN_039e9000(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *__ptr;
  long lVar5;
  
  *param_1 = (long)&PTR_FUN_04b6b5e8;
  if ((0 < (int)param_1[0x5b]) && (lVar4 = param_1[0x5c], lVar4 != 0)) {
    __ptr = (long *)(lVar4 + -8);
    if (*__ptr != 0) {
      lVar5 = *__ptr * 0x168;
      do {
        FUN_03922a70(lVar4 + -0x168 + lVar5);
        lVar5 = lVar5 + -0x168;
      } while (lVar5 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
  }
  puVar1 = PTR_DAT_04bd1068 + 0x10;
  param_1[0xf] = (long)(PTR_DAT_04bbd578 + 0x10);
  puVar2 = PTR_DAT_04bd1070;
  param_1[9] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}

