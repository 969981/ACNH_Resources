
void FUN_038f4ad0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  if (*plVar4 != 0) {
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (*(int *)(lVar3 + 0x100) < 0) {
        (**(code **)PTR_DAT_04bcf348)(lVar3);
        *(undefined4 *)(lVar3 + 0x104) = 0;
        *(uint *)(lVar3 + 0x100) = *(uint *)(lVar3 + 0x100) & 0x7fffffff;
      }
      if (((*(byte *)(param_1 + 0x28) & 3) == 0) && (__ptr = (void *)*plVar4, __ptr != (void *)0x0))
      {
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
          }
        }
      }
    }
    else {
      lVar3 = **(long **)(param_1 + 0x20);
      uVar2 = *(undefined8 *)PTR_DAT_04bd0fa8;
      FUN_038f80e0(lVar3,param_1);
      FUN_038f8ea0(uVar2,*(undefined8 *)(lVar3 + 8));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  }
  return;
}

