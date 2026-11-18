
void FUN_0329ca50(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  
  (**(code **)(*param_1 + 0x28))();
  if ((int)param_1[2] != 0) {
    lVar3 = (long)(int)param_1[2] << 3;
    puVar1 = (undefined8 *)param_1[3];
    do {
      FUN_03286f10(*puVar1);
      lVar3 = lVar3 + -8;
      puVar1 = puVar1 + 1;
    } while (lVar3 != 0);
    if (0 < (int)param_1[2]) {
      lVar3 = 0;
      do {
        plVar2 = *(long **)(param_1[3] + lVar3 * 8);
        FUN_03286c9c(plVar2);
        lVar3 = lVar3 + 1;
        *plVar2 = param_1[4];
        param_1[4] = (long)plVar2;
      } while (lVar3 < (int)param_1[2]);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_1[1] != 0) {
    FUN_032d1384();
    __ptr = (void *)param_1[1];
    param_1[1] = 0;
    if (__ptr != (void *)0x0) {
      FUN_032d0688(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return;
      }
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329cb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        return;
      }
    }
  }
  return;
}

