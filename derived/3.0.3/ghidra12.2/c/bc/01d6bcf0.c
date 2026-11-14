
void FUN_01d6bcf0(long param_1)

{
  undefined8 *__ptr;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    do {
      if (iVar3 < 1) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = *(long **)(param_1 + 0x10);
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      }
      __ptr = (undefined8 *)0x0;
      if (plVar4 != (long *)0x0) {
        __ptr = (undefined8 *)((long)plVar4 - (long)*(int *)(param_1 + 0x1c));
      }
      uVar2 = (**(code **)*__ptr)(__ptr);
      if (*(long *)puVar1 == 0) {
        free(__ptr);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        }
      }
      iVar3 = *(int *)(param_1 + 0x18);
    } while ((uVar2 & 1) == 0 && iVar3 != 0);
  }
  return;
}

