
void FUN_032dbbe0(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  void *__ptr;
  uint *puVar3;
  ulong uVar4;
  
  FUN_00354f68(param_1[3],param_1[6],0);
  FUN_00354ac0(param_1[3],param_1[4],PTR_FUN_04bc94f8,*param_1);
  plVar2 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puVar3 = (uint *)(param_1 + 1);
  uVar1 = *puVar3;
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(param_1[2] + uVar4 * 8);
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1[4]);
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  __ptr = (void *)param_1[2];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[2] = 0;
  }
  return;
}

