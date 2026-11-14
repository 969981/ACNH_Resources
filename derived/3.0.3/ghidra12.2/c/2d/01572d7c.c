
void FUN_01572d7c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *__ptr;
  
  *param_1 = &PTR_FUN_049ab458;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xec] = 0;
  param_1[0xe6] = 0;
  param_1[0xe0] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xda] = 0;
  param_1[0xd4] = 0;
  param_1[0xe7] = puVar1;
  param_1[0xe1] = puVar1;
  param_1[0xdb] = puVar1;
  param_1[0xd5] = puVar1;
  param_1[0xcf] = puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[199] = PTR_DAT_04bb3550 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar2 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar2 + 0x330),param_1[0xce]);
  puVar2 = PTR_DAT_04bb2698;
  if (((uVar4 & 1) != 0) && (__ptr = (void *)param_1[0xce], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[0xce] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  param_1[0xc6] = 0;
  param_1[0xc0] = 0;
  param_1[0xb5] = puVar1;
  param_1[0xba] = 0;
  param_1[0xc1] = puVar3 + 0x10;
  param_1[0xbb] = puVar3 + 0x10;
  FUN_015731ec(param_1);
  if (*(long *)puVar2 == 0) {
    free(param_1);
    return;
  }
  plVar5 = (long *)FUN_038cb610(*(long *)puVar2,param_1);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01572ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  return;
}

