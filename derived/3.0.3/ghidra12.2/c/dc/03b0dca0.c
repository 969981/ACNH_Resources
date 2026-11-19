
void FUN_03b0dca0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *__ptr;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b73238;
  (**(code **)(*(long *)param_1[5] + 0x38))((long *)param_1[5],0);
  (**(code **)(*(long *)param_1[5] + 0x40))();
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  puVar1 = PTR_DAT_04bb2698;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    __ptr = (long *)(lVar4 + -8);
    if (*__ptr != 0) {
      lVar5 = *__ptr * 0x48;
      do {
        thunk_FUN_00352d44(lVar4 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x48;
      } while (lVar5 != 0);
    }
    lVar4 = *(long *)puVar1;
    if (lVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar4,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  uVar3 = FUN_038cb610(*(undefined8 *)puVar1,param_1[2]);
  FUN_00354f68(param_1[2],PTR_LAB_04bd1d90,0);
  FUN_00354ac0(param_1[2],*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),PTR_LAB_04bd1d98,uVar3);
  if ((long *)param_1[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b0ddd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 8))();
  return;
}

