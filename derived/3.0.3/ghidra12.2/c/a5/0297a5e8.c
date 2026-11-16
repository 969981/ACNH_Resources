
void FUN_0297a5e8(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  
  __ptr = (void *)param_1[0x81];
  *param_1 = &PTR_FUN_04a96e70;
  param_1[0x45] = &PTR_FUN_04a96fa8;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[0x81] = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x424) = 0;
  FUN_0297f4d8(param_1 + 0x45);
  param_1[0x45] = &PTR_LAB_04a97000;
  FUN_0297f4d8(param_1 + 0x45);
  puVar4 = (undefined8 *)param_1[0x47];
  param_1[0x45] = &PTR_FUN_04b5e7f8;
  if (puVar4 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x48) < 1) {
      iVar1 = *(int *)(param_1 + 0x48) + -1;
    }
    memset(puVar4,0,(long)iVar1);
    *(undefined1 *)((long)puVar4 + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x46] + 0x18))(param_1 + 0x46);
  uVar2 = FUN_006bd550(param_1[0x47],0);
  puVar4 = param_1 + 1;
  *puVar4 = &PTR_FUN_04a96e90;
  *(undefined4 *)(param_1 + 0x59) = uVar2;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  FUN_0297bb70(puVar4);
  FUN_0297c4b8(puVar4);
  return;
}

